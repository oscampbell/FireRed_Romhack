LavenderTown_House1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_House1_OnTransition
	.byte 0

LavenderTown_House1_OnTransition::
	goto_if_unset FLAG_GOT_CERULEAN_STACEY_GIFT, LavenderTown_House1_EventScript_HideStacey
	clearflag FLAG_HIDE_LAVENDER_STACEY
	end

LavenderTown_House1_EventScript_HideStacey::
	setflag FLAG_HIDE_LAVENDER_STACEY
	end

LavenderTown_House1_EventScript_CooltrainerF::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_House1_EventScript_CooltrainerFGhostGone
	msgbox LavenderTown_House1_Text_RocketsKilledCubonesMother
	release
	end

LavenderTown_House1_EventScript_CooltrainerFGhostGone::
	msgbox LavenderTown_House1_Text_GhostOfPokemonTowerIsGone
	release
	end

LavenderTown_House1_EventScript_Cubone::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
	msgbox LavenderTown_House1_Text_Cubone
	waitmoncry
	release
	end

LavenderTown_House1_EventScript_Stacey::
	lock
	faceplayer
	goto_if_set FLAG_GOT_LAVENDER_STACEY_GIFT, LavenderTown_House1_EventScript_Stacey_Done
	msgbox LavenderTown_House1_Text_StaceyIntro
	checkitemspace ITEM_SPELL_TAG, 1
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	giveitem ITEM_SPELL_TAG
	setflag FLAG_GOT_LAVENDER_STACEY_GIFT
	msgbox LavenderTown_House1_Text_StaceyGivenTag
	release
	end

LavenderTown_House1_EventScript_Stacey_Done::
	msgbox LavenderTown_House1_Text_StaceyPostTag
	release
	end
