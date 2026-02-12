> **Note:** Some features implemented were to test feasibility; nothing is final. Paticularly the town names....

# Pokémon FireRed and LeafGreen Ultra (Customized for Shukti)

This is a personalized version of **FireRed Ultra**, for Shukti's birthday.

## Core Story Changes
*   **The Rival:** **STACEY** (Shukti's old boss). She's "very stupid" and makes lots of jokes about redundancies and poor business strategy. Her dialogue reflects her bossy persona and the closure of her hair salon.
*   **The Main Quest:** Team Rocket has stolen **Fig**, a special Shiny dog (Shiny Rockruff). NPCs in Mill Town and La-Vampire Town provide clues about her whereabouts.
*   **The Reward:** Upon defeating the Rocket boss in Silph Co., Shukti rescues Fig from the President and gets to keep her!
*   **Bowie (Pug):** A catchable wild "legendary" encounter in the Curl-ulean Gym. The Gym Leader, Bryony, has special dialogue if you catch or defeat him.
*   **The Final Boss:** The Champion is **OLLIE**. He features a powerhouse team of Gengar, Charizard, Gyarados, Raichu, Dragonite, and Snorlax.

## Completed Features
*   **Following Pokémon:** The first Pokémon in your party follows you!
*   **Forced Identity:** Name is forced to **SHUKTI**, Gender is forced to **Female**. Intro selection screens are skipped.
*   **Custom Starters:** Morpeko, Eevee, and Alolan Raichu (all with heavily buffed "Ultra" base stats).
*   **The "All Starters" Quest:** After choosing your first Pokémon, **Professor Tree** (renamed from Oak) will give you the remaining two starters later in the game:
    *   **Second Starter:** Speak to Professor Tree in the **Curl-ulean City** Pokémon Center.
    *   **Third Starter:** Speak to Professor Tree in the **Fo-Shear-ia City** Pokémon Center.
*   **Evolution Items:** Added **Fire, Water, Thunder, Leaf, Ice, Sun, Moon, Shiny, Dusk, and Dawn Stones** as pickup items scattered around Mill Town to allow early evolution for Eevee.
*   **Town Renames (Puns & References):**
    *   Pallet Town -> **Mill Town**
    *   Viridian City -> **Virid-LAN City** (Networking)
    *   Pewter City -> **Perm-ter City** (Hair)
    *   Cerulean City -> **Curl-ulean City** (Hair)
    *   Lavender Town -> **La-Vampire Town** (Twilight)
    *   Vermilion City -> **Ver-Mullet-on** (Hair)
    *   Celadon City -> **Sal-on City** (Hair)
    *   Fuchsia City -> **Fo-Shear-ia City** (Hair)
    *   Cinnabar Island -> **Cinna-Bella Island** (Twilight)
    *   Saffron City -> **Saffron-Swan City** (Twilight)
    *   Indigo Plateau -> **In-Dye-Go Plateau** (Hair)
*   **New NPCs:** Zaynab and Aliyah added to Mill Town with custom dialogue about Fig.
*   **Gym Leader Overhaul:**
    *   Perm-ter City (Brock): **FARIS** (Psychic/Fairy Team: Ralts, Kirlia).
    *   Curl-ulean City (Misty): **BRYONY** (Mixed Team: Jigglypuff, Jynx, Mr. Mime, Poliwhirl, Flareon, Vileplume). All other trainers removed.
    *   Ver-Mullet-on (Lt. Surge): **DAVID** (Rock Team: Graveler, Sudowoodo, Golem).
    *   Saffron-Swan City (Sabrina): **BRYONY & FARIS** (Double Battle!)
*   **Gym Guide (OLLIE):** The guy in every gym is now **OLLIE**. He acts as a loving, supportive partner giving genuine advice and romantic gifts in every gym:
    *   Perm-ter City: Love Ball
    *   Curl-ulean City: Sweet Heart
    *   Ver-Mullet-on: Heart Scale
    *   Sal-on City: Destiny Knot
    *   Fo-Shear-ia City: Rose Incense
    *   Saffron-Swan City: Friend Ball
    *   Cinna-Bella Island: Luxury Ball
    *   Virid-LAN City: 5x Love Balls
*   **Secret Message:** A hidden message from Ollie on the NES in Shukti's room.

## Modified Gym Leader Teams
*   **Perm-ter City (Faris):** Ralts (Lv. 12), Kirlia (Lv. 14).
*   **Curl-ulean City (Bryony):** Jigglypuff (Lv. 18), Jynx (Lv. 19), Mr. Mime (Lv. 19), Poliwhirl (Lv. 20), Flareon (Lv. 20), Vileplume (Lv. 21).
*   **Ver-Mullet-on (David):** Graveler (Lv. 21), Sudowoodo (Lv. 23), Golem (Lv. 24).
*   **Saffron-Swan City (Bryony & Faris):** Espeon (Lv. 43), Sylveon (Lv. 43), Gardevoir (Lv. 44), Gallade (Lv. 44), Alakazam (Lv. 43).

## To-Do List
*   [ ] **Rename remaining Gym Leaders:**
    *   Erika (Sal-on City) -> ?
    *   Koga (Fo-Shear-ia City) -> ?
    *   Blaine (Cinna-Bella Island) -> ?
    *   Giovanni (Virid-LAN City) -> ?
*   [ ] **NPC Personalization:** Modify many more NPCs to represent real-life friends and family.
*   [ ] **Custom Dialogue:** Add significantly more custom dialogue, in-jokes, and personal references throughout the entire game.
*   [ ] **Visuals:**
    *   Custom Title Screen (Replace Charizard).
    *   Custom Player Sprite (To look more like Shukti).

## Zones (Progress Tracker)
### Mill Town
#### PalletTown
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `PalletTown_EventScript_SignLady`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `PalletTown_EventScript_FatMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PROF_OAK** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemFireStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemWaterStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemThunderStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemLeafStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemIceStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemSunStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemMoonStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemShinyStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemDuskStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_EventScript_ItemDawnStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `PalletTown_EventScript_Zaynab`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `PalletTown_EventScript_Aliyah`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PalletTown_EventScript_OaksLabSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_EventScript_PlayersHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_EventScript_RivalsHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_EventScript_TownSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_EventScript_TrainerTips`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PalletTown_PlayersHouse_1F
**NPCs:**
- **OBJ_EVENT_GFX_MOM** (Script: `PalletTown_PlayersHouse_1F_EventScript_Mom`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PalletTown_PlayersHouse_1F_EventScript_TV`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PalletTown_PlayersHouse_2F
**Interactables / Signs:**
- **Sign** (Script: `PalletTown_PlayersHouse_2F_EventScript_NES`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_PlayersHouse_2F_EventScript_PC`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_PlayersHouse_2F_EventScript_Sign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PalletTown_ProfessorOaksLab
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PalletTown_ProfessorOaksLab_EventScript_Aide1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `PalletTown_ProfessorOaksLab_EventScript_Aide3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PalletTown_ProfessorOaksLab_EventScript_Aide2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PROF_OAK** (Script: `PalletTown_ProfessorOaksLab_EventScript_ProfOak`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_ProfessorOaksLab_EventScript_SquirtleBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PalletTown_ProfessorOaksLab_EventScript_CharmanderBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `PalletTown_ProfessorOaksLab_EventScript_Rival`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POKEDEX** (Script: `PalletTown_ProfessorOaksLab_EventScript_Pokedex`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POKEDEX** (Script: `PalletTown_ProfessorOaksLab_EventScript_Pokedex`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PalletTown_ProfessorOaksLab_EventScript_Computer`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_ProfessorOaksLab_EventScript_Computer`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_ProfessorOaksLab_EventScript_LeftSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_ProfessorOaksLab_EventScript_RightSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PalletTown_RivalsHouse
**NPCs:**
- **OBJ_EVENT_GFX_DAISY** (Script: `PalletTown_RivalsHouse_EventScript_Daisy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_TOWN_MAP** (Script: `PalletTown_RivalsHouse_EventScript_TownMap`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PalletTown_RivalsHouse_EventScript_Bookshelf`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_RivalsHouse_EventScript_Bookshelf`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PalletTown_RivalsHouse_EventScript_Picture`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 1
#### Route1
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `Route1_EventScript_MartClerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `Route1_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route1_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Virid-LAN City
#### ViridianCity
**NPCs:**
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `ViridianCity_EventScript_DreamEaterTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `ViridianCity_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_VAR_0** (Script: `ViridianCity_EventScript_TutorialOldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `ViridianCity_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianCity_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `ViridianCity_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianCity_EventScript_ItemPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_EventScript_TrainerTips1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_EventScript_TrainerTips2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_EventScript_CitySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_EventScript_GymDoor`)
  - Text: *"No direct dialogue found in map text.inc"*
#### ViridianCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `ViridianCity_Gym_EventScript_Takashi`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `ViridianCity_Gym_EventScript_Yuji`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `ViridianCity_Gym_EventScript_Atsushi`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `ViridianCity_Gym_EventScript_Jason`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `ViridianCity_Gym_EventScript_Cole`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `ViridianCity_Gym_EventScript_Kiyo`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `ViridianCity_Gym_EventScript_Samuel`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GIOVANNI** (Script: `ViridianCity_Gym_EventScript_Giovanni`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `ViridianCity_Gym_EventScript_Warren`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `ViridianCity_Gym_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### ViridianCity_House
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `ViridianCity_House_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ViridianCity_House_EventScript_LittleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SPEAROW** (Script: `ViridianCity_House_EventScript_Speary`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_House_EventScript_NicknameSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### ViridianCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `ViridianCity_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianCity_Mart_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `ViridianCity_Mart_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### ViridianCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### ViridianCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### ViridianCity_School
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `ViridianCity_School_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `ViridianCity_School_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_School_EventScript_Notebook`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_School_EventScript_Blackboard`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_School_EventScript_Blackboard`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_School_EventScript_PokemonJournal`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianCity_School_EventScript_PokemonJournal`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 2
#### Route2
**NPCs:**
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route2_EventScript_ItemEther`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route2_EventScript_ItemParalyzeHeal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route2_EventScript_DiglettsCaveSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route2_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route2_EastBuilding
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route2_EastBuilding_EventScript_Aide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route2_EastBuilding_EventScript_Rocker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route2_House
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route2_House_EventScript_Scientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GBA_KID** (Script: `Route2_House_EventScript_Reyley`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route2_ViridianForest_NorthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route2_ViridianForest_NorthEntrance_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route2_ViridianForest_NorthEntrance_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `Route2_ViridianForest_NorthEntrance_EventScript_CooltrainerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route2_ViridianForest_SouthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `Route2_ViridianForest_SouthEntrance_EventScript_Woman1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `Route2_ViridianForest_SouthEntrance_EventScript_Woman2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Viridian Forest
#### ViridianForest
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianForest_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `ViridianForest_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Rick`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Doug`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Sammy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemPokeBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemAntidote`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Anthony`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Charlie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemPotion2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips4`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianForest_EventScript_ExitSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips5`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Perm-ter City
#### PewterCity
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `PewterCity_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `PewterCity_EventScript_MuseumGuide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `PewterCity_EventScript_FatMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `PewterCity_EventScript_BugCatcher`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `PewterCity_EventScript_GymGuide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_EventScript_RunningShoesAide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_EventScript_MuseumSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_EventScript_PoliceNotice`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_EventScript_TrainerTips`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_EventScript_CitySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PewterCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_BROCK** (Script: `PewterCity_Gym_EventScript_Brock`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `PewterCity_Gym_EventScript_Liam`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `PewterCity_Gym_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PewterCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `PewterCity_House1_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `PewterCity_House1_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_NIDORAN_M** (Script: `PewterCity_House1_EventScript_Nidoran`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PewterCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `PewterCity_House2_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `PewterCity_House2_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PewterCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `PewterCity_Mart_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `PewterCity_Mart_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CLERK** (Script: `PewterCity_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PewterCity_Museum_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `PewterCity_Museum_1F_EventScript_Scientist1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `PewterCity_Museum_1F_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_1F_EventScript_OldAmberScientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_AMBER** (Script: `PewterCity_Museum_1F_EventScript_OldAmber`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_1F_EventScript_Scientist2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_1F_EventScript_SeismicTossTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_AerodactylFossil`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_KabutopsFossil`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_PokemonJournalBrock`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_PokemonJournalBrock`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PewterCity_Museum_2F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_2F_EventScript_Scientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `PewterCity_Museum_2F_EventScript_Man`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `PewterCity_Museum_2F_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `PewterCity_Museum_2F_EventScript_LittleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `PewterCity_Museum_2F_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_MoonStone`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_MoonStone`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PewterCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_JIGGLYPUFF** (Script: `PewterCity_PokemonCenter_1F_EventScript_Jigglypuff`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `PewterCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_NURSE** (Script: `PewterCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `PewterCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `MysteryEventClub_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GBA_KID** (Script: `PewterCity_PokemonCenter_1F_EventScript_GBAKid1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GBA_KID** (Script: `PewterCity_PokemonCenter_1F_EventScript_GBAKid2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PewterCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Route 3
#### Route3
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route3_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route3_EventScript_Robin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route3_EventScript_James`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route3_EventScript_Sally`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route3_EventScript_Greg`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route3_EventScript_Calvin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route3_EventScript_Janice`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route3_EventScript_Colton`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route3_EventScript_Ben`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route3_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Mt. Moon
#### MtMoon_1F
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `MtMoon_1F_EventScript_Iris`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `MtMoon_1F_EventScript_Robby`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `MtMoon_1F_EventScript_Jovan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `MtMoon_1F_EventScript_Miriam`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `MtMoon_1F_EventScript_Kent`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `MtMoon_1F_EventScript_Josh`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `MtMoon_1F_EventScript_Marcos`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemParalyzeHeal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemTM09`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemRareCandy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemEscapeRope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemMoonStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `MtMoon_1F_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `MtMoon_1F_EventScript_ZubatSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### MtMoon_B1F
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### MtMoon_B2F
**NPCs:**
- **OBJ_EVENT_GFX_FOSSIL** (Script: `MtMoon_B2F_EventScript_DomeFossil`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FOSSIL** (Script: `MtMoon_B2F_EventScript_HelixFossil`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `MtMoon_B2F_EventScript_Miguel`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt4`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemStarPiece`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemTM46`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemRevive`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemAntidote`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 4
#### Route4
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `Route4_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route4_EventScript_Crissy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route4_EventScript_ItemTM05`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `Route4_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `Route4_EventScript_MegaPunchTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `Route4_EventScript_MegaKickTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `None`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route4_EventScript_MtMoonSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route4_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route4_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `Route4_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `Route4_PokemonCenter_1F_EventScript_MagikarpSalesman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `Route4_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `Route4_PokemonCenter_1F_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route4_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CLIPBOARD** (Script: `Route4_PokemonCenter_1F_EventScript_Newspaper`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route4_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Curl-ulean City
#### CeruleanCity
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `CeruleanCity_EventScript_Policeman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeruleanCity_EventScript_Grunt`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `CeruleanCity_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `CeruleanCity_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SLOWBRO** (Script: `CeruleanCity_EventScript_Slowbro`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `CeruleanCity_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `CeruleanCity_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `CeruleanCity_EventScript_CeruleanCaveGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_EventScript_CitySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_EventScript_BikeShopSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_EventScript_TrainerTips`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_BikeShop
**NPCs:**
- **OBJ_EVENT_GFX_MAN** (Script: `CeruleanCity_BikeShop_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_BikeShop_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CeruleanCity_BikeShop_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_Gym
**NPCs:**
- **229 + (1 << 14)** (Script: `CeruleanCity_Gym_EventScript_Bowie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MISTY** (Script: `CeruleanCity_Gym_EventScript_Misty`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `CeruleanCity_Gym_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeruleanCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CeruleanCity_House1_EventScript_BadgeGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_HIKER** (Script: `CeruleanCity_House2_EventScript_Hiker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `CeruleanCity_House2_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_House2_EventScript_WallHole`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_House3
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeruleanCity_House3_EventScript_Dontae`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_WOMAN** (Script: `CeruleanCity_House3_EventScript_OldWoman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_House4
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeruleanCity_House4_EventScript_WonderNewsBerryMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_House5
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `CeruleanCity_House5_EventScript_BerryPowderMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_House5_EventScript_BerryCrushRankings`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `CeruleanCity_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `CeruleanCity_Mart_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_Mart_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OAK** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_ProfTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Rocker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_PokemonJournalMisty`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_PokemonJournalMisty`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CeruleanCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Route 24
#### Route24
**NPCs:**
- **OBJ_EVENT_GFX_MAN** (Script: `Route24_EventScript_Rocket`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route24_EventScript_Ethan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route24_EventScript_Reli`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route24_EventScript_Timmy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route24_EventScript_Ali`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route24_EventScript_Cale`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route24_EventScript_Shane`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route24_EventScript_ItemTM45`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 25
#### Route25
**NPCs:**
- **OBJ_EVENT_GFX_HIKER** (Script: `Route25_EventScript_Franklin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route25_EventScript_Joey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route25_EventScript_Wayne`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route25_EventScript_Dan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route25_EventScript_Kelsey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route25_EventScript_Nob`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route25_EventScript_Flint`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route25_EventScript_Chad`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route25_EventScript_Haley`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route25_EventScript_ItemTM43`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route25_EventScript_Beauty`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `Route25_EventScript_Man`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route25_EventScript_SeaCottageSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route25_SeaCottage
**NPCs:**
- **OBJ_EVENT_GFX_BILL** (Script: `Route25_SeaCottage_EventScript_Bill`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CLEFAIRY** (Script: `Route25_SeaCottage_EventScript_Bill`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route25_SeaCottage_EventScript_Computer`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 5
#### Route5
**Interactables / Signs:**
- **Sign** (Script: `Route5_EventScript_UndergroundPathSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route5_PokemonDayCare
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `Route5_PokemonDayCare_EventScript_DaycareMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route5_SouthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route5_SouthEntrance_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Route 6
#### Route6
**NPCs:**
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route6_EventScript_Keigo`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route6_EventScript_Ricky`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route6_EventScript_Nancy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route6_EventScript_Elijah`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route6_EventScript_Isabelle`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route6_EventScript_Jeff`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route6_EventScript_UndergroundPathSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route6_NorthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route6_NorthEntrance_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route6_UnusedHouse

---
### Ver-Mullet-on
#### VermilionCity
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `VermilionCity_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `VermilionCity_EventScript_OldMan1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `VermilionCity_EventScript_OldMan2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MACHOP** (Script: `VermilionCity_EventScript_Machop`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `VermilionCity_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `VermilionCity_EventScript_FerrySailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `VermilionCity_EventScript_OaksAide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_EventScript_CitySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_EventScript_PokemonFanClubSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_EventScript_HarborSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_EventScript_SnorlaxNotice`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### VermilionCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_LT_SURGE** (Script: `VermilionCity_Gym_EventScript_LtSurge`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `VermilionCity_Gym_EventScript_Baily`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `VermilionCity_Gym_EventScript_Dwayne`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `VermilionCity_Gym_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `VermilionCity_Gym_EventScript_Tucker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan4`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan5`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan6`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan7`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan8`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan9`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan10`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan11`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan12`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan13`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan14`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan15`)
  - Text: *"No direct dialogue found in map text.inc"*
#### VermilionCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `VermilionCity_House1_EventScript_FishingGuru`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### VermilionCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `VermilionCity_House2_EventScript_Elyssa`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### VermilionCity_House3
**NPCs:**
- **OBJ_EVENT_GFX_BOY** (Script: `VermilionCity_House3_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PIDGEY** (Script: `VermilionCity_House3_EventScript_Pidgey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CLIPBOARD** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `VermilionCity_House3_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_House3_EventScript_Letter`)
  - Text: *"No direct dialogue found in map text.inc"*
#### VermilionCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `VermilionCity_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VermilionCity_Mart_EventScript_CooltrainerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `VermilionCity_Mart_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### VermilionCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Man`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Hiker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `VermilionCity_PokemonCenter_1F_EventScript_PokemonJournalLtSurge`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `VermilionCity_PokemonCenter_1F_EventScript_PokemonJournalLtSurge`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### VermilionCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### VermilionCity_PokemonFanClub
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `VermilionCity_PokemonFanClub_EventScript_Chairman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `VermilionCity_PokemonFanClub_EventScript_WorkerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PIKACHU** (Script: `VermilionCity_PokemonFanClub_EventScript_Pikachu`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SEEL** (Script: `VermilionCity_PokemonFanClub_EventScript_Seel`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `VermilionCity_PokemonFanClub_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `VermilionCity_PokemonFanClub_EventScript_FatMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_PokemonFanClub_EventScript_RulesSign1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `VermilionCity_PokemonFanClub_EventScript_RulesSign2`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### S.S. Anne
#### SSAnne_Exterior
**NPCs:**
- **OBJ_EVENT_GFX_SS_ANNE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SSAnne_1F_Corridor
**NPCs:**
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_1F_Corridor_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SSAnne_1F_Corridor_EventScript_WorkerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SSAnne_2F_Corridor
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_2F_Corridor_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SSAnne_3F_Corridor
**NPCs:**
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_3F_Corridor_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SSAnne_B1F_Corridor
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SSAnne_CaptainsOffice
**NPCs:**
- **OBJ_EVENT_GFX_CAPTAIN** (Script: `SSAnne_CaptainsOffice_EventScript_Captain`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SSAnne_CaptainsOffice_EventScript_Book`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SSAnne_CaptainsOffice_EventScript_TrashCan`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SSAnne_CaptainsOffice_EventScript_Book`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SSAnne_Deck
**NPCs:**
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_Deck_EventScript_Trevor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `SSAnne_Deck_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_Deck_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_Deck_EventScript_Edmond`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SSAnne_Deck_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SSAnne_Kitchen
**NPCs:**
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef4`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef5`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef6`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef7`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SSAnne_Kitchen_EventScript_ItemGreatBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 11
#### Route11
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Eddie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Hugo`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Dillon`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Dave`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Jasper`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Darian`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `Route11_EventScript_Braxton`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Yasu`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Dirk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `Route11_EventScript_Bernie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route11_EventScript_ItemXDefend`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route11_EventScript_ItemGreatBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route11_EventScript_ItemAwakening`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route11_EventScript_DiglettsCaveSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route11_EastEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route11_EastEntrance_1F_EventScript_TopGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route11_EastEntrance_1F_EventScript_BottomGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route11_EastEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EastEntrance_2F_EventScript_Turner`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route11_EastEntrance_2F_EventScript_Aide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route11_EastEntrance_2F_EventScript_LeftBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route11_EastEntrance_2F_EventScript_RightBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Diglett's Cave
#### DiglettsCave_B1F
#### DiglettsCave_NorthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_HIKER** (Script: `DiglettsCave_NorthEntrance_EventScript_Hiker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### DiglettsCave_SouthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `DiglettsCave_SouthEntrance_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Route 9
#### Route9
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route9_EventScript_Alicia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route9_EventScript_Jeremy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route9_EventScript_Alan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route9_EventScript_Chris`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route9_EventScript_Brent`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route9_EventScript_Conner`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route9_EventScript_Brice`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route9_EventScript_Caitlin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route9_EventScript_Drew`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route9_EventScript_ItemTM40`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route9_EventScript_ItemBurnHeal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route9_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 10
#### Route10
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route10_EventScript_Carol`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route10_EventScript_Clark`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `Route10_EventScript_Herman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route10_EventScript_Trent`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `Route10_EventScript_Mark`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route10_EventScript_Heidi`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route10_EventScript_SouthRockTunnelSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route10_EventScript_PowerPlantSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route10_EventScript_NorthRockTunnelSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route10_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `Route10_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `Route10_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `Route10_PokemonCenter_1F_EventScript_FatMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route10_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route10_PokemonCenter_1F_EventScript_Aide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route10_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Rock Tunnel
#### RockTunnel_1F
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_1F_EventScript_Dana`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_1F_EventScript_Ariana`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_1F_EventScript_Leah`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_1F_EventScript_Lucas`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_1F_EventScript_Oliver`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_1F_EventScript_Lenny`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_1F_EventScript_Ashton`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_1F_EventScript_ItemRepel`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_1F_EventScript_ItemPearl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_1F_EventScript_ItemEscapeRope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `RockTunnel_1F_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### RockTunnel_B1F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_B1F_EventScript_Cooper`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_B1F_EventScript_Dudley`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_B1F_EventScript_Sofia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_B1F_EventScript_Allen`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_B1F_EventScript_Eric`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_B1F_EventScript_Steve`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_B1F_EventScript_Martha`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_B1F_EventScript_Winston`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `RockTunnel_B1F_EventScript_RockSlideTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_B1F_EventScript_ItemRevive`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_B1F_EventScript_ItemMaxEther`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### La-Vampire Town
#### LavenderTown
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `LavenderTown_EventScript_LittleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `LavenderTown_EventScript_WorkerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `LavenderTown_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `LavenderTown_EventScript_SilphScopeNotice`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `LavenderTown_EventScript_TownSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `LavenderTown_EventScript_PokemonTowerSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `LavenderTown_EventScript_VolunteerHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### LavenderTown_House1
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `LavenderTown_House1_EventScript_CooltrainerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUBONE** (Script: `LavenderTown_House1_EventScript_Cubone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### LavenderTown_House2
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `LavenderTown_House2_EventScript_NameRater`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### LavenderTown_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `LavenderTown_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `LavenderTown_Mart_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `LavenderTown_Mart_EventScript_Rocker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `LavenderTown_Mart_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### LavenderTown_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `LavenderTown_PokemonCenter_1F_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### LavenderTown_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### LavenderTown_VolunteerPokemonHouse
**NPCs:**
- **OBJ_EVENT_GFX_MR_FUJI** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_NIDORINO** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PSYDUCK** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Pokémon Tower
#### PokemonTower_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `PokemonTower_1F_EventScript_WorkerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_1F_EventScript_Channeler`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `PokemonTower_1F_EventScript_Woman1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `PokemonTower_1F_EventScript_Woman2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `PokemonTower_1F_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PokemonTower_2F
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_2F_EventScript_Channeler`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PokemonTower_3F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_3F_EventScript_Patricia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_3F_EventScript_Carly`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_3F_EventScript_Hope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_3F_EventScript_ItemEscapeRope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PokemonTower_4F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_4F_EventScript_Laurel`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_4F_EventScript_Jody`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_4F_EventScript_Paula`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_4F_EventScript_ItemElixir`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_4F_EventScript_ItemAwakening`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_4F_EventScript_ItemGreatBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PokemonTower_5F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Ruth`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Tammy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Karina`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Janae`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Channeler`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_5F_EventScript_ItemNugget`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_5F_EventScript_ItemCleanseTag`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PokemonTower_6F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_6F_EventScript_Angelica`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_6F_EventScript_Jennifer`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_6F_EventScript_Emilia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_6F_EventScript_ItemRareCandy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_6F_EventScript_ItemXAccuracy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### PokemonTower_7F
**NPCs:**
- **OBJ_EVENT_GFX_MR_FUJI** (Script: `PokemonTower_7F_EventScript_MrFuji`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `PokemonTower_7F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `PokemonTower_7F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `PokemonTower_7F_EventScript_Grunt3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 12
#### Route12
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Ned`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Chip`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Hank`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Elliot`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SNORLAX** (Script: `Route12_EventScript_Snorlax`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route12_EventScript_Luca`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route12_EventScript_Justin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Andrew`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route12_EventScript_ItemTM48`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route12_EventScript_ItemIron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route12_EventScript_Gia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `Route12_EventScript_Jes`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route12_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route12_EventScript_FishingSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route12_FishingHouse
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_FishingHouse_EventScript_FishingGuruBrother`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route12_FishingHouse_EventScript_MagikarpRecordSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route12_NorthEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route12_NorthEntrance_1F_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route12_NorthEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `Route12_NorthEntrance_2F_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route12_NorthEntrance_2F_EventScript_LeftBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route12_NorthEntrance_2F_EventScript_RightBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 13
#### Route13
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Alma`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route13_EventScript_Sebastian`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Susie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route13_EventScript_Sheila`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route13_EventScript_Lola`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Valerie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Gwen`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route13_EventScript_Robert`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route13_EventScript_Perry`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route13_EventScript_Jared`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route13_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route13_EventScript_TrainerTips2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route13_EventScript_TrainerTips1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 14
#### Route14
**NPCs:**
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Gerald`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Donald`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Beck`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Marlon`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Isaac`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Malik`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Mitch`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Carter`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Lukas`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Benny`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route14_EventScript_Jan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route14_EventScript_Kiri`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route14_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 15
#### Route15
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Yazmin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route15_EventScript_Edwin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route15_EventScript_Chester`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Kindra`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route15_EventScript_Olivia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route15_EventScript_Alex`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route15_EventScript_Ernest`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Becky`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route15_EventScript_Grace`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Celia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route15_EventScript_ItemTM18`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `Route15_EventScript_Ron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `Route15_EventScript_Mya`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route15_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route15_WestEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route15_WestEntrance_1F_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route15_WestEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route15_WestEntrance_2F_EventScript_Aide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route15_WestEntrance_2F_EventScript_LeftBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route15_WestEntrance_2F_EventScript_RightBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 16
#### Route16
**NPCs:**
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Lao`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Koji`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Luke`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Ruben`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Hideo`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Camron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route16_EventScript_Lea`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `Route16_EventScript_Jed`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SNORLAX** (Script: `Route16_EventScript_Snorlax`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route16_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route16_EventScript_CyclingRoadSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route16_House
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `Route16_House_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FEAROW** (Script: `Route16_House_EventScript_Fearow`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route16_NorthEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route16_NorthEntrance_1F_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route16_NorthEntrance_1F_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route16_NorthEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `Route16_NorthEntrance_2F_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route16_NorthEntrance_2F_EventScript_LittleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route16_NorthEntrance_2F_EventScript_Aide`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route16_NorthEntrance_2F_EventScript_LeftBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route16_NorthEntrance_2F_EventScript_RightBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 17
#### Route17
**NPCs:**
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Virgil`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Isaiah`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Raul`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Nikolas`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Billy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Jamal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Zeek`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Corey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_William`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Jaxon`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route17_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route17_EventScript_TrainerTips2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route17_EventScript_TrainerTips1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route17_EventScript_ItemsNotice`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route17_EventScript_BallsNotice`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route17_EventScript_CyclingRoadSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 18
#### Route18
**NPCs:**
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route18_EventScript_Jacob`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route18_EventScript_Ramiro`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route18_EventScript_Wilton`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route18_EventScript_CyclingRoadSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route18_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route18_EastEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route18_EastEntrance_1F_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### Route18_EastEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_BOY** (Script: `Route18_EastEntrance_2F_EventScript_Haden`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route18_EastEntrance_2F_EventScript_LeftBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route18_EastEntrance_2F_EventScript_RightBinoculars`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Fo-Shear-ia City
#### FuchsiaCity
**NPCs:**
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `FuchsiaCity_EventScript_Erik`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SLOWPOKE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_VOLTORB** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `FuchsiaCity_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANSEY** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `FuchsiaCity_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LAPRAS** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `FuchsiaCity_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_VAR_0** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_KANGASKHAN** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `FuchsiaCity_EventScript_SubstituteTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `FuchsiaCity_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `FuchsiaCity_EventScript_CitySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_SafariZoneSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_WardensHomeSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_VoltorbSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_SlowpokeSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_ChanseySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_KangaskhanSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_FossilMonSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_LaprasSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_EventScript_SafariGameSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Kayden`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Shawn`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Kirk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `FuchsiaCity_Gym_EventScript_Edgar`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `FuchsiaCity_Gym_EventScript_Phil`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Nate`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_KOGA** (Script: `FuchsiaCity_Gym_EventScript_Koga`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `FuchsiaCity_Gym_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `FuchsiaCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `FuchsiaCity_House1_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `FuchsiaCity_House1_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `FuchsiaCity_House1_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `FuchsiaCity_House2_EventScript_FishingGurusBrother`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_House3
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `FuchsiaCity_House3_EventScript_MoveDeleter`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `FuchsiaCity_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `FuchsiaCity_Mart_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `FuchsiaCity_Mart_EventScript_CooltrainerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OAK** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_ProfTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_SafariZone_Entrance
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_SafariZone_Office
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker4`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### FuchsiaCity_WardensHouse
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `FuchsiaCity_WardensHouse_EventScript_Warden`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `FuchsiaCity_WardensHouse_EventScript_ItemRareCandy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `FuchsiaCity_WardensHouse_EventScript_PokemonJournalKoga`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign2`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Safari Zone
#### SafariZone_Center
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_Center_EventScript_ItemNugget`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_Center_EventScript_RestHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_Center_EventScript_TrainerTips`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_Center_EventScript_AreaSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SafariZone_East
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemMaxPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemFullRestore`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemTM11`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemLeafStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_East_EventScript_AreaSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_East_EventScript_RestHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_East_EventScript_TrainerTips`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SafariZone_North
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_North_EventScript_ItemProtein`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_North_EventScript_ItemTM47`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_North_EventScript_ItemQuickClaw`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_North_EventScript_TrainerTips1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_North_EventScript_AreaSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_North_EventScript_TrainerTips2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_North_EventScript_TrainerTips3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_North_EventScript_RestHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SafariZone_West
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemGoldTeeth`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemTM32`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemMaxPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemMaxRevive`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_West_EventScript_LostTeethNotice`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_West_EventScript_TrainerTips`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_West_EventScript_AreaSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SafariZone_West_EventScript_RestHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SafariZone_SecretHouse
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SafariZone_SecretHouse_EventScript_Attendant`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Route 8
#### Route8
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Julia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route8_EventScript_Rich`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route8_EventScript_Glenn`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Paige`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route8_EventScript_Leslie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Andrea`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Megan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route8_EventScript_Stan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route8_EventScript_Aidan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route8_EventScript_Eli`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route8_EventScript_Anne`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route8_EventScript_Ricardo`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route8_EventScript_Jaren`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route8_EventScript_UndergroundPathSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route8_WestEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route8_WestEntrance_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Route 7
#### Route7
**NPCs:**
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route7_EventScript_UndergroundPathSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route7_EastEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route7_EastEntrance_EventScript_Guard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Sal-on City
#### CeladonCity
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeladonCity_EventScript_RocketGrunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `CeladonCity_EventScript_FatMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLIWRATH** (Script: `CeladonCity_EventScript_Poliwrath`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `CeladonCity_EventScript_LittleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CeladonCity_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeladonCity_EventScript_OldMan2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `CeladonCity_EventScript_SoftboiledTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeladonCity_EventScript_RocketGrunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeladonCity_EventScript_OldMan1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `CeladonCity_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `CeladonCity_EventScript_ItemEther`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CeladonCity_EventScript_SilphCoScientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_EventScript_TrainerTips2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_EventScript_PrizeExchangeSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_EventScript_GameCornerSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_EventScript_CitySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_EventScript_MansionSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_EventScript_TrainerTips1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_EventScript_DeptStoreSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeladonCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `CeladonCity_Gym_EventScript_Kay`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Gym_EventScript_Bridget`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `CeladonCity_Gym_EventScript_Tina`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Gym_EventScript_Tamia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Gym_EventScript_Lori`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `CeladonCity_Gym_EventScript_Lisa`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ERIKA** (Script: `CeladonCity_Gym_EventScript_Erika`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `CeladonCity_Gym_EventScript_Mary`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeladonCity_Condominiums_1F
**NPCs:**
- **OBJ_EVENT_GFX_MEOWTH** (Script: `CeladonCity_Condominiums_1F_EventScript_Meowth`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CLEFAIRY** (Script: `CeladonCity_Condominiums_1F_EventScript_Clefairy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_NIDORAN_F** (Script: `CeladonCity_Condominiums_1F_EventScript_Nidoran`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_WOMAN** (Script: `CeladonCity_Condominiums_1F_EventScript_TeaWoman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_Condominiums_1F_EventScript_SuiteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_Condominiums_1F_EventScript_SuiteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeladonCity_DepartmentStore_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `CeladonCity_DepartmentStore_1F_EventScript_Receptionist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_DepartmentStore_1F_EventScript_LayoutSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_DepartmentStore_1F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeladonCity_GameCorner
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `CeladonCity_GameCorner_EventScript_InfoClerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `CeladonCity_GameCorner_EventScript_CoinsClerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `CeladonCity_GameCorner_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CeladonCity_GameCorner_EventScript_Woman1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `CeladonCity_GameCorner_EventScript_Fisher`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `CeladonCity_GameCorner_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `CeladonCity_GameCorner_EventScript_Woman2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `CeladonCity_GameCorner_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CeladonCity_GameCorner_EventScript_Scientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CeladonCity_GameCorner_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeladonCity_GameCorner_EventScript_RocketGrunt`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine0`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_UnusableSlotMachine1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine5`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine6`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine7`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine8`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine9`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine10`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine11`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine12`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine13`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine14`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_UnusableSlotMachine2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine16`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine17`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_UnusableSlotMachine3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine19`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine20`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine21`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_Poster`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_PhotoPrinter`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CeladonCity_Hotel
**NPCs:**
- **OBJ_EVENT_GFX_OLD_WOMAN** (Script: `CeladonCity_Hotel_EventScript_Receptionist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Hotel_EventScript_Beauty`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `CeladonCity_Hotel_EventScript_BeautyBoyfriend`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `CeladonCity_Hotel_EventScript_BeautyBrother`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CeladonCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `CeladonCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CeladonCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeladonCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Rocket Hideout
#### RocketHideout_B1F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt4`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt5`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B1F_EventScript_ItemEscapeRope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B1F_EventScript_ItemHyperPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### RocketHideout_B2F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B2F_EventScript_Grunt`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemXSpeed`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemMoonStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemTM12`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemSuperPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### RocketHideout_B3F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B3F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B3F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B3F_EventScript_ItemRareCandy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B3F_EventScript_ItemTM21`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B3F_EventScript_ItemBlackGlasses`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### RocketHideout_B4F
**NPCs:**
- **OBJ_EVENT_GFX_GIOVANNI** (Script: `RocketHideout_B4F_EventScript_Giovanni`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_SilphScope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B4F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_LiftKey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B4F_EventScript_Grunt3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B4F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_ItemTM49`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_ItemMaxEther`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_ItemCalcium`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Saffron-Swan City
#### SaffronCity
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt4`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt5`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_DoorGuardGrunt`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt7`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt6`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SaffronCity_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SaffronCity_EventScript_WorkerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `SaffronCity_EventScript_Man`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `SaffronCity_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PIDGEOT** (Script: `SaffronCity_EventScript_Pidgeot`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `SaffronCity_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `SaffronCity_EventScript_BattleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SaffronCity_EventScript_CitySign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_DojoSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_SilphProductSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_TrainerTips2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_SilphCoSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_TrainerTips1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_MrPsychicsHouseSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_EventScript_TrainerFanClubSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SaffronCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Cameron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Johan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Preston`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `SaffronCity_Gym_EventScript_Amanda`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `SaffronCity_Gym_EventScript_Stacy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `SaffronCity_Gym_EventScript_Tasha`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SABRINA** (Script: `SaffronCity_Gym_EventScript_Sabrina`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Tyron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `SaffronCity_Gym_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SaffronCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SaffronCity_Dojo
**NPCs:**
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Hitoshi`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Hideki`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Aaron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Mike`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_MasterKoichi`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SaffronCity_Dojo_EventScript_HitmonleeBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SaffronCity_Dojo_EventScript_HitmonchanBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SaffronCity_Dojo_EventScript_Statue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_Dojo_EventScript_Statue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_Dojo_EventScript_LeftScroll`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SaffronCity_Dojo_EventScript_RightScroll`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SaffronCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `SaffronCity_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SaffronCity_Mart_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LASS** (Script: `SaffronCity_Mart_EventScript_Lass`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SaffronCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `SaffronCity_PokemonCenter_1F_EventScript_PokemonJournalSabrina`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `SaffronCity_PokemonCenter_1F_EventScript_PokemonJournalSabrina`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SaffronCity_CopycatsHouse_1F
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CHANSEY** (Script: `SaffronCity_CopycatsHouse_1F_EventScript_Chansey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SaffronCity_MrPsychicsHouse
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `SaffronCity_MrPsychicsHouse_EventScript_MrPsychic`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### Silph Co.
#### SilphCo_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_1F_EventScript_Receptionist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_1F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_2F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_2F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_2F_EventScript_Jerry`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_2F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_2F_EventScript_Connor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `SilphCo_2F_EventScript_ThunderWaveTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_2F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_3F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_3F_EventScript_Grunt`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_3F_EventScript_WorkerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_3F_EventScript_Jose`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_3F_EventScript_ItemHyperPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_3F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_4F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_4F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_4F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_4F_EventScript_Rodney`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_4F_EventScript_WorkerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemMaxRevive`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemEscapeRope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemFullHeal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemTM41`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_4F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_5F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_5F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `SilphCo_5F_EventScript_Dalton`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_5F_EventScript_WorkerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_5F_EventScript_Beau`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_5F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_5F_EventScript_ItemProtein`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_5F_EventScript_ItemTM01`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_5F_EventScript_ItemCardKey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_5F_EventScript_Scientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_PokemonReport3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_PokemonReport2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_PokemonReport1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_5F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_6F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_6F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_6F_EventScript_WorkerM1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_6F_EventScript_WorkerF1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_6F_EventScript_WorkerM2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_6F_EventScript_WorkerM3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_6F_EventScript_WorkerF2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_6F_EventScript_Taylor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_6F_EventScript_ItemHPUp`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_6F_EventScript_ItemXSpecial`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_6F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_6F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_7F
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_7F_EventScript_LaprasGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_7F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_7F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_7F_EventScript_Grunt3`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_7F_EventScript_WorkerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_7F_EventScript_WorkerM1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_7F_EventScript_WorkerM2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_7F_EventScript_Joshua`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_7F_EventScript_ItemCalcium`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_7F_EventScript_ItemTM08`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_7F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_8F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_8F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_8F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_8F_EventScript_Parker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_8F_EventScript_WorkerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_8F_EventScript_ItemIron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_8F_EventScript_Scientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_8F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_9F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_9F_EventScript_Ed`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_9F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `SilphCo_9F_EventScript_HealWoman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_9F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_9F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_10F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_10F_EventScript_Travis`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_10F_EventScript_WorkerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_10F_EventScript_Grunt`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_10F_EventScript_ItemCarbos`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_10F_EventScript_ItemUltraBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_10F_EventScript_ItemRareCandy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_10F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SilphCo_11F
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `SilphCo_11F_EventScript_President`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_11F_EventScript_Secretary`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GIOVANNI** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_11F_EventScript_Grunt1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_11F_EventScript_ItemZinc`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_11F_EventScript_Grunt2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SilphCo_11F_EventScript_FloorSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 19
#### Route19
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_M_LAND** (Script: `Route19_EventScript_Reece`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_LAND** (Script: `Route19_EventScript_Richard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Tony`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Matthew`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Douglas`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_David`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Axle`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Alice`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Connie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Anya`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Lia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_TUBER_M_WATER** (Script: `Route19_EventScript_Luc`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route19_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route19_UnusedHouse

---
### Route 20
#### Route20
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Melissa`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route20_EventScript_Missy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Nora`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route20_EventScript_Roger`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route20_EventScript_Dean`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route20_EventScript_Irene`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route20_EventScript_Barry`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route20_EventScript_Darrin`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Shirley`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Tiffany`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route20_EventScript_Camper`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route20_EventScript_SeafoamIslandsSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route20_EventScript_SeafoamIslandsSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Seafoam Islands
#### SeafoamIslands_1F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_1F_EventScript_ItemIceHeal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SeafoamIslands_B1F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B1F_EventScript_ItemWaterStone`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B1F_EventScript_ItemRevive`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SeafoamIslands_B2F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B2F_EventScript_ItemBigPearl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### SeafoamIslands_B3F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### SeafoamIslands_B4F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ARTICUNO** (Script: `SeafoamIslands_B4F_EventScript_Articuno`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B4F_EventScript_ItemUltraBall`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SeafoamIslands_B4F_EventScript_FastCurrentSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `SeafoamIslands_B4F_EventScript_BoulderHintSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Cinna-Bella Island
#### CinnabarIsland
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CinnabarIsland_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CinnabarIsland_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BILL** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CinnabarIsland_EventScript_IslandSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_EventScript_PokemonLabSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_EventScript_GymSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_EventScript_PokemonLabSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CinnabarIsland_Gym
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `CinnabarIsland_Gym_EventScript_Quinn`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Erik`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Avery`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `CinnabarIsland_Gym_EventScript_Ramon`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Derek`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `CinnabarIsland_Gym_EventScript_Dusty`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Zac`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLAINE** (Script: `CinnabarIsland_Gym_EventScript_Blaine`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLUE** (Script: `CinnabarIsland_Gym_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_GymStatue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quz1Left`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quz1Right`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz2Left`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz2Right`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz3Left`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz3Right`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz4Left`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz4Right`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz5Left`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz5Right`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz6Left`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz6Right`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_BlaineFujiPhoto`)
  - Text: *"No direct dialogue found in map text.inc"*
#### CinnabarIsland_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `CinnabarIsland_Mart_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CinnabarIsland_Mart_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Mart_EventScript_Scientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CinnabarIsland_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_PokemonJournalMrFuji`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_PokemonJournalMrFuji`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BILL** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Bill`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### CinnabarIsland_PokemonLab_Entrance
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Pokémon Mansion
#### PokemonMansion_1F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PokemonMansion_1F_EventScript_Ted`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_1F_EventScript_ItemCarbos`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_1F_EventScript_ItemEscapeRope`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_1F_EventScript_ItemProtein`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `PokemonMansion_1F_EventScript_Johnson`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_1F_EventScript_Statue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PokemonMansion_2F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `PokemonMansion_2F_EventScript_Arnie`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_2F_EventScript_ItemCalcium`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_2F_EventScript_ItemZinc`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_2F_EventScript_ItemHPUp`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_2F_EventScript_Statue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PokemonMansion_2F_EventScript_DiaryJuly10th`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PokemonMansion_2F_EventScript_DiaryJuly5th`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PokemonMansion_3F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `PokemonMansion_3F_EventScript_Simon`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PokemonMansion_3F_EventScript_Braydon`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_3F_EventScript_ItemMaxPotion`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_3F_EventScript_ItemIron`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_3F_EventScript_DiaryFeb6th`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PokemonMansion_3F_EventScript_Statue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### PokemonMansion_B1F
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemTM22`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `PokemonMansion_B1F_EventScript_Lewis`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PokemonMansion_B1F_EventScript_Ivan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemTM14`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemFullRestore`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemSecretKey`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_B1F_EventScript_DiarySep1st`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PokemonMansion_B1F_EventScript_Statue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `PokemonMansion_B1F_EventScript_Statue`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 21
#### Route21_North
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_North_EventScript_Ronald`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_North_EventScript_Wade`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_North_EventScript_Spencer`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route21_North_EventScript_Lil`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_TUBER_M_WATER** (Script: `Route21_North_EventScript_Ian`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `None`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### Route21_South
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_South_EventScript_Claude`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_South_EventScript_Nolan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_South_EventScript_Jack`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_South_EventScript_Jerome`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_South_EventScript_Roland`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### One Island
#### OneIsland
**NPCs:**
- **OBJ_EVENT_GFX_BILL** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `OneIsland_EventScript_OldMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `OneIsland_EventScript_BaldingMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `OneIsland_EventScript_IslandSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_EventScript_PokemonNetCenterSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### OneIsland_Harbor
**NPCs:**
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `OneIsland_Harbor_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### OneIsland_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `OneIsland_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BILL** (Script: `OneIsland_PokemonCenter_1F_EventScript_Bill`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CELIO** (Script: `OneIsland_PokemonCenter_1F_EventScript_Celio`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `OneIsland_PokemonCenter_1F_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_HIKER** (Script: `OneIsland_PokemonCenter_1F_EventScript_Hiker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_PokemonCenter_1F_EventScript_BattleGirl`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text: *"No direct dialogue found in map text.inc"*
#### OneIsland_TreasureBeach
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `OneIsland_TreasureBeach_EventScript_Amara`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `OneIsland_TreasureBeach_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### OneIsland_KindleRoad
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `OneIsland_KindleRoad_EventScript_Maria`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_LAND** (Script: `OneIsland_KindleRoad_EventScript_Abigail`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `OneIsland_KindleRoad_EventScript_Finn`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_M_LAND** (Script: `OneIsland_KindleRoad_EventScript_Garrett`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_FISHER** (Script: `OneIsland_KindleRoad_EventScript_Tommy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_KindleRoad_EventScript_Sharon`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_KindleRoad_EventScript_Tanya`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `OneIsland_KindleRoad_EventScript_Shea`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `OneIsland_KindleRoad_EventScript_Hugh`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `OneIsland_KindleRoad_EventScript_Bryce`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `OneIsland_KindleRoad_EventScript_Claire`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `OneIsland_KindleRoad_EventScript_Mik`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_KindleRoad_EventScript_Kia`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `OneIsland_KindleRoad_EventScript_ItemEther`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `OneIsland_KindleRoad_EventScript_ItemMaxRepel`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `OneIsland_KindleRoad_EventScript_ItemCarbos`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `OneIsland_KindleRoad_EventScript_EmberSpaSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `OneIsland_KindleRoad_EventScript_RouteSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Two Island
#### TwoIsland
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `TwoIsland_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `TwoIsland_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `TwoIsland_EventScript_Beauty`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `TwoIsland_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `TwoIsland_EventScript_SuperNerd`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `TwoIsland_EventScript_ItemRevive`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `TwoIsland_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BOY** (Script: `TwoIsland_EventScript_Boy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `TwoIsland_EventScript_IslandSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `TwoIsland_EventScript_JoyfulGameCornerSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `TwoIsland_EventScript_FastCurrentSign`)
  - Text: *"No direct dialogue found in map text.inc"*
#### TwoIsland_Harbor
**NPCs:**
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `TwoIsland_Harbor_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### TwoIsland_JoyfulGameCorner
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `TwoIsland_JoyfulGameCorner_EventScript_Lostelle`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `TwoIsland_JoyfulGameCorner_EventScript_InfoMan`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `TwoIsland_JoyfulGameCorner_EventScript_ShowPokemonJumpRecords`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `TwoIsland_JoyfulGameCorner_EventScript_ShowDodrioBerryPickingRecords`)
  - Text: *"No direct dialogue found in map text.inc"*
#### TwoIsland_CapeBrink
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Three Island
#### ThreeIsland
**NPCs:**
- **OBJ_EVENT_GFX_MAN** (Script: `ThreeIsland_EventScript_AntiBiker1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `ThreeIsland_EventScript_AntiBiker2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_EventScript_ItemZinc`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `ThreeIsland_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `ThreeIsland_EventScript_LittleBoy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_DODUO** (Script: `ThreeIsland_EventScript_Doduo`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker6`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ThreeIsland_EventScript_IslandSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### ThreeIsland_Harbor
**NPCs:**
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `ThreeIsland_Harbor_EventScript_Sailor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### ThreeIsland_Port
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `ThreeIsland_Port_EventScript_Woman`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_Port_EventScript_Biker1`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_Port_EventScript_Biker2`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### ThreeIsland_BerryForest
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ThreeIsland_BerryForest_EventScript_Lostelle`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_BerryForest_EventScript_ItemMaxEther`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_BerryForest_EventScript_ItemFullHeal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_BerryForest_EventScript_ItemMaxElixir`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ThreeIsland_BerryForest_EventScript_BewareSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ThreeIsland_BerryForest_EventScript_WelcomeSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### ThreeIsland_BondBridge
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `ThreeIsland_BondBridge_EventScript_Nikki`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `ThreeIsland_BondBridge_EventScript_Violet`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_TUBER_F** (Script: `ThreeIsland_BondBridge_EventScript_Amira`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_TUBER_F** (Script: `ThreeIsland_BondBridge_EventScript_Alexis`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `ThreeIsland_BondBridge_EventScript_Tisha`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ThreeIsland_BondBridge_EventScript_Joy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ThreeIsland_BondBridge_EventScript_Meg`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `ThreeIsland_BondBridge_EventScript_BerryForestSign`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `ThreeIsland_BondBridge_EventScript_BondBridgeSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 22
#### Route22
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Sign** (Script: `Route22_EventScript_LeagueGateSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Route 23
#### Route23
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_CascadeBadgeGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_ThunderBadgeGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_RainbowBadgeGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_SoulBadgeGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_MarshBadgeGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_VolcanoBadgeGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_EarthBadgeGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Sign** (Script: `Route23_EventScript_VictoryRoadGateSign`)
  - Text: *"No direct dialogue found in map text.inc"*

---
### Victory Road
#### VictoryRoad_1F
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_1F_EventScript_Rolando`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_1F_EventScript_Naomi`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_1F_EventScript_ItemRareCandy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_1F_EventScript_ItemTM02`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
- **Hidden_item** (Script: `None`)
  - Text: *"No direct dialogue found in map text.inc"*
#### VictoryRoad_2F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `VictoryRoad_2F_EventScript_Dawson`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `VictoryRoad_2F_EventScript_Daisuke`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `VictoryRoad_2F_EventScript_Nelson`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_MAN** (Script: `VictoryRoad_2F_EventScript_Vincent`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `VictoryRoad_2F_EventScript_Gregory`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemGuardSpec`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemTM07`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemFullHeal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemTM37`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_2F_EventScript_DoubleEdgeTutor`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### VictoryRoad_3F
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_3F_EventScript_George`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_3F_EventScript_Alexa`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_3F_EventScript_Colby`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_3F_EventScript_Caroline`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_3F_EventScript_ItemMaxRevive`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_3F_EventScript_ItemTM50`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_3F_EventScript_Ray`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_3F_EventScript_Tyra`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
### In-Dye-Go Plateau
#### IndigoPlateau_Exterior
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_PROF_OAK** (Script: `0x0`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
#### IndigoPlateau_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_Clerk`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_NURSE** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_GYM_GUY** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_BlackBelt`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_PokemonJournal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_CooltrainerM`)
  - Dialogue: *"No direct dialogue found in map text.inc"*
- **0** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_PokemonJournal`)
  - Dialogue: *"No direct dialogue found in map text.inc"*

---
