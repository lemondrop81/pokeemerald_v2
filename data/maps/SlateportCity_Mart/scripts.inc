SlateportCity_Mart_MapScripts::
	.byte 0

SlateportCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Mart_Pokemart:
	.2byte ITEM_BABIRI_BERRY
	.2byte ITEM_CHARTI_BERRY
	.2byte ITEM_CHILAN_BERRY
	.2byte ITEM_CHOPLE_BERRY
	.2byte ITEM_COBA_BERRY
	.2byte ITEM_COLBUR_BERRY
	.2byte ITEM_HABAN_BERRY
	.2byte ITEM_KASIB_BERRY
	.2byte ITEM_KEBIA_BERRY
	.2byte ITEM_OCCA_BERRY
	.2byte ITEM_SHUCA_BERRY
	.2byte ITEM_PASSHO_BERRY
	.2byte ITEM_PAYAPA_BERRY
	.2byte ITEM_RINDO_BERRY
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_TANGA_BERRY
	.2byte ITEM_WACAN_BERRY
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE
	release
	end

SlateportCity_Mart_EventScript_BlackBelt::
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end

SlateportCity_Mart_EventScript_Man::
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end

SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
	.string "The MARKET does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a POKéMON MART.$"

SlateportCity_Mart_Text_GreatBallIsBetter:
	.string "A GREAT BALL is better than a POKé BALL\n"
	.string "at catching POKéMON.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive POKéMON…$"

