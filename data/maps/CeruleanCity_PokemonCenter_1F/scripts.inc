CeruleanCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CeruleanCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_ProfTree::
    lock
    faceplayer
    goto_if_set FLAG_GOT_SECOND_STARTER, CeruleanCity_PokemonCenter_1F_EventScript_ProfTree_AlreadyGot
    msgbox CeruleanCity_PokemonCenter_1F_Text_ProfTree_Intro
    call PalletTown_ProfessorOaksLab_EventScript_GiveRemainingStarter1
    setflag FLAG_GOT_SECOND_STARTER
    msgbox CeruleanCity_PokemonCenter_1F_Text_ProfTree_Outro
    release
    end

CeruleanCity_PokemonCenter_1F_EventScript_ProfTree_AlreadyGot::
    msgbox CeruleanCity_PokemonCenter_1F_Text_ProfTree_AlreadyGot
    release
    end

CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
	lock
	faceplayer
	famechecker FAMECHECKER_BILL, 1
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_Lass::
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
	end
