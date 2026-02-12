FuchsiaCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FuchsiaCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse
	release
	end

FuchsiaCity_PokemonCenter_1F_EventScript_ProfTree::
    lock
    faceplayer
    goto_if_set FLAG_GOT_THIRD_STARTER, FuchsiaCity_PokemonCenter_1F_EventScript_ProfTree_AlreadyGot
    msgbox FuchsiaCity_PokemonCenter_1F_Text_ProfTree_Intro
    call PalletTown_ProfessorOaksLab_EventScript_GiveRemainingStarter2
    setflag FLAG_GOT_THIRD_STARTER
    setflag FLAG_GOT_ALL_STARTERS
    msgbox FuchsiaCity_PokemonCenter_1F_Text_ProfTree_Outro
    release
    end

FuchsiaCity_PokemonCenter_1F_EventScript_ProfTree_AlreadyGot::
    msgbox FuchsiaCity_PokemonCenter_1F_Text_ProfTree_AlreadyGot
    release
    end

FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
	end
