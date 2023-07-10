const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
        .categoryName = _("Crystal"),
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
        .categoryName = _("Crystal"),
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
        .categoryName = _("Crystal"),
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
        .categoryName = _("Skeleton"),
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
        .categoryName = _("Skeleton"),
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
        .categoryName = _("Skeleton"),
        .height = 17,
        .weight = 905,
        .description = gCharizardPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
        .categoryName = _("Ninja"),
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
        .categoryName = _("Ninja"),
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
        .categoryName = _("Selfish"),
        .height = 16,
        .weight = 855,
        .description = gBlastoisePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAICHU] =
    {
        .categoryName = _("Mouse"),
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULPIX] =
    {
        .categoryName = _("Fox"),
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINETALES] =
    {
        .categoryName = _("Fox"),
        .height = 11,
        .weight = 199,
        .description = gNinetalesPokedexText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JIGGLYPUFF] =
    {
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 55,
        .description = gJigglypuffPokedexText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIGGLYTUFF] =
    {
        .categoryName = _("Balloon"),
        .height = 10,
        .weight = 120,
        .description = gWigglytuffPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
        .categoryName = _("Toadstool"),
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
        .categoryName = _("Toadstool"),
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GRIMER] =
    {
        .categoryName = _("Quicksand"),
        .height = 9,
        .weight = 300,
        .description = gGrimerPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = _("Quicksand"),
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOFFING] =
    {
        .categoryName = _("Thunder Clap"),
        .height = 6,
        .weight = 10,
        .description = gKoffingPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEZING] =
    {
        .categoryName = _("Thunder Clap"),
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGELA] =
    {
        .categoryName = _("Tumbleweed"),
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = _("Ice Cleaver"),
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGMAR] =
    {
        .categoryName = _("Scuba Diver"),
        .height = 13,
        .weight = 445,
        .description = gMagmarPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("Transform"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEVEE] =
    {
        .categoryName = _("Evolution"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
        .categoryName = _("Bubble Jet"),
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
        .categoryName = _("Lightning"),
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAREON] =
    {
        .categoryName = _("Flame"),
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTO] =
    {
        .categoryName = _("Beetle"),
        .height = 5,
        .weight = 115,
        .description = gKabutoPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTOPS] =
    {
        .categoryName = _("Beetle"),
        .height = 13,
        .weight = 405,
        .description = gKabutopsPokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = _("Tiny Mouse"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IGGLYBUFF] =
    {
        .categoryName = _("Balloon"),
        .height = 3,
        .weight = 10,
        .description = gIgglybuffPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NATU] =
    {
        .categoryName = _("Tiny Bird"),
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XATU] =
    {
        .categoryName = _("Mystic"),
        .height = 15,
        .weight = 150,
        .description = gXatuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
        .categoryName = _("Blazing Oil"),
        .height = 3,
        .weight = 18,
        .description = gSunkernPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
        .categoryName = _("Flame Sludge"),
        .height = 8,
        .weight = 85,
        .description = gSunfloraPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = _("Sun"),
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = _("Moonlight"),
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = _("Frozen Claw"),
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = _("Armor Bird"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MAGBY] =
    {
        .categoryName = _("Snorkle"),
        .height = 7,
        .weight = 214,
        .description = gMagbyPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = _("Perception"),
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = _("Excitment"),
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = _("Nuzzle"),
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
        .categoryName = _("Coal"),
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = _("Fire Hat"),
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = _("Flaming Face"),
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("Desert"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("Ocean"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
        .categoryName = _("Crater"),
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("Eon"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("Eon"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = _("Sea Basin"),
        .height = 45,
        .weight = 3520,
        .description = gKyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = _("Continent"),
        .height = 35,
        .weight = 9500,
        .description = gGroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("Sky High"),
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
        .categoryName = _("Wish"),
        .height = 3,
        .weight = 11,
        .description = gJirachiPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHINX] =
    {
        .categoryName = _("Toxic"),
        .height = 5,
        .weight = 95,
        .description = gShinxPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXIO] =
    {
        .categoryName = _("Poison"),
        .height = 9,
        .weight = 305,
        .description = gLuxioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXRAY] =
    {
        .categoryName = _("Venom Fangs"),
        .height = 14,
        .weight = 420,
        .description = gLuxrayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBEE] =
    {
        .categoryName = _("Engine"),
        .height = 3,
        .weight = 55,
        .description = gCombeePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VESPIQUEN] =
    {
        .categoryName = _("Reactor"),
        .height = 12,
        .weight = 385,
        .description = gVespiquenPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIOLU] =
    {
        .categoryName = _("Embalming"),
        .height = 7,
        .weight = 202,
        .description = gRioluPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUCARIO] =
    {
        .categoryName = _("Anubis"),
        .height = 12,
        .weight = 540,
        .description = gLucarioPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGMORTAR] =
    {
        .categoryName = _("Diver"),
        .height = 16,
        .weight = 680,
        .description = gMagmortarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAFEON] =
    {
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .description = gLeafeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLACEON] =
    {
        .categoryName = _("Fresh Snow"),
        .height = 8,
        .weight = 259,
        .description = gGlaceonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALLADE] =
    {
        .categoryName = _("Swordmaster"),
        .height = 16,
        .weight = 520,
        .description = gGalladePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSLASS] =
    {
        .categoryName = _("Magma"),
        .height = 13,
        .weight = 266,
        .description = gFroslassPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRLOIN] =
    {
        .categoryName = _("Mischievous"),
        .height = 4,
        .weight = 101,
        .description = gPurrloinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LIEPARD] =
    {
        .categoryName = _("Deceit"),
        .height = 11,
        .weight = 375,
        .description = gLiepardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAGGY] =
    {
        .categoryName = _("Bush"),
        .height = 6,
        .weight = 118,
        .description = gScraggyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAFTY] =
    {
        .categoryName = _("Forest"),
        .height = 11,
        .weight = 300,
        .description = gScraftyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAWNIARD] =
    {
        .categoryName = _("Air Blade"),
        .height = 5,
        .weight = 102,
        .description = gPawniardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BISHARP] =
    {
        .categoryName = _("Flying Sword"),
        .height = 16,
        .weight = 700,
        .description = gBisharpPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEINO] =
    {
        .categoryName = _("Cobra"),
        .height = 8,
        .weight = 173,
        .description = gDeinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZWEILOUS] =
    {
        .categoryName = _("King Cobra"),
        .height = 14,
        .weight = 500,
        .description = gZweilousPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYDREIGON] =
    {
        .categoryName = _("Tyrant Cobra"),
        .height = 18,
        .weight = 1600,
        .description = gHydreigonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYLVEON] =
    {
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .description = gSylveonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BERGMITE] =
    {
        .categoryName = _("Jagged Rock"),
        .height = 10,
        .weight = 995,
        .description = gBergmitePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AVALUGG] =
    {
        .categoryName = _("Colossal"),
        .height = 20,
        .weight = 5050,
        .description = gAvaluggPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIPVINE] =
    {
        .categoryName = _("Plague"),
        .height = 11,
        .weight = 77,
        .description = gKipvinePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_PLAGUAR] =
    {
        .categoryName = _("Plague"),
        .height = 11,
        .weight = 77,
        .description = gPlaguarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHOTOGUAR] =
    {
        .categoryName = _("Plague"),
        .height = 11,
        .weight = 77,
        .description = gPhotoguarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAIAD] =
    {
        .categoryName = _("Fish"),
        .height = 11,
        .weight = 77,
        .description = gRaiadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_RUSALKA] =
    {
        .categoryName = _("Mermaid"),
        .height = 11,
        .weight = 77,
        .description = gRusalkaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FALLSHEER] =
    {
        .categoryName = _("Mermaid"),
        .height = 11,
        .weight = 77,
        .description = gFallsheerPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCUIRET] =
    {
        .categoryName = _("Squirrel"),
        .height = 11,
        .weight = 77,
        .description = gScuiretPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_PTERORET] =
    {
        .categoryName = _("Squirrel"),
        .height = 11,
        .weight = 77,
        .description = gPteroretPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIRROBIRD] =
    {
        .categoryName = _("Bird"),
        .height = 11,
        .weight = 77,
        .description = gBirrobirdPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EAGELEAG] =
    {
        .categoryName = _("Bird"),
        .height = 11,
        .weight = 77,
        .description = gEageleagPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_GRIFFOGRIF] =
    {
        .categoryName = _("Bird"),
        .height = 11,
        .weight = 77,
        .description = gGriffogrifPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAFICHU] =
    {
        .categoryName = _("Mouse"),
        .height = 11,
        .weight = 77,
        .description = gMafichuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEMICHU] =
    {
        .categoryName = _("Mouse"),
        .height = 11,
        .weight = 77,
        .description = gDemichuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_CUTBIT] =
    {
        .categoryName = _("Scythe"),
        .height = 11,
        .weight = 77,
        .description = gCutbitPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLABBIT] =
    {
        .categoryName = _("Scythe"),
        .height = 11,
        .weight = 77,
        .description = gFlabbitPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLITZRDRIX] =
    {
        .categoryName = _("Scythe"),
        .height = 11,
        .weight = 77,
        .description = gBlitzrdrixPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_NEINSOUL] =
    {
        .categoryName = _("Fox"),
        .height = 11,
        .weight = 77,
        .description = gNeinsoulPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPRUVYNE] =
    {
        .categoryName = _("Seed"),
        .height = 11,
        .weight = 77,
        .description = gSpruvynePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUERVYNE] =
    {
        .categoryName = _("Tree"),
        .height = 11,
        .weight = 77,
        .description = gQuervynePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_SAMPERVYNE] =
    {
        .categoryName = _("Tree"),
        .height = 11,
        .weight = 77,
        .description = gSampervynePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RANGIFE] =
    {
        .categoryName = _("Reindeer"),
        .height = 11,
        .weight = 77,
        .description = gRangifePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TARANALLOY] =
    {
        .categoryName = _("Reindeer"),
        .height = 11,
        .weight = 77,
        .description = gTaranalloyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_ALCESTEEL] =
    {
        .categoryName = _("Moose"),
        .height = 11,
        .weight = 77,
        .description = gAlcesteelPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARAKID] =
    {
        .categoryName = _("Spider"),
        .height = 11,
        .weight = 77,
        .description = gArakidPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAKIDONE] =
    {
        .categoryName = _("Tarantula"),
        .height = 11,
        .weight = 77,
        .description = gRakidonePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_TOTEMNA] =
    {
        .categoryName = _("Totem Pole"),
        .height = 11,
        .weight = 77,
        .description = gTotemnaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PSKULPT] =
    {
        .categoryName = _("Totem Pole"),
        .height = 11,
        .weight = 77,
        .description = gPskulptPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPATCH] =
    {
        .categoryName = _("Totem Pole"),
        .height = 11,
        .weight = 77,
        .description = gEspatchPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_FIZZIX] =
    {
        .categoryName = _("PLasma"),
        .height = 11,
        .weight = 77,
        .description = gFizzixPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAVITOMIX] =
    {
        .categoryName = _("Plasma"),
        .height = 11,
        .weight = 77,
        .description = gGravitomixPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMUNATU] =
    {
        .categoryName = _("Mystic"),
        .height = 11,
        .weight = 77,
        .description = gAmunatuPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_GROPP] =
    {
        .categoryName = _("Bigfoot"),
        .height = 11,
        .weight = 77,
        .description = gGroppPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CYCLOBBER] =
    {
        .categoryName = _("Bigfoot"),
        .height = 11,
        .weight = 77,
        .description = gCyclobberPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOTSICLE] =
    {
        .categoryName = _("Ice Age"),
        .height = 11,
        .weight = 77,
        .description = gTotsiclePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_FROSTIDON] =
    {
        .categoryName = _("ice Age"),
        .height = 11,
        .weight = 77,
        .description = gFrostidonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLACRIEK] =
    {
        .categoryName = _("Ice Demon"),
        .height = 11,
        .weight = 77,
        .description = gGlacriekPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMEOERG] =
    {
        .categoryName = _("Ancient"),
        .height = 11,
        .weight = 77,
        .description = gAmoergPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_SARPHON] =
    {
        .categoryName = _("Mummy"),
        .height = 11,
        .weight = 77,
        .description = gSarphonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AEROPHAGUS] =
    {
        .categoryName = _("Mummy"),
        .height = 11,
        .weight = 77,
        .description = gAerophagusPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROXXIK] =
    {
        .categoryName = _("Snake"),
        .height = 11,
        .weight = 77,
        .description = gRoxxikPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_GRAVELISK] =
    {
        .categoryName = _("Basilisk"),
        .height = 11,
        .weight = 77,
        .description = gGraveliskPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKARMOROS] =
    {
        .categoryName = _("Armor Dragon"),
        .height = 11,
        .weight = 77,
        .description = gSkarmorosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHENYXY] =
    {
        .categoryName = _("Phoenix"),
        .height = 11,
        .weight = 77,
        .description = gPhenyxyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_RESURAKETH] =
    {
        .categoryName = _("Phoenix"),
        .height = 11,
        .weight = 77,
        .description = gResurakethPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORKYLLIUM] =
    {
        .categoryName = _("Coal"),
        .height = 11,
        .weight = 77,
        .description = gTorkylliumPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINOTRANT] =
    {
        .categoryName = _("Minotaur"),
        .height = 11,
        .weight = 77,
        .description = gMinotrantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_ZIGGLYGRUF] =
    {
        .categoryName = _("Buff Balloon"),
        .height = 11,
        .weight = 77,
        .description = gZigglygrufPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOMM] =
    {
        .categoryName = _("Prankster"),
        .height = 11,
        .weight = 77,
        .description = gGommPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOUNTEGROM] =
    {
        .categoryName = _("Prankster"),
        .height = 11,
        .weight = 77,
        .description = gMountgromPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_OVARAPT] =
    {
        .categoryName = _("Egg"),
        .height = 11,
        .weight = 77,
        .description = gOvaraptPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VELOKOTA] =
    {
        .categoryName = _("Velocoraptor"),
        .height = 11,
        .weight = 77,
        .description = gVelokotaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UTABAZAI] =
    {
        .categoryName = _("T-Rex"),
        .height = 11,
        .weight = 77,
        .description = gUtabazaiPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_KROA] =
    {
        .categoryName = _("Seahorse"),
        .height = 11,
        .weight = 77,
        .description = gKroaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROAEA] =
    {
        .categoryName = _("Seahorse"),
        .height = 11,
        .weight = 77,
        .description = gKroaeaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROAEAKAOA] =
    {
        .categoryName = _("Sea Monster"),
        .height = 11,
        .weight = 77,
        .description = gKroaeakoaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_ARCHIGLOOM] =
    {
        .categoryName = _("Demon"),
        .height = 11,
        .weight = 77,
        .description = gArchigloomPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NEMELT] =
    {
        .categoryName = _("Fire Lizard"),
        .height = 11,
        .weight = 77,
        .description = gNemeltPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VARAFLARE] =
    {
        .categoryName = _("Fire Lizard"),
        .height = 11,
        .weight = 77,
        .description = gVaraflarePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_KOMODOR] =
    {
        .categoryName = _("Fire Lizard"),
        .height = 11,
        .weight = 77,
        .description = gKomodorPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILHOU] =
    {
        .categoryName = _("Glove"),
        .height = 11,
        .weight = 77,
        .description = gSilhouPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILGAUNT] =
    {
        .categoryName = _("Glove"),
        .height = 11,
        .weight = 77,
        .description = gSilgauntPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_VAILEYE] =
    {
        .categoryName = _("Eye"),
        .height = 11,
        .weight = 77,
        .description = gVaileyePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLOODNAUNT] =
    {
        .categoryName = _("Eye"),
        .height = 11,
        .weight = 77,
        .description = gBloodnauntPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANPHAGE] =
    {
        .categoryName = _("Carrion Ant"),
        .height = 11,
        .weight = 77,
        .description = gAnphagePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_TUSGOYF] =
    {
        .categoryName = _("Predator"),
        .height = 11,
        .weight = 77,
        .description = gTusgoyfPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LLURSCAYF] =
    {
        .categoryName = _("Predator"),
        .height = 11,
        .weight = 77,
        .description = gLlurscayfPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRANISECT] =
    {
        .categoryName = _("undead"),
        .height = 11,
        .weight = 77,
        .description = gCranisectPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_SKULTULANT] =
    {
        .categoryName = _("Undead"),
        .height = 11,
        .weight = 77,
        .description = gSkultulantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHRYSAL] =
    {
        .categoryName = _("Larva"),
        .height = 11,
        .weight = 77,
        .description = gChrysalPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VELLAVALE] =
    {
        .categoryName = _("Scorpion"),
        .height = 11,
        .weight = 77,
        .description = gVellavalePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_VELLIDAXOS] =
    {
        .categoryName = _("Scorpion"),
        .height = 11,
        .weight = 77,
        .description = gVellidaxosPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GHOULSLASH] =
    {
        .categoryName = _("Ghoul"),
        .height = 11,
        .weight = 77,
        .description = gMurkeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURKEON] =
    {
        .categoryName = _("Nocturnal"),
        .height = 11,
        .weight = 77,
        .description = gTusgoyfPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OBSIDEON] =
    {
        .categoryName = _("Obsidian"),
        .height = 11,
        .weight = 77,
        .description = gObsideonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FUREON] =
    {
        .categoryName = _("Tempest"),
        .height = 11,
        .weight = 77,
        .description = gFureonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_SOOTHEON] =
    {
        .categoryName = _("Nocturnal"),
        .height = 11,
        .weight = 77,
        .description = gSootheonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOOREON] =
    {
        .categoryName = _("Swamp"),
        .height = 11,
        .weight = 77,
        .description = gMooreonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSTEON] =
    {
        .categoryName = _("Frost"),
        .height = 11,
        .weight = 77,
        .description = gFrosteonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_RADEON] =
    {
        .categoryName = _("Convection"),
        .height = 11,
        .weight = 77,
        .description = gRadeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POSPHEON] =
    {
        .categoryName = _("Glowing"),
        .height = 11,
        .weight = 77,
        .description = gPospheonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PULSEON] =
    {
        .categoryName = _("Pulse"),
        .height = 11,
        .weight = 77,
        .description = gPulseonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STATICEON] =
    {
        .categoryName = _("Nocturnal"),
        .height = 11,
        .weight = 77,
        .description = gStaticeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLIZZEON] =
    {
        .categoryName = _("Blizzard"),
        .height = 11,
        .weight = 77,
        .description = gBlizzeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_DYNAMEON] =
    {
        .categoryName = _("Kinetic Fire"),
        .height = 11,
        .weight = 77,
        .description = gDynameonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEVILEON] =
    {
        .categoryName = _("Devil"),
        .height = 11,
        .weight = 77,
        .description = gDevileonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINDEREON] =
    {
        .categoryName = _("Wildfire"),
        .height = 11,
        .weight = 77,
        .description = gCindereonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_BLANEON] =
    {
        .categoryName = _("Hot Ice"),
        .height = 11,
        .weight = 77,
        .description = gBlaneonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ECLIPSEON] =
    {
        .categoryName = _("Evil"),
        .height = 11,
        .weight = 77,
        .description = gEclipseonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AROMEON] =
    {
        .categoryName = _("Temple"),
        .height = 11,
        .weight = 77,
        .description = gAromeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_ISYCLEON] =
    {
        .categoryName = _("Nocturnal"),
        .height = 11,
        .weight = 77,
        .description = gIsycleonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEREON] =
    {
        .categoryName = _("Winter Night"),
        .height = 11,
        .weight = 77,
        .description = gZereonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOCTIVEON] =
    {
        .categoryName = _("Nocturnal"),
        .height = 11,
        .weight = 77,
        .description = gNoctiveonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_PINEON] =
    {
        .categoryName = _("Pine"),
        .height = 11,
        .weight = 77,
        .description = gPineonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIXEON] =
    {
        .categoryName = _("Pixel"),
        .height = 11,
        .weight = 77,
        .description = gPixeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNNEON] =
    {
        .categoryName = _("Lunar"),
        .height = 11,
        .weight = 77,
        .description = gLunneonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_CHERREON] =
    {
        .categoryName = _("Sakura"),
        .height = 11,
        .weight = 77,
        .description = gCherreonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAZEON] =
    {
        .categoryName = _("Haze"),
        .height = 11,
        .weight = 77,
        .description = gHazeonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERENEON] =
    {
        .categoryName = _("Serene"),
        .height = 11,
        .weight = 77,
        .description = gSereneonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MISTEON] =
    {
        .categoryName = _("Glare"),
        .height = 11,
        .weight = 77,
        .description = gMisteonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUREON] =
    {
        .categoryName = _("Pure"),
        .height = 11,
        .weight = 77,
        .description = gPureonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALATAD] =
    {
        .categoryName = _("Salamander"),
        .height = 11,
        .weight = 77,
        .description = gSalatadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALANIP] =
    {
        .categoryName = _("Salamander"),
        .height = 11,
        .weight = 77,
        .description = gSalanipPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALASLAM] =
    {
        .categoryName = _("Salamander"),
        .height = 11,
        .weight = 77,
        .description = gSalaslamPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_HALMSTAR] =
    {
        .categoryName = _("Hamster"),
        .height = 11,
        .weight = 77,
        .description = gHalmstarPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNUFFUZZ] =
    {
        .categoryName = _("Guinea Pig"),
        .height = 11,
        .weight = 77,
        .description = gSnuffuzzPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STICKIT] =
    {
        .categoryName = _("Beetle"),
        .height = 11,
        .weight = 77,
        .description = gStickitPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STICKUT] =
    {
        .categoryName = _("Earwig"),
        .height = 11,
        .weight = 77,
        .description = gStickutPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UGLING] =
    {
        .categoryName = _("Ugly Duck"),
        .height = 11,
        .weight = 77,
        .description = gUglingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_SWELLEGANT] =
    {
        .categoryName = _("Swan"),
        .height = 11,
        .weight = 77,
        .description = gSwellegantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANGLING] =
    {
        .categoryName = _("Angelfish"),
        .height = 11,
        .weight = 77,
        .description = gAnglingPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANGELISH] =
    {
        .categoryName = _("Angelfish"),
        .height = 11,
        .weight = 77,
        .description = gAngelishPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_ANGELIGHT] =
    {
        .categoryName = _("Angelfish"),
        .height = 11,
        .weight = 77,
        .description = gAngelightPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AQUAD] =
    {
        .categoryName = _("Freshwater"),
        .height = 11,
        .weight = 77,
        .description = gAquadPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMAQUA] =
    {
        .categoryName = _("Freshwater"),
        .height = 11,
        .weight = 77,
        .description = gSmaquaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEOPUP] =
    {
        .categoryName = _("Full Moon"),
        .height = 11,
        .weight = 77,
        .description = gBeopupPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEREHIDE] =
    {
        .categoryName = _("Full Moon"),
        .height = 11,
        .weight = 77,
        .description = gWerehidePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_VAMBAT] =
    {
        .categoryName = _("Vampire"),
        .height = 11,
        .weight = 77,
        .description = gVambatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACUBAT] =
    {
        .categoryName = _("Vampire"),
        .height = 11,
        .weight = 77,
        .description = gDracubatPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COUNTULA] =
    {
        .categoryName = _("Vampire"),
        .height = 11,
        .weight = 77,
        .description = gCountulaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_PUPOOL] =
    {
        .categoryName = _("Pup"),
        .height = 11,
        .weight = 77,
        .description = gPupoolPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOLDOG] =
    {
        .categoryName = _("Bulldog"),
        .height = 11,
        .weight = 77,
        .description = gPooldogPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORFIN] =
    {
        .categoryName = _("Dolphin"),
        .height = 11,
        .weight = 77,
        .description = gPorfinPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_DOFLAP] =
    {
        .categoryName = _("Dolphin"),
        .height = 11,
        .weight = 77,
        .description = gDoflapPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARADISO] =
    {
        .categoryName = _("Paradise"),
        .height = 11,
        .weight = 77,
        .description = gParadisoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARASEA] =
    {
        .categoryName = _("Paradise"),
        .height = 11,
        .weight = 77,
        .description = gParaseaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_AQLARVA] =
    {
        .categoryName = _("Larva"),
        .height = 11,
        .weight = 77,
        .description = gAqlarvaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOSLIQUO] =
    {
        .categoryName = _("Draining"),
        .height = 11,
        .weight = 77,
        .description = gMosliquoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NAWALE] =
    {
        .categoryName = _("Narwhal"),
        .height = 11,
        .weight = 77,
        .description = gNawalePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    
    [NATIONAL_DEX_WHALEY] =
    {
        .categoryName = _("Whale"),
        .height = 11,
        .weight = 77,
        .description = gWhaleyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SQUIDART] =
    {
        .categoryName = _("Squid"),
        .height = 11,
        .weight = 77,
        .description = gSquidartPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LISQUID] =
    {
        .categoryName = _("Squid"),
        .height = 11,
        .weight = 77,
        .description = gLisquidPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAMAWL] =
    {
        .categoryName = _("Hammerhead"),
        .height = 11,
        .weight = 77,
        .description = gHamawlPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILVICIOUS] =
    {
        .categoryName = _("Hammerhead"),
        .height = 11,
        .weight = 77,
        .description = gSilviciousPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUMEL] =
    {
        .categoryName = _("Half-Life"),
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
        .categoryName = _("Half-Life"),
        .height = 19,
        .weight = 2200,
        .description = gCameruptPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },
};