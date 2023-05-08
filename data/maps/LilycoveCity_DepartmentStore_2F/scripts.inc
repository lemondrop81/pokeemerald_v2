LilycoveCity_DepartmentStore_2F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_2F_EventScript_Cook::
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_Pokemart1:
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_IRON_BALL
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_Pokemart2:
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_EVIOLITE
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_RED_CARD
	.2byte ITEM_RING_TARGET
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_ADRENALINE_ORB
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
	.string "Learn to use items properly.\n"
	.string "That's basic, really.$"

LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
	.string "My husband is waiting at home.\n"
	.string "What would make a good gift for him?$"

LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
	.string "I'm leaving on a long journey soon.\n"
	.string "I need to stock up on items.$"

