Route6_UnusedHouse_MapScripts::
	.byte 0

Route6_UnusedHouse_EventScript_Surprise::
	lockall
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route6_UnusedHouse_Text_Surprise, MSGBOX_DEFAULT
	setvar VAR_TEMP_0, 1
	releaseall
	end

Route6_UnusedHouse_EventScript_Claire::
	msgbox Route6_UnusedHouse_Text_Claire, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_Steve::
	msgbox Route6_UnusedHouse_Text_Steve, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_Fernanda::
	msgbox Route6_UnusedHouse_Text_Fernanda, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_Sam::
	msgbox Route6_UnusedHouse_Text_Sam, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_Joe::
	msgbox Route6_UnusedHouse_Text_Joe, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_Zaynab::
	msgbox Route6_UnusedHouse_Text_Zaynab, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_Aliyah::
	msgbox Route6_UnusedHouse_Text_Aliyah, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_Aditi::
	msgbox Route6_UnusedHouse_Text_Aditi, MSGBOX_NPC
	end

Route6_UnusedHouse_EventScript_ProfTree::
	msgbox Route6_UnusedHouse_Text_ProfTree, MSGBOX_NPC
	end
