#include "global.h"
#include "graphics.h"
#include "mail.h"
#include "palette.h"
#include "pokemon_debug.h"
#include "pokemon_icon.h"
#include "sprite.h"
#include "data.h"

#define POKE_ICON_BASE_PAL_TAG 56000

#define INVALID_ICON_SPECIES SPECIES_NONE // Oddly specific, used when an icon should be a ?. Any of the 'old unown' would work

struct MonIconSpriteTemplate
{
    const struct OamData *oam;
    const u8 *image;
    const union AnimCmd *const *anims;
    const union AffineAnimCmd *const *affineAnims;
    void (*callback)(struct Sprite *);
    u16 paletteTag;
};

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *, s16, s16, u8);
static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite);

const u8 *const gMonIconTable[] =
{
    [SPECIES_NONE] = gMonIcon_Bulbasaur,
    [SPECIES_BULBASAUR] = gMonIcon_Bulbasaur,
    [SPECIES_IVYSAUR] = gMonIcon_Ivysaur,
    [SPECIES_VENUSAUR] = gMonIcon_Venusaur,
    [SPECIES_CHARMANDER] = gMonIcon_Charmander,
    [SPECIES_CHARMELEON] = gMonIcon_Charmeleon,
    [SPECIES_CHARIZARD] = gMonIcon_Charizard,
    [SPECIES_SQUIRTLE] = gMonIcon_Squirtle,
    [SPECIES_WARTORTLE] = gMonIcon_Wartortle,
    [SPECIES_BLASTOISE] = gMonIcon_Blastoise,
    [SPECIES_PIKACHU] = gMonIcon_Pikachu,
    [SPECIES_RAICHU] = gMonIcon_Raichu,
    [SPECIES_VULPIX] = gMonIcon_Vulpix,
    [SPECIES_NINETALES] = gMonIcon_Ninetales,
    [SPECIES_JIGGLYPUFF] = gMonIcon_Jigglypuff,
    [SPECIES_WIGGLYTUFF] = gMonIcon_Wigglytuff,
    [SPECIES_TENTACOOL] = gMonIcon_Tentacool,
    [SPECIES_TENTACRUEL] = gMonIcon_Tentacruel,
    [SPECIES_GRIMER] = gMonIcon_Grimer,
    [SPECIES_MUK] = gMonIcon_Muk,
    [SPECIES_KOFFING] = gMonIcon_Koffing,
    [SPECIES_WEEZING] = gMonIcon_Weezing,
    [SPECIES_TANGELA] = gMonIcon_Tangela,
    [SPECIES_SCYTHER] = gMonIcon_Scyther,
    [SPECIES_MAGMAR] = gMonIcon_Magmar,
    [SPECIES_DITTO] = gMonIcon_Ditto,
    [SPECIES_EEVEE] = gMonIcon_Eevee,
    [SPECIES_VAPOREON] = gMonIcon_Vaporeon,
    [SPECIES_JOLTEON] = gMonIcon_Jolteon,
    [SPECIES_FLAREON] = gMonIcon_Flareon,
    [SPECIES_KABUTO] = gMonIcon_Kabuto,
    [SPECIES_KABUTOPS] = gMonIcon_Kabutops,
    [SPECIES_PICHU] = gMonIcon_Pichu,
    [SPECIES_IGGLYBUFF] = gMonIcon_Igglybuff,
    [SPECIES_NATU] = gMonIcon_Natu,
    [SPECIES_XATU] = gMonIcon_Xatu,
    [SPECIES_SUNKERN] = gMonIcon_Sunkern,
    [SPECIES_SUNFLORA] = gMonIcon_Sunflora,
    [SPECIES_ESPEON] = gMonIcon_Espeon,
    [SPECIES_UMBREON] = gMonIcon_Umbreon,
    [SPECIES_SCIZOR] = gMonIcon_Scizor,
    [SPECIES_SKARMORY] = gMonIcon_Skarmory,
    [SPECIES_MAGBY] = gMonIcon_Magby,
    [SPECIES_TORKOAL] = gMonIcon_Torkoal,
    [SPECIES_NUMEL] = gMonIcon_Numel,
    [SPECIES_CAMERUPT] = gMonIcon_Camerupt,
    [SPECIES_SNORUNT] = gMonIcon_Snorunt,
    [SPECIES_GLALIE] = gMonIcon_Glalie,
    [SPECIES_RALTS] = gMonIcon_Ralts,
    [SPECIES_KIRLIA] = gMonIcon_Kirlia,
    [SPECIES_GARDEVOIR] = gMonIcon_Gardevoir,
    [SPECIES_REGIROCK] = gMonIcon_Regirock,
    [SPECIES_REGICE] = gMonIcon_Regice,
    [SPECIES_REGISTEEL] = gMonIcon_Registeel,
    [SPECIES_KYOGRE] = gMonIcon_Kyogre,
    [SPECIES_GROUDON] = gMonIcon_Groudon,
    [SPECIES_RAYQUAZA] = gMonIcon_Rayquaza,
    [SPECIES_LATIAS] = gMonIcon_Latias,
    [SPECIES_LATIOS] = gMonIcon_Latios,
    [SPECIES_JIRACHI] = gMonIcon_Jirachi,
    [SPECIES_DEOXYS] = gMonIcon_Deoxys,
    [SPECIES_SHINX] = gMonIcon_Shinx,
    [SPECIES_LUXIO] = gMonIcon_Luxio,
    [SPECIES_LUXRAY] = gMonIcon_Luxray,
    [SPECIES_COMBEE] = gMonIcon_Combee,
    [SPECIES_VESPIQUEN] = gMonIcon_Vespiquen,
    [SPECIES_RIOLU] = gMonIcon_Riolu,
    [SPECIES_LUCARIO] = gMonIcon_Lucario,
    [SPECIES_TANGROWTH] = gMonIcon_Tangrowth,
    [SPECIES_MAGMORTAR] = gMonIcon_Magmortar,
    [SPECIES_GALLADE] = gMonIcon_Gallade,
    [SPECIES_PURRLOIN] = gMonIcon_Purrloin,
    [SPECIES_LIEPARD] = gMonIcon_Liepard,
    [SPECIES_SCRAGGY] = gMonIcon_Scraggy,
    [SPECIES_SCRAFTY] = gMonIcon_Scrafty,
    [SPECIES_PAWNIARD] = gMonIcon_Pawniard,
    [SPECIES_BISHARP] = gMonIcon_Bisharp,
    [SPECIES_DEINO] = gMonIcon_Deino,
    [SPECIES_ZWEILOUS] = gMonIcon_Zweilous,
    [SPECIES_HYDREIGON] = gMonIcon_Hydreigon,
    [SPECIES_SYLVEON] = gMonIcon_Sylveon,
    [SPECIES_BERGMITE] = gMonIcon_Bergmite,
    [SPECIES_AVALUGG] = gMonIcon_Avalugg,
    // Custom
    [SPECIES_KIPVINE] = gMonIcon_Kipvine,
    [SPECIES_PLAGUAR] = gMonIcon_Plaguar,
    [SPECIES_PHOTOGUAR] = gMonIcon_Photoguar,
    [SPECIES_RAIAD] = gMonIcon_Raiad,
    [SPECIES_RUSALKA] = gMonIcon_Rusalka,
    [SPECIES_FALLSHEER] = gMonIcon_Fallsheer,
    [SPECIES_SCUIRET] = gMonIcon_Scuiret,
    [SPECIES_PTERORET] = gMonIcon_Pteroret,
    [SPECIES_BIRROBIRD] = gMonIcon_Birrobird,
    [SPECIES_EAGELEAG] = gMonIcon_Eageleag,
    [SPECIES_GRIFFOGRIF] = gMonIcon_Griffogrif,
    [SPECIES_MAFICHU] = gMonIcon_Mafichu,
    [SPECIES_DEMICHU] = gMonIcon_Demichu,
    [SPECIES_CUTBIT] = gMonIcon_Cutbit,
    [SPECIES_FLABBIT] = gMonIcon_Flabbit,
    [SPECIES_BLITZRDRIX] = gMonIcon_Blitzrdrix,
    [SPECIES_NEINSOUL] = gMonIcon_Neinsoul,
    [SPECIES_SPRUVYNE] = gMonIcon_Spruvyne,
    [SPECIES_QUERVYNE] = gMonIcon_Quervyne,
    [SPECIES_SAMPERVYNE] = gMonIcon_Sampervyne,
    [SPECIES_RANGIFE] = gMonIcon_Rangife,
    [SPECIES_TARANALLOY] = gMonIcon_Taranalloy,
    [SPECIES_ALCESTEEL] = gMonIcon_Alcesteel,
    [SPECIES_ARAKID] = gMonIcon_Arakid,
    [SPECIES_RAKIDONE] = gMonIcon_Rakidone,
    [SPECIES_TOTEMNA] = gMonIcon_Totemna,
    [SPECIES_PSKULPT] = gMonIcon_Pskulpt,
    [SPECIES_ESPATCH] = gMonIcon_Espatch,
    [SPECIES_FIZZIX] = gMonIcon_Fizzix,
    [SPECIES_GRAVITOMIX] = gMonIcon_Gravitomix,
    [SPECIES_AMUNATU] = gMonIcon_Amunatu,
    [SPECIES_GROPP] = gMonIcon_Gropp,
    [SPECIES_CYCLOBBER] = gMonIcon_Cyclobber,
    [SPECIES_TOTSICLE] = gMonIcon_Totsicle,
    [SPECIES_FROSTIDON] = gMonIcon_Frostidon,
    [SPECIES_GLACRIEK] = gMonIcon_Glacriek,
    [SPECIES_AMEOERG] = gMonIcon_Ameoberg,
    [SPECIES_SARPHON] = gMonIcon_Sarphon,
    [SPECIES_AEROPHAGUS] = gMonIcon_Aerophagus,
    [SPECIES_ROXXIK] = gMonIcon_Roxxik,
    [SPECIES_GRAVELISK] = gMonIcon_Gravelisk,
    [SPECIES_SKARMOROS] = gMonIcon_Skarmoros,
    [SPECIES_PHENYXY] = gMonIcon_Phenyxy,
    [SPECIES_RESURAKETH] = gMonIcon_Resuraketh,
    [SPECIES_TORKYLLIUM] = gMonIcon_Torkyllium,
    [SPECIES_MINOTRANT] = gMonIcon_Minotrant,
    [SPECIES_ZIGGLYGRUF] = gMonIcon_Zigglygruf,
    [SPECIES_GOMM] = gMonIcon_Gomm,
    [SPECIES_MOUNTEGROM] = gMonIcon_Mountegrom,
    [SPECIES_OVARAPT] = gMonIcon_Ovarapt,
    [SPECIES_VELOKOTA] = gMonIcon_Velokota,
    [SPECIES_UTABAZAI] = gMonIcon_Utabazai,
    [SPECIES_KROA] = gMonIcon_Kroa,
    [SPECIES_KROAEA] = gMonIcon_Kroaea,
    [SPECIES_KROAEAKAOA] = gMonIcon_Kroaeakaoa,
    [SPECIES_ARCHIGLOOM] = gMonIcon_Archigloom,
    [SPECIES_NEMELT] = gMonIcon_Nemelt,
    [SPECIES_VARAFLARE] = gMonIcon_Varaflare,
    [SPECIES_KOMODOR] = gMonIcon_Komodor,
    [SPECIES_SILHOU] = gMonIcon_Silhou,
    [SPECIES_SILGAUNT] = gMonIcon_Silgaunt,
    [SPECIES_VAILEYE] = gMonIcon_Vaileye,
    [SPECIES_BLOODNAUNT] = gMonIcon_Bloodnaut,
    [SPECIES_ANPHAGE] = gMonIcon_Anphage,
    [SPECIES_TUSGOYF] = gMonIcon_Tusgoyf,
    [SPECIES_LLURSCAYF] = gMonIcon_Llurscayf,
    [SPECIES_CRANISECT] = gMonIcon_Cranisect,
    [SPECIES_SKULTULANT] = gMonIcon_Skultulant,
    [SPECIES_CHRYSAL] = gMonIcon_Chrysal,
    [SPECIES_VELLAVALE] = gMonIcon_Vellavale,
    [SPECIES_VELLIDAXOS] = gMonIcon_Vellidaxos,
    [SPECIES_GHOULSLASH] = gMonIcon_Ghoulslash,
    [SPECIES_MURKEON]       = gMonIcon_Murkeon,
    [SPECIES_OBSIDEON]      = gMonIcon_Obsideon,
    [SPECIES_FUREON]        = gMonIcon_Fureon,
    [SPECIES_SOOTHEON]      = gMonIcon_Sootheon,
    [SPECIES_MOOREON]       = gMonIcon_Mooreon,
    [SPECIES_FROSTEON]      = gMonIcon_Frosteon,
    [SPECIES_RADEON]        = gMonIcon_Radeon,
    [SPECIES_POSPHEON]      = gMonIcon_Pospheon,
    [SPECIES_PULSEON]       = gMonIcon_Pulseon,
    [SPECIES_STATICEON]     = gMonIcon_Staticeon,
    [SPECIES_BLIZZEON]      = gMonIcon_Blizzeon,
    [SPECIES_DYNAMEON]      = gMonIcon_Dynameon,
    [SPECIES_DEVILEON]      = gMonIcon_Devileon,
    [SPECIES_CINDEREON]     = gMonIcon_Cindereon,
    [SPECIES_BLANEON]       = gMonIcon_Blaneon,
    [SPECIES_ECLIPSEON]     = gMonIcon_Eclipseon,
    [SPECIES_AROMEON]       = gMonIcon_Aromeon,
    [SPECIES_ISYCLEON]      = gMonIcon_Isycleon,
    [SPECIES_ZEREON]        = gMonIcon_Zereon,
    [SPECIES_NOCTIVEON]     = gMonIcon_Noctiveon,
    [SPECIES_PINEON]        = gMonIcon_Pineon,
    [SPECIES_PIXEON]        = gMonIcon_Pixeon,
    [SPECIES_LUNNEON]       = gMonIcon_Lunneon,
    [SPECIES_CHERREON]      = gMonIcon_Cherreon,
    [SPECIES_HAZEON]        = gMonIcon_Hazeon,
    [SPECIES_SERENEON]      = gMonIcon_Sereneon,
    [SPECIES_MISTEON]       = gMonIcon_Misteon,
    [SPECIES_PUREON]        = gMonIcon_Pureon,    
    [SPECIES_SALATAD]       = gMonIcon_Salatad,
    [SPECIES_SALANIP]       = gMonIcon_Salanip,
    [SPECIES_SALASLAM]      = gMonIcon_Salaslam,
    [SPECIES_HALMSTAR]      = gMonIcon_Halmstar,
    [SPECIES_SNUFFUZZ]      = gMonIcon_Snuffuzz,
    [SPECIES_STICKIT]       = gMonIcon_Stickit,
    [SPECIES_STICKUT]       = gMonIcon_Stickut,
    [SPECIES_UGLING]        = gMonIcon_Ugling,
    [SPECIES_SWELLEGANT]    = gMonIcon_Swellegant,
    [SPECIES_ANGLING]       = gMonIcon_Angling,
    [SPECIES_ANGELISH]     = gMonIcon_Angelish,
    [SPECIES_ANGELIGHT]     = gMonIcon_Angelight,
    [SPECIES_AQUAD]         = gMonIcon_Aquad,
    [SPECIES_SMAQUA]        = gMonIcon_Smaqua,
    [SPECIES_BEOPUP]        = gMonIcon_Beopup,
    [SPECIES_WEREHIDE]      = gMonIcon_Werehide,
    [SPECIES_VAMBAT]        = gMonIcon_Vambat,
    [SPECIES_DRACUBAT]      = gMonIcon_Dracubat,
    [SPECIES_COUNTULA]      = gMonIcon_Countula,
    [SPECIES_PUPOOL]        = gMonIcon_Pupool,
    [SPECIES_POOLDOG]       = gMonIcon_Pooldog,
    [SPECIES_PORFIN]        = gMonIcon_Porfin,
    [SPECIES_DOFLAP]        = gMonIcon_Doflap,
    [SPECIES_PARADISO]      = gMonIcon_Paradiso,
    [SPECIES_PARASEA]       = gMonIcon_Parasea,
    [SPECIES_AQLARVA]       = gMonIcon_Aqlarva,
    [SPECIES_MOSLIQUO]      = gMonIcon_Mosliquo,
    [SPECIES_NAWALE]        = gMonIcon_Nawale,
    [SPECIES_WHALEY]        = gMonIcon_Whaley,
    [SPECIES_SQUIDART]      = gMonIcon_Squidart,
    [SPECIES_LISQUID]       = gMonIcon_Lisquid,
    [SPECIES_HAMAWL]        = gMonIcon_Hamawl,
    [SPECIES_SILVICIOUS]    = gMonIcon_Silvicious, 

    [SPECIES_VENUSAUR_MEGA] = gMonIcon_VenusaurMega,
    [SPECIES_CHARIZARD_MEGA_X] = gMonIcon_CharizardMegaX,
    [SPECIES_CHARIZARD_MEGA_Y] = gMonIcon_CharizardMegaY,
    [SPECIES_BLASTOISE_MEGA] = gMonIcon_BlastoiseMega,
    [SPECIES_SCIZOR_MEGA] = gMonIcon_ScizorMega,
    [SPECIES_GARDEVOIR_MEGA] = gMonIcon_GardevoirMega,
    [SPECIES_CAMERUPT_MEGA] = gMonIcon_CameruptMega,
    [SPECIES_GLALIE_MEGA] = gMonIcon_GlalieMega,
    [SPECIES_LUCARIO_MEGA] = gMonIcon_LucarioMega,
    [SPECIES_GALLADE_MEGA] = gMonIcon_GalladeMega,
    [SPECIES_RAICHU_ALOLAN] = gMonIcon_RaichuAlolan,

    [SPECIES_PIKACHU_COSPLAY] = gMonIcon_PikachuCosplay,
    [SPECIES_PIKACHU_ROCK_STAR] = gMonIcon_PikachuRockStar,
    [SPECIES_PIKACHU_BELLE] = gMonIcon_PikachuBelle,
    [SPECIES_PIKACHU_POP_STAR] = gMonIcon_PikachuPopStar,
    [SPECIES_PIKACHU_PH_D] = gMonIcon_PikachuPhD,
    [SPECIES_PIKACHU_LIBRE] = gMonIcon_PikachuLibre,
    [SPECIES_PIKACHU_ORIGINAL_CAP] = gMonIcon_PikachuOriginalCap,
    [SPECIES_PIKACHU_HOENN_CAP] = gMonIcon_PikachuHoennCap,
    [SPECIES_PIKACHU_SINNOH_CAP] = gMonIcon_PikachuSinnohCap,
    [SPECIES_PIKACHU_UNOVA_CAP] = gMonIcon_PikachuUnovaCap,
    [SPECIES_PIKACHU_KALOS_CAP] = gMonIcon_PikachuKalosCap,
    [SPECIES_PIKACHU_ALOLA_CAP] = gMonIcon_PikachuAlolaCap,
    [SPECIES_PIKACHU_PARTNER_CAP] = gMonIcon_PikachuPartnerCap,
    [SPECIES_PIKACHU_WORLD_CAP] = gMonIcon_QuestionMark,
    [SPECIES_PICHU_SPIKY_EARED] = gMonIcon_PichuSpikyEared,
    
    [SPECIES_DEOXYS_ATTACK] = gMonIcon_DeoxysAttack,
    [SPECIES_DEOXYS_DEFENSE] = gMonIcon_DeoxysDefense,
    [SPECIES_DEOXYS_SPEED] = gMonIcon_DeoxysSpeed,

    [SPECIES_EGG] = gMonIcon_Egg,
};

