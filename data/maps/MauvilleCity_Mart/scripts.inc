MauvilleCity_Mart_MapScripts::
	.byte 0

MauvilleCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart MauvilleCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
MauvilleCity_Mart_Pokemart:
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_AQUIX
	.2byte ITEM_BURIX
	.2byte ITEM_ELECTRIX
	.2byte ITEM_PATHIX
	.2byte ITEM_PIXIX
	.2byte ITEM_VERDIX
	.2byte ITEM_VOIDIX
	.2byte ITEM_ZERIX
	.2byte ITEM_NONE
	release
	end

MauvilleCity_Mart_EventScript_ExpertM::
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
	end

MauvilleCity_Mart_EventScript_Man::
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
	end

MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
	.string "There are items that temporarily\n"
	.string "elevate the stats of POKéMON.\p"
	.string "The ones I know you use in battle\n"
	.string "are X ATTACK and X DEFEND…\p"
	.string "I do believe that there are others\n"
	.string "like them.$"

MauvilleCity_Mart_Text_DecisionsDetermineBattle:
	.string "Use a certain move, or use an item\n"
	.string "instead…\p"
	.string "The TRAINER's decisions determine how\n"
	.string "battles turn out, I think.$"

