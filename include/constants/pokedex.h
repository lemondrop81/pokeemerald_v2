#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokedex order.
// These constants are NOT disabled by P_GEN_X_POKEMON to keep pokedex_orders.h clean.
enum {
    NATIONAL_DEX_NONE,
    // Kanto
    NATIONAL_DEX_BULBASAUR,
    NATIONAL_DEX_IVYSAUR,
    NATIONAL_DEX_VENUSAUR,
    NATIONAL_DEX_CHARMANDER,
    NATIONAL_DEX_CHARMELEON,
    NATIONAL_DEX_CHARIZARD,
    NATIONAL_DEX_SQUIRTLE,
    NATIONAL_DEX_WARTORTLE,
    NATIONAL_DEX_BLASTOISE,
    NATIONAL_DEX_PIKACHU,
    NATIONAL_DEX_RAICHU,
    NATIONAL_DEX_VULPIX,
    NATIONAL_DEX_NINETALES,
    NATIONAL_DEX_JIGGLYPUFF,
    NATIONAL_DEX_WIGGLYTUFF,
    NATIONAL_DEX_TENTACOOL,
    NATIONAL_DEX_TENTACRUEL,
    NATIONAL_DEX_GRIMER,
    NATIONAL_DEX_MUK,
    NATIONAL_DEX_KOFFING,
    NATIONAL_DEX_WEEZING,
    NATIONAL_DEX_TANGELA,
    NATIONAL_DEX_SCYTHER,
    NATIONAL_DEX_MAGMAR,
    NATIONAL_DEX_DITTO,
    NATIONAL_DEX_EEVEE,
    NATIONAL_DEX_VAPOREON,
    NATIONAL_DEX_JOLTEON,
    NATIONAL_DEX_FLAREON,
    NATIONAL_DEX_KABUTO,
    NATIONAL_DEX_KABUTOPS,
    NATIONAL_DEX_PICHU,,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SNORUNT,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,
    NATIONAL_DEX_SHINX,
    NATIONAL_DEX_LUXIO,
    NATIONAL_DEX_LUXRAY,
    NATIONAL_DEX_COMBEE,
    NATIONAL_DEX_VESPIQUEN,
    NATIONAL_DEX_RIOLU,
    NATIONAL_DEX_LUCARIO,
    NATIONAL_DEX_TANGROWTH,
    NATIONAL_DEX_MAGMORTAR,
    NATIONAL_DEX_LEAFEON,
    NATIONAL_DEX_GLACEON,
    NATIONAL_DEX_GALLADE,
    NATIONAL_DEX_FROSLASS,
    NATIONAL_DEX_PURRLOIN,
    NATIONAL_DEX_LIEPARD,
    NATIONAL_DEX_SCRAGGY,
    NATIONAL_DEX_SCRAFTY,
    NATIONAL_DEX_PAWNIARD,
    NATIONAL_DEX_BISHARP,
    NATIONAL_DEX_DEINO,
    NATIONAL_DEX_ZWEILOUS,
    NATIONAL_DEX_HYDREIGON,
    NATIONAL_DEX_SYLVEON,
    NATIONAL_DEX_BERGMITE,
    NATIONAL_DEX_AVALUGG,
    NATIONAL_DEX_KIPVINE,
    NATIONAL_DEX_PLAGUAR,
    NATIONAL_DEX_PHOTOGUAR,
    NATIONAL_DEX_RAIAD,
    NATIONAL_DEX_RUSALKA,
    NATIONAL_DEX_FALLSHEER,
    NATIONAL_DEX_SCUIRET,
    NATIONAL_DEX_PTERORET,
    NATIONAL_DEX_BIRROBIRD,
    NATIONAL_DEX_EAGELEAG,
    NATIONAL_DEX_GRIFFOGRIF,
    NATIONAL_DEX_MAFICHU,
    NATIONAL_DEX_DEMICHU,
    NATIONAL_DEX_CUTBIT,
    NATIONAL_DEX_FLABBIT,
    NATIONAL_DEX_BLITZRDRIX,
    NATIONAL_DEX_NEINSOUL,
    NATIONAL_DEX_SPRUVYNE,
    NATIONAL_DEX_QUERVYNE,
    NATIONAL_DEX_SAMPERVYNE,
    NATIONAL_DEX_RANGIFE,
    NATIONAL_DEX_TARANALLOY,
    NATIONAL_DEX_ALCESTEEL,
    NATIONAL_DEX_ARAKID,
    NATIONAL_DEX_RAKIDONE,
    NATIONAL_DEX_TOTEMNA,
    NATIONAL_DEX_PSKULPT,
    NATIONAL_DEX_ESPATCH,
    NATIONAL_DEX_FIZZIX,
    NATIONAL_DEX_GRAVITOMIX,
    NATIONAL_DEX_AMUNATU,
    NATIONAL_DEX_GROPP,
    NATIONAL_DEX_CYCLOBBER,
    NATIONAL_DEX_TOTSICLE,
    NATIONAL_DEX_FROSTIDON,
    NATIONAL_DEX_GLACRIEK,
    NATIONAL_DEX_AMEOERG,
    NATIONAL_DEX_SARPHON,
    NATIONAL_DEX_AEROPHAGUS,
    NATIONAL_DEX_ROXXIK,
    NATIONAL_DEX_GRAVELISK,
    NATIONAL_DEX_SKARMOROS,
    NATIONAL_DEX_PHENYXY,
    NATIONAL_DEX_RESURAKETH,
    NATIONAL_DEX_TORKYLLIUM,
    NATIONAL_DEX_MINOTRANT,
    NATIONAL_DEX_ZIGGLYGRUF,
    NATIONAL_DEX_GOMM,
    NATIONAL_DEX_MOUNTEGROM,
    NATIONAL_DEX_OVARAPT,
    NATIONAL_DEX_VELOKOTA,
    NATIONAL_DEX_UTABAZAI,
    NATIONAL_DEX_KROA,
    NATIONAL_DEX_KROAEA,
    NATIONAL_DEX_KROAEAKAOA,
    NATIONAL_DEX_ARCHIGLOOM,
    NATIONAL_DEX_NEMELT,
    NATIONAL_DEX_VARAFLARE,
    NATIONAL_DEX_KOMODOR,
    NATIONAL_DEX_SILHOU,
    NATIONAL_DEX_SILGAUNT,
    NATIONAL_DEX_VAILEYE,
    NATIONAL_DEX_BLOODNAUNT,
    NATIONAL_DEX_ANPHAGE,
    NATIONAL_DEX_TUSGOYF,
    NATIONAL_DEX_LLURSCAYF,
    NATIONAL_DEX_CRANISECT,
    NATIONAL_DEX_SKULTULANT,
    NATIONAL_DEX_CHRYSAL,
    NATIONAL_DEX_VELLAVALE,
    NATIONAL_DEX_VELLIDAXOS,
    NATIONAL_DEX_GHOULSLASH,
    NATIONAL_DEX_MURKEON,
    NATIONAL_DEX_OBSIDEON,
    NATIONAL_DEX_FUREON,
    NATIONAL_DEX_SOOTHEON,
    NATIONAL_DEX_MOOREON,
    NATIONAL_DEX_FROSTEON,
    NATIONAL_DEX_RADEON,
    NATIONAL_DEX_POSPHEON,
    NATIONAL_DEX_PULSEON,
    NATIONAL_DEX_STATICEON,
    NATIONAL_DEX_BLIZZEON,
    NATIONAL_DEX_DYNAMEON,
    NATIONAL_DEX_DEVILEON,
    NATIONAL_DEX_CINDEREON,
    NATIONAL_DEX_BLANEON,
    NATIONAL_DEX_ECLIPSEON,
    NATIONAL_DEX_AROMEON,
    NATIONAL_DEX_ISYCLEON,
    NATIONAL_DEX_ZEREON,
    NATIONAL_DEX_NOCTIVEON,
    NATIONAL_DEX_PINEON,
    NATIONAL_DEX_PIXEON,
    NATIONAL_DEX_LUNNEON,
    NATIONAL_DEX_CHERREON,
    NATIONAL_DEX_HAZEON,
    NATIONAL_DEX_SERENEON,
    NATIONAL_DEX_MISTEON,
    NATIONAL_DEX_PUREON,
    NATIONAL_DEX_SALATAD,
    NATIONAL_DEX_SALANIP,
    NATIONAL_DEX_SALASLAM,
    NATIONAL_DEX_HALMSTAR,
    NATIONAL_DEX_SNUFFUZZ,
    NATIONAL_DEX_STICKIT,
    NATIONAL_DEX_STICKUT,
    NATIONAL_DEX_UGLING,
    NATIONAL_DEX_SWELLEGANT,
    NATIONAL_DEX_ANGLING,
    NATIONAL_DEX_ANGELISH,
    NATIONAL_DEX_ANGELIGHT,
    NATIONAL_DEX_AQUAD,
    NATIONAL_DEX_SMAQUA,
    NATIONAL_DEX_BEOPUP,
    NATIONAL_DEX_WEREHIDE,
    NATIONAL_DEX_VAMBAT,
    NATIONAL_DEX_DRACUBAT,
    NATIONAL_DEX_COUNTULA,
    NATIONAL_DEX_PUPOOL,
    NATIONAL_DEX_POOLDOG,
    NATIONAL_DEX_PORFIN,
    NATIONAL_DEX_DOFLAP,
    NATIONAL_DEX_PARADISO,
    NATIONAL_DEX_PARASEA,
    NATIONAL_DEX_AQLARVA,
    NATIONAL_DEX_MOSLIQUO,
    NATIONAL_DEX_NAWALE,
    NATIONAL_DEX_WHALEY,
    NATIONAL_DEX_SQUIDART,
    NATIONAL_DEX_LISQUID,
    NATIONAL_DEX_HAMAWL,
    NATIONAL_DEX_SILVICIOUS,
};

