SaffronCity_House_MapScripts::
	.byte 0

SaffronCity_House_EventScript_Janhvi::
	msgbox SaffronCity_House_Text_Janhvi, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Justin::
	msgbox SaffronCity_House_Text_Justin, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox SaffronCity_House_Text_Pidgey
	waitmoncry
	release
	end

SaffronCity_House_EventScript_Letter::
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
	end
