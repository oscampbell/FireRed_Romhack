EventScript_DebugNPC::
# 2 "data/scripts/new_debug.pory"
	lock
# 3 "data/scripts/new_debug.pory"
	faceplayer
# 4 "data/scripts/new_debug.pory"
	msgbox EventScript_DebugNPC_Text_0
# 5 "data/scripts/new_debug.pory"
	multichoice 0, 0, MULTICHOICE_DEBUG_MENU, FALSE
# 6 "data/scripts/new_debug.pory"
	switch VAR_RESULT
# 7 "data/scripts/new_debug.pory"
	case 0, EventScript_DebugNPC_3
# 10 "data/scripts/new_debug.pory"
	case 1, EventScript_DebugNPC_4
# 17 "data/scripts/new_debug.pory"
	case 2, EventScript_DebugNPC_5
# 52 "data/scripts/new_debug.pory"
	case 3, EventScript_DebugNPC_6
EventScript_DebugNPC_1:
# 76 "data/scripts/new_debug.pory"
	release
	return

EventScript_DebugNPC_3:
# 8 "data/scripts/new_debug.pory"
	givemon SPECIES_MEW, 100, ITEM_NONE
# 9 "data/scripts/new_debug.pory"
	msgbox EventScript_DebugNPC_Text_1
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_4:
# 11 "data/scripts/new_debug.pory"
	giveitem ITEM_BICYCLE
# 12 "data/scripts/new_debug.pory"
	giveitem ITEM_MAX_REPEL, 99
# 13 "data/scripts/new_debug.pory"
	giveitem ITEM_HM02
# 14 "data/scripts/new_debug.pory"
	setflag FLAG_SYS_B_DASH
# 15 "data/scripts/new_debug.pory"
	msgbox EventScript_DebugNPC_Text_2
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_5:
# 18 "data/scripts/new_debug.pory"
	multichoice 0, 0, MULTICHOICE_DEBUG_FLAGS, FALSE
# 19 "data/scripts/new_debug.pory"
	switch VAR_RESULT
# 20 "data/scripts/new_debug.pory"
	case 0, EventScript_DebugNPC_8
# 26 "data/scripts/new_debug.pory"
	case 1, EventScript_DebugNPC_9
# 36 "data/scripts/new_debug.pory"
	case 2, EventScript_DebugNPC_10
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_6:
# 53 "data/scripts/new_debug.pory"
	multichoice 0, 0, MULTICHOICE_DEBUG_WARP, FALSE
# 54 "data/scripts/new_debug.pory"
	switch VAR_RESULT
# 55 "data/scripts/new_debug.pory"
	case 0, EventScript_DebugNPC_12
# 65 "data/scripts/new_debug.pory"
	case 1, EventScript_DebugNPC_13
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_8:
# 21 "data/scripts/new_debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 22 "data/scripts/new_debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 23 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_PALLET_TOWN
# 24 "data/scripts/new_debug.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 25 "data/scripts/new_debug.pory"
	msgbox EventScript_DebugNPC_Text_3
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_9:
# 27 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE01_GET
# 28 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE02_GET
# 29 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE03_GET
# 30 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE04_GET
# 31 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE05_GET
# 32 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE06_GET
# 33 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE07_GET
# 34 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE08_GET
# 35 "data/scripts/new_debug.pory"
	msgbox EventScript_DebugNPC_Text_4
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_10:
# 37 "data/scripts/new_debug.pory"
	setflag FLAG_BADGE03_GET
# 38 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_PALLET_TOWN
# 39 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 40 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_PEWTER_CITY
# 41 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_CERULEAN_CITY
# 42 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_VERMILION_CITY
# 43 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 44 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_CELADON_CITY
# 45 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 46 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_SAFFRON_CITY
# 47 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 48 "data/scripts/new_debug.pory"
	setflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 49 "data/scripts/new_debug.pory"
	giveitem ITEM_HM02
