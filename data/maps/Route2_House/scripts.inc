Route2_House_MapScripts::
	.byte 0

Route2_House_EventScript_Scientist::
	msgbox Route2_House_Text_FaintedMonsCanUseFieldMoves, MSGBOX_NPC
	end

Route2_House_EventScript_Reyley::
	lock
	faceplayer
	goto_if_set FLAG_ALOLAN_GIFT_1, Route2_House_EventScript_Reyley_Done
	msgbox Route2_House_EventScript_Reyley_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route2_House_EventScript_Reyley_Declined
	checkitemspace ITEM_POKE_BALL, 1
	goto_if_eq VAR_RESULT, FALSE, Route2_House_EventScript_Reyley_NoRoom
	givemon SPECIES_MEOWTH_ALOLA, 10
	setflag FLAG_ALOLAN_GIFT_1
	msgbox Route2_House_EventScript_Reyley_Outro
	release
	end

Route2_House_EventScript_Reyley_Done::
	msgbox Route2_House_EventScript_Reyley_Outro
	release
	end

Route2_House_EventScript_Reyley_Declined::
	msgbox Route2_House_EventScript_Reyley_DeclinedText
	release
	end

Route2_House_EventScript_Reyley_NoRoom::
	msgbox Route2_House_EventScript_Reyley_NoRoomText
	release
	end

Route2_House_EventScript_DeclineTrade::
	msgbox Trade_Text_AwwOhWell
	release
	end

Route2_House_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Trade_Text_WhatThatsNoMon
	release
	end

Route2_House_EventScript_AlreadyTraded::
	msgbox Trade_Text_IsntMyOldMonGreat
	release
	end