const u8 *const gMonIconTableFemale[] =
{
    [SPECIES_EEVEE] = gMonIcon_Eevee,
    [SPECIES_SHINX] = gMonIcon_Shinx,
    [SPECIES_COMBEE] = gMonIcon_Combee,
};

const u8 gMonIconPaletteIndices[] =
{
    [SPECIES_BULBASAUR] = 4,
    [SPECIES_IVYSAUR] = 4,
    [SPECIES_VENUSAUR] = 4,
    [SPECIES_CHARMANDER] = 0,
    [SPECIES_CHARMELEON] = 0,
    [SPECIES_CHARIZARD] = 0,
    [SPECIES_SQUIRTLE] = 0,
    [SPECIES_WARTORTLE] = 2,
    [SPECIES_BLASTOISE] = 2,
    [SPECIES_PIKACHU] = 2,
    [SPECIES_RAICHU] = 0,
    [SPECIES_VULPIX] = 5,
    [SPECIES_NINETALES] = 3,
    [SPECIES_JIGGLYPUFF] = 0,
    [SPECIES_WIGGLYTUFF] = 0,
    [SPECIES_TENTACOOL] = 0,
    [SPECIES_TENTACRUEL] = 0,
    [SPECIES_KOFFING] = 2,
    [SPECIES_WEEZING] = 2,
    [SPECIES_TANGELA] = 0,
    [SPECIES_SCYTHER] = 1,
    [SPECIES_MAGMAR] = 0,
    [SPECIES_DITTO] = 2,
    [SPECIES_EEVEE] = 2,
    [SPECIES_VAPOREON] = 0,
    [SPECIES_JOLTEON] = 2,
    [SPECIES_FLAREON] = 3,
    [SPECIES_KABUTO] = 2,
    [SPECIES_KABUTOPS] = 2,
    [SPECIES_PICHU] = 1,
    [SPECIES_IGGLYBUFF] = 1,
    [SPECIES_NATU] = 1,
    [SPECIES_XATU] = 1,
    [SPECIES_SUNKERN] = 1,
    [SPECIES_SUNFLORA] = 1,
    [SPECIES_ESPEON] = 2,
    [SPECIES_UMBREON] = 0,
    [SPECIES_SCIZOR] = 0,
    [SPECIES_SKARMORY] = 0,
    [SPECIES_MAGBY] = 0,
    [SPECIES_TORKOAL] = 2,
    [SPECIES_NUMEL] = 1,
    [SPECIES_CAMERUPT] = 0,
    [SPECIES_SNORUNT] = 2,
    [SPECIES_GLALIE] = 0,
    [SPECIES_RALTS] = 1,
    [SPECIES_KIRLIA] = 1,
    [SPECIES_GARDEVOIR] = 1,
    [SPECIES_REGIROCK] = 2,
    [SPECIES_REGICE] = 0,
    [SPECIES_REGISTEEL] = 2,
    [SPECIES_KYOGRE] = 2,
    [SPECIES_GROUDON] = 0,
    [SPECIES_RAYQUAZA] = 1,
    [SPECIES_LATIAS] = 0,
    [SPECIES_LATIOS] = 0,
    [SPECIES_JIRACHI] = 0,
    [SPECIES_DEOXYS] = 0,
    [SPECIES_SHINX] = 0,
    [SPECIES_LUXIO] = 0,
    [SPECIES_LUXRAY] = 0,
    [SPECIES_RIOLU] = 2,
    [SPECIES_LUCARIO] = 2,
    [SPECIES_TANGROWTH] = 0,
    [SPECIES_MAGMORTAR] = 0,
    [SPECIES_LEAFEON] = 1,
    [SPECIES_GLACEON] = 0,
    [SPECIES_GALLADE] = 1,
    [SPECIES_FROSLASS] = 0,
    [SPECIES_PURRLOIN] = 0,
    [SPECIES_LIEPARD] = 0,
    [SPECIES_SCRAGGY] = 2,
    [SPECIES_SCRAFTY] = 0,
    [SPECIES_PAWNIARD] = 0,
    [SPECIES_BISHARP] = 0,
    [SPECIES_DEINO] = 2,
    [SPECIES_ZWEILOUS] = 2,
    [SPECIES_HYDREIGON] = 2,
    [SPECIES_SYLVEON] = 0,
    [SPECIES_BERGMITE] = 0,
    [SPECIES_AVALUGG] = 0,

    [SPECIES_VENUSAUR_MEGA] = 1,
    [SPECIES_CHARIZARD_MEGA_X] = 0,
    [SPECIES_CHARIZARD_MEGA_Y] = 0,
    [SPECIES_BLASTOISE_MEGA] = 2,
    [SPECIES_SCIZOR_MEGA] = 0,
    [SPECIES_GARDEVOIR_MEGA] = 1,
    [SPECIES_CAMERUPT_MEGA] = 0,
    [SPECIES_GLALIE_MEGA] = 0,
    [SPECIES_LUCARIO_MEGA] = 2,
    [SPECIES_GALLADE_MEGA] = 1,
    [SPECIES_RAICHU_ALOLAN] = 2,
    [SPECIES_EGG] = 1,
};