#define POKEMON_SLOTS_NUMBER (NATIONAL_DEX_COUNT + 1)

// Hoenn Pokedex order
enum {
    HOENN_DEX_BULBASAUR,
    HOENN_DEX_IVYSAUR,
    HOENN_DEX_VENUSAUR,
    HOENN_DEX_CHARMANDER,
    HOENN_DEX_CHARMELEON,
    HOENN_DEX_CHARIZARD,
    HOENN_DEX_SQUIRTLE,
    HOENN_DEX_WARTORTLE,
    HOENN_DEX_BLASTOISE,
    HOENN_DEX_PIKACHU,
    HOENN_DEX_RAICHU,
    HOENN_DEX_VULPIX,
    HOENN_DEX_NINETALES,
    HOENN_DEX_JIGGLYPUFF,
    HOENN_DEX_WIGGLYTUFF,
    HOENN_DEX_TENTACOOL,
    HOENN_DEX_TENTACRUEL,
    HOENN_DEX_GRIMER,
    HOENN_DEX_MUK,
    HOENN_DEX_KOFFING,
    HOENN_DEX_WEEZING,
    HOENN_DEX_TANGELA,
    HOENN_DEX_SCYTHER,
    HOENN_DEX_MAGMAR,
    HOENN_DEX_DITTO,
    HOENN_DEX_EEVEE,
    HOENN_DEX_VAPOREON,
    HOENN_DEX_JOLTEON,
    HOENN_DEX_FLAREON,
    HOENN_DEX_KABUTO,
    HOENN_DEX_KABUTOPS,
    HOENN_DEX_PICHU,,
    HOENN_DEX_IGGLYBUFF,
    HOENN_DEX_NATU,
    HOENN_DEX_XATU,
    HOENN_DEX_SUNKERN,
    HOENN_DEX_SUNFLORA,
    HOENN_DEX_ESPEON,
    HOENN_DEX_UMBREON,
    HOENN_DEX_SCIZOR,
    HOENN_DEX_SKARMORY,
    HOENN_DEX_MAGBY,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
    HOENN_DEX_NUMEL,
    HOENN_DEX_CAMERUPT,
    HOENN_DEX_TORKOAL,
    HOENN_DEX_SNORUNT,
    HOENN_DEX_GLALIE,
    HOENN_DEX_REGIROCK,
    HOENN_DEX_REGICE,
    HOENN_DEX_REGISTEEL,
    HOENN_DEX_LATIAS,
    HOENN_DEX_LATIOS,
    HOENN_DEX_KYOGRE,
    HOENN_DEX_GROUDON,
    HOENN_DEX_RAYQUAZA,
    HOENN_DEX_JIRACHI,
    HOENN_DEX_DEOXYS,
    HOENN_DEX_SHINX,
    HOENN_DEX_LUXIO,
    HOENN_DEX_LUXRAY,
    HOENN_DEX_COMBEE,
    HOENN_DEX_VESPIQUEN,
    HOENN_DEX_RIOLU,
    HOENN_DEX_LUCARIO,
    HOENN_DEX_TANGROWTH,
    HOENN_DEX_MAGMORTAR,
    HOENN_DEX_LEAFEON,
    HOENN_DEX_GLACEON,
    HOENN_DEX_GALLADE,
    HOENN_DEX_FROSLASS,
    HOENN_DEX_PURRLOIN,
    HOENN_DEX_LIEPARD,
    HOENN_DEX_SCRAGGY,
    HOENN_DEX_SCRAFTY,
    HOENN_DEX_PAWNIARD,
    HOENN_DEX_BISHARP,
    HOENN_DEX_DEINO,
    HOENN_DEX_ZWEILOUS,
    HOENN_DEX_HYDREIGON,
    HOENN_DEX_SYLVEON,
    HOENN_DEX_BERGMITE,
    HOENN_DEX_AVALUGG,
    HOENN_DEX_KIPVINE,
    HOENN_DEX_PLAGUAR,
    HOENN_DEX_PHOTOGUAR,
    HOENN_DEX_RAIAD,
    HOENN_DEX_RUSALKA,
    HOENN_DEX_FALLSHEER,
    HOENN_DEX_SCUIRET,
    HOENN_DEX_PTERORET,
    HOENN_DEX_BIRROBIRD,
    HOENN_DEX_EAGELEAG,
    HOENN_DEX_GRIFFOGRIF,
    HOENN_DEX_MAFICHU,
    HOENN_DEX_DEMICHU,
    HOENN_DEX_CUTBIT,
    HOENN_DEX_FLABBIT,
    HOENN_DEX_BLITZRDRIX,
    HOENN_DEX_NEINSOUL,
    HOENN_DEX_SPRUVYNE,
    HOENN_DEX_QUERVYNE,
    HOENN_DEX_SAMPERVYNE,
    HOENN_DEX_RANGIFE,
    HOENN_DEX_TARANALLOY,
    HOENN_DEX_ALCESTEEL,
    HOENN_DEX_ARAKID,
    HOENN_DEX_RAKIDONE,
    HOENN_DEX_TOTEMNA,
    HOENN_DEX_PSKULPT,
    HOENN_DEX_ESPATCH,
    HOENN_DEX_FIZZIX,
    HOENN_DEX_GRAVITOMIX,
    HOENN_DEX_AMUNATU,
    HOENN_DEX_GROPP,
    HOENN_DEX_CYCLOBBER,
    HOENN_DEX_TOTSICLE,
    HOENN_DEX_FROSTIDON,
    HOENN_DEX_GLACRIEK,
    HOENN_DEX_AMEOERG,
    HOENN_DEX_SARPHON,
    HOENN_DEX_AEROPHAGUS,
    HOENN_DEX_ROXXIK,
    HOENN_DEX_GRAVELISK,
    HOENN_DEX_SKARMOROS,
    HOENN_DEX_PHENYXY,
    HOENN_DEX_RESURAKETH,
    HOENN_DEX_TORKYLLIUM,
    HOENN_DEX_MINOTRANT,
    HOENN_DEX_ZIGGLYGRUF,
    HOENN_DEX_GOMM,
    HOENN_DEX_MOUNTEGROM,
    HOENN_DEX_OVARAPT,
    HOENN_DEX_VELOKOTA,
    HOENN_DEX_UTABAZAI,
    HOENN_DEX_KROA,
    HOENN_DEX_KROAEA,
    HOENN_DEX_KROAEAKAOA,
    HOENN_DEX_ARCHIGLOOM,
    HOENN_DEX_NEMELT,
    HOENN_DEX_VARAFLARE,
    HOENN_DEX_KOMODOR,
    HOENN_DEX_SILHOU,
    HOENN_DEX_SILGAUNT,
    HOENN_DEX_VAILEYE,
    HOENN_DEX_BLOODNAUNT,
    HOENN_DEX_ANPHAGE,
    HOENN_DEX_TUSGOYF,
    HOENN_DEX_LLURSCAYF,
    HOENN_DEX_CRANISECT,
    HOENN_DEX_SKULTULANT,
    HOENN_DEX_CHRYSAL,
    HOENN_DEX_VELLAVALE,
    HOENN_DEX_VELLIDAXOS,
    HOENN_DEX_GHOULSLASH,
    HOENN_DEX_MURKEON,
    HOENN_DEX_OBSIDEON,
    HOENN_DEX_FUREON,
    HOENN_DEX_SOOTHEON,
    HOENN_DEX_MOOREON,
    HOENN_DEX_FROSTEON,
    HOENN_DEX_RADEON,
    HOENN_DEX_POSPHEON,
    HOENN_DEX_PULSEON,
    HOENN_DEX_STATICEON,
    HOENN_DEX_BLIZZEON,
    HOENN_DEX_DYNAMEON,
    HOENN_DEX_DEVILEON,
    HOENN_DEX_CINDEREON,
    HOENN_DEX_BLANEON,
    HOENN_DEX_ECLIPSEON,
    HOENN_DEX_AROMEON,
    HOENN_DEX_ISYCLEON,
    HOENN_DEX_ZEREON,
    HOENN_DEX_NOCTIVEON,
    HOENN_DEX_PINEON,
    HOENN_DEX_PIXEON,
    HOENN_DEX_LUNNEON,
    HOENN_DEX_CHERREON,
    HOENN_DEX_HAZEON,
    HOENN_DEX_SERENEON,
    HOENN_DEX_MISTEON,
    HOENN_DEX_PUREON,
    HOENN_DEX_SALATAD,
    HOENN_DEX_SALANIP,
    HOENN_DEX_SALASLAM,
    HOENN_DEX_HALMSTAR,
    HOENN_DEX_SNUFFUZZ,
    HOENN_DEX_STICKIT,
    HOENN_DEX_STICKUT,
    HOENN_DEX_UGLING,
    HOENN_DEX_SWELLEGANT,
    HOENN_DEX_ANGLING,
    HOENN_DEX_ANGELISH,
    HOENN_DEX_ANGELIGHT,
    HOENN_DEX_AQUAD,
    HOENN_DEX_SMAQUA,
    HOENN_DEX_BEOPUP,
    HOENN_DEX_WEREHIDE,
    HOENN_DEX_VAMBAT,
    HOENN_DEX_DRACUBAT,
    HOENN_DEX_COUNTULA,
    HOENN_DEX_PUPOOL,
    HOENN_DEX_POOLDOG,
    HOENN_DEX_PORFIN,
    HOENN_DEX_DOFLAP,
    HOENN_DEX_PARADISO,
    HOENN_DEX_PARASEA,
    HOENN_DEX_AQLARVA,
    HOENN_DEX_MOSLIQUO,
    HOENN_DEX_NAWALE,
    HOENN_DEX_WHALEY,
    HOENN_DEX_SQUIDART,
    HOENN_DEX_LISQUID,
    HOENN_DEX_HAMAWL,
    HOENN_DEX_SILVICIOUS,
};

#define HOENN_DEX_COUNT (HOENN_DEX_SILVICIOUS + 1)

#endif // GUARD_CONSTANTS_POKEDEX_H