# 50 "data/scripts/new_debug.pory"
	msgbox EventScript_DebugNPC_Text_5
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_12:
# 56 "data/scripts/new_debug.pory"
	multichoice 0, 0, MULTICHOICE_DEBUG_WARP_CITIES_1, FALSE
# 57 "data/scripts/new_debug.pory"
	switch VAR_RESULT
# 58 "data/scripts/new_debug.pory"
	case 0, EventScript_DebugNPC_15
# 59 "data/scripts/new_debug.pory"
	case 1, EventScript_DebugNPC_16
# 60 "data/scripts/new_debug.pory"
	case 2, EventScript_DebugNPC_17
# 61 "data/scripts/new_debug.pory"
	case 3, EventScript_DebugNPC_18
# 62 "data/scripts/new_debug.pory"
	case 4, EventScript_DebugNPC_19
# 63 "data/scripts/new_debug.pory"
	case 5, EventScript_DebugNPC_20
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_13:
# 66 "data/scripts/new_debug.pory"
	multichoice 0, 0, MULTICHOICE_DEBUG_WARP_CITIES_2, FALSE
# 67 "data/scripts/new_debug.pory"
	switch VAR_RESULT
# 68 "data/scripts/new_debug.pory"
	case 0, EventScript_DebugNPC_22
# 69 "data/scripts/new_debug.pory"
	case 1, EventScript_DebugNPC_23
# 70 "data/scripts/new_debug.pory"
	case 2, EventScript_DebugNPC_24
# 71 "data/scripts/new_debug.pory"
	case 3, EventScript_DebugNPC_25
# 72 "data/scripts/new_debug.pory"
	case 4, EventScript_DebugNPC_26
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_15:
# 58 "data/scripts/new_debug.pory"
	warp MAP_PALLET_TOWN, 255, 6, 8
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_16:
# 59 "data/scripts/new_debug.pory"
	warp MAP_VIRIDIAN_CITY, 255, 26, 27
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_17:
# 60 "data/scripts/new_debug.pory"
	warp MAP_PEWTER_CITY, 255, 17, 26
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_18:
# 61 "data/scripts/new_debug.pory"
	warp MAP_CERULEAN_CITY, 255, 22, 20
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_19:
# 62 "data/scripts/new_debug.pory"
	warp MAP_VERMILION_CITY, 255, 15, 7
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_20:
# 63 "data/scripts/new_debug.pory"
	warp MAP_LAVENDER_TOWN, 255, 5, 5
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_22:
# 68 "data/scripts/new_debug.pory"
	warp MAP_CELADON_CITY, 255, 41, 9
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_23:
# 69 "data/scripts/new_debug.pory"
	warp MAP_FUCHSIA_CITY, 255, 19, 27
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_24:
# 70 "data/scripts/new_debug.pory"
	warp MAP_SAFFRON_CITY, 255, 15, 30
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_25:
# 71 "data/scripts/new_debug.pory"
	warp MAP_CINNABAR_ISLAND, 255, 13, 11
	goto EventScript_DebugNPC_1

EventScript_DebugNPC_26:
# 72 "data/scripts/new_debug.pory"
	warp MAP_INDIGO_PLATEAU_EXTERIOR, 255, 10, 12
	goto EventScript_DebugNPC_1


EventScript_DebugNPC_Text_0:
# 4 "data/scripts/new_debug.pory"
	.string "Debug menu$"

EventScript_DebugNPC_Text_1:
# 9 "data/scripts/new_debug.pory"
	.string "Given a Level 100 MEW.$"

EventScript_DebugNPC_Text_2:
# 15 "data/scripts/new_debug.pory"
	.string "Given BICYCLE, HM02, 99 MAX REPEL, and RUNNING SHOES.$"

EventScript_DebugNPC_Text_3:
# 25 "data/scripts/new_debug.pory"
	.string "Pokedex/Menu flags set.$"

EventScript_DebugNPC_Text_4:
# 35 "data/scripts/new_debug.pory"
	.string "All badges obtained.$"

EventScript_DebugNPC_Text_5:
# 50 "data/scripts/new_debug.pory"
	.string "Fly unlocked and locations visited.$"