const u8 gMonIconPaletteIndicesFemale[] =
{
    [SPECIES_EEVEE] = 2,
    [SPECIES_SHINX] = 0,
    [SPECIES_COMBEE] = 0,
};

const struct SpritePalette gMonIconPaletteTable[6] =
{
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },
    { gMonIconPalettes[3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5], POKE_ICON_BASE_PAL_TAG + 5 },
};

static const struct OamData sMonIconOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

// fastest to slowest

static const union AnimCmd sAnim_0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_2[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_3[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_4[] =
{
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29), // frame 0 is repeated
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sMonIconAnims[] =
{
    sAnim_0,
    sAnim_1,
    sAnim_2,
    sAnim_3,
    sAnim_4,
};

static const union AffineAnimCmd sAffineAnim_0[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_1[] =
{
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sMonIconAffineAnims[] =
{
    sAffineAnim_0,
    sAffineAnim_1,
};

static const u16 sSpriteImageSizes[3][4] =
{
    [ST_OAM_SQUARE] =
    {
        [SPRITE_SIZE(8x8)]   =  8 * 8  / 2,
        [SPRITE_SIZE(16x16)] = 16 * 16 / 2,
        [SPRITE_SIZE(32x32)] = 32 * 32 / 2,
        [SPRITE_SIZE(64x64)] = 64 * 64 / 2,
    },
    [ST_OAM_H_RECTANGLE] =
    {
        [SPRITE_SIZE(16x8)]  = 16 * 8  / 2,
        [SPRITE_SIZE(32x8)]  = 32 * 8  / 2,
        [SPRITE_SIZE(32x16)] = 32 * 16 / 2,
        [SPRITE_SIZE(64x32)] = 64 * 32 / 2,
    },
    [ST_OAM_V_RECTANGLE] =
    {
        [SPRITE_SIZE(8x16)]  =  8 * 16 / 2,
        [SPRITE_SIZE(8x32)]  =  8 * 32 / 2,
        [SPRITE_SIZE(16x32)] = 16 * 32 / 2,
        [SPRITE_SIZE(32x64)] = 32 * 64 / 2,
    },
};

u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = GetMonIconPtr(species, personality),
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    if (species > NUM_SPECIES)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;
    else if (ShouldShowFemaleDifferences(species, personality))
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndicesFemale[species];

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}


u8 CreateMonIconNoPersonality(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = NULL,
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    iconTemplate.image = GetMonIconTiles(species, 0);
    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 GetIconSpecies(u16 species, u32 personality)
{
    u16 result;

    if (species == SPECIES_UNOWN)
    {
        result = GetUnownSpeciesId(personality);
    }
    else
    {
        if (species > NUM_SPECIES)
            result = INVALID_ICON_SPECIES;
        else
            result = species;
    }

    return result;
}

u16 GetUnownLetterByPersonality(u32 personality)
{
    if (!personality)
        return 0;
    else
        return GET_UNOWN_LETTER(personality);
}

u16 GetIconSpeciesNoPersonality(u16 species)
{
    u16 value;

    if (MailSpeciesToSpecies(species, &value) == SPECIES_UNOWN)
    {
        value += SPECIES_UNOWN_B; // TODO
        return value;
    }
    else
    {
        if (species > NUM_SPECIES)
            species = INVALID_ICON_SPECIES;

        return GetIconSpecies(species, 0);
    }
}

const u8 *GetMonIconPtr(u16 species, u32 personality)
{
    return GetMonIconTiles(GetIconSpecies(species, personality), personality);
}

void FreeAndDestroyMonIconSprite(struct Sprite *sprite)
{
    FreeAndDestroyMonIconSprite_(sprite);
}

void LoadMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

// unused
void SafeLoadMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void LoadMonIconPalette(u16 species)
{
    u8 palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void LoadMonIconPalettePersonality(u16 species, u32 personality)
{
    u8 palIndex;
    if (ShouldShowFemaleDifferences(species, personality))
        palIndex = gMonIconPaletteIndicesFemale[species];
    else
        palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void FreeMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        FreeSpritePaletteByTag(gMonIconPaletteTable[i].tag);
}

// unused
void SafeFreeMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void FreeMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void SpriteCB_MonIcon(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

const u8 *GetMonIconTiles(u16 species, u32 personality)
{
    const u8 *iconSprite;

    if (ShouldShowFemaleDifferences(species, personality))
        iconSprite = gMonIconTableFemale[species];
    else
        iconSprite = gMonIconTable[species];

    return iconSprite;
}

void TryLoadAllMonIconPalettesAtOffset(u16 offset)
{
    s32 i;
    const struct SpritePalette* monIconPalettePtr;

    if (offset <= 0xA0)
    {
        monIconPalettePtr = gMonIconPaletteTable;
        for(i = ARRAY_COUNT(gMonIconPaletteTable) - 1; i >= 0; i--)
        {
            LoadPalette(monIconPalettePtr->data, offset, 0x20);
            offset += 0x10;
            monIconPalettePtr++;
        }
    }
}

u8 GetValidMonIconPalIndex(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteIndices[species];
}

u8 GetMonIconPaletteIndexFromSpecies(u16 species)
{
    return gMonIconPaletteIndices[species];
}

const u16 *GetValidMonIconPalettePtr(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteTable[gMonIconPaletteIndices[species]].data;
}

u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration & 0xFF;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;

    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size] };

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = TAG_NONE,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite)
{
    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] };
    sprite->images = &image;
    DestroySprite(sprite);
}

void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}
