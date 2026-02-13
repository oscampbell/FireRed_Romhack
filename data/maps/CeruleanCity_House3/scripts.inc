CeruleanCity_House3_MapScripts::
	.byte 0

CeruleanCity_House3_EventScript_OldWoman::
	msgbox CeruleanCity_House3_Text_PleaseTradeWithMyHusband, MSGBOX_NPC
	end

CeruleanCity_House3_EventScript_Dontae::
	lock
	faceplayer
	goto_if_set FLAG_ALOLAN_GIFT_2, CeruleanCity_House3_EventScript_Dontae_Done
	msgbox CeruleanCity_House3_EventScript_Dontae_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House3_EventScript_Dontae_Declined
	checkitemspace ITEM_POKE_BALL, 1
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House3_EventScript_Dontae_NoRoom
	givemon SPECIES_VULPIX_ALOLA, 15
	setflag FLAG_ALOLAN_GIFT_2
	msgbox CeruleanCity_House3_EventScript_Dontae_Outro
	release
	end

CeruleanCity_House3_EventScript_Dontae_Done::
	msgbox CeruleanCity_House3_EventScript_Dontae_Outro
	release
	end

CeruleanCity_House3_EventScript_Dontae_Declined::
	msgbox CeruleanCity_House3_EventScript_Dontae_DeclinedText
	release
	end

CeruleanCity_House3_EventScript_Dontae_NoRoom::
	msgbox CeruleanCity_House3_EventScript_Dontae_NoRoomText
	release
	end

CeruleanCity_House3_EventScript_DeclineTrade::
	msgbox Trade_Text_WellIfYouDontWantTo
	release
	end

CeruleanCity_House3_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Trade_Text_ThisIsntMon
	release
	end

CeruleanCity_House3_EventScript_AlreadyTraded::
	msgbox Trade_Text_HasTradedMonGrownStronger
	release
	end
