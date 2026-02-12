> **Note:** Some features implemented were to test feasibility; nothing is final. Paticularly the town names....

# Pokémon FireRed and LeafGreen Ultra (Customized for Shukti)

This is a personalized version of **FireRed Ultra**, for Shukti's birthday.

## Core Story Changes
*   **The Rival:** **STACEY** (Shukti's old boss). She's "very stupid" and makes lots of jokes about redundancies and poor business strategy. Her dialogue reflects her bossy persona and the closure of her hair salon.
*   **The Professor:** **PROFESSOR TREE** (formerly Oak). Stacey is NOT related to him. She refers to him as "the mad old professor" and is frequently annoyed by his antics.
*   **Daisy:** A **Business Practices Investigator** investigating Stacey for her shady business ethics at the hair salon. She is currently stationed inside Stacey's house, combing through records and evidence.
*   **The Main Quest:** Team Rocket has stolen **Fig**, a special Shiny dog (Shiny Rockruff). NPCs in Mill Town and La-Vampire Town provide clues about her whereabouts.
*   **The Reward:** Upon defeating the Rocket boss in Silph Co., Shukti rescues Fig from the President and gets to keep her!
*   **Bowie (Pug):** A catchable wild "legendary" encounter in the Curl-ulean Gym. The Gym Leader, Bryony, has special dialogue if you catch or defeat him.
*   **The Final Boss:** The Champion is **OLLIE**. He features a powerhouse team of Gengar, Charizard, Gyarados, Raichu, Dragonite, and Snorlax.

## Completed Features
*   **PokeASDA:** Every **POKéMON MART** and **POKéMART** has been globally renamed to **PokeASDA**.
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
    *   Sal-on City (Erika): **DAVID** (Bodybuilder. Team: Arcanine, Magikarp, Dragonair, Mr. Mime, Haunter, Machamp). He thinks he's in a fitness gym. Two cats, **Billie** and **Puddin**, roam the gym and say "Meow!".
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
    *   Koga (Fo-Shear-ia City) -> ?
    *   Blaine (Cinna-Bella Island) -> ?
    *   Giovanni (Virid-LAN City) -> ?
*   [ ] **NPC Personalization:** Modify many more NPCs to represent real-life friends and family.
*   [ ] **Custom Dialogue:** Add significantly more custom dialogue, in-jokes, and personal references throughout the entire game.
*   [ ] **Visuals:**
    *   Custom Title Screen (Replace Charizard).
    *   Custom Player Sprite (To look more like Shukti).

## Zones (Progress Tracker)
### [x] Mill Town (Pallet Town)
- [ ] Quality Control
- [ ] Tested
---
### Route 1
#### Route1
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `Route1_EventScript_MartClerk`)
  - Dialogue (Route1_Text_WorkAtPokeMartTakeSample): *"Hi!  I work at a POKéMON MART.  It's part of a convenient chain  selling all sorts of items.  Please, visit us in VIRID-LAN CITY.  I know, I'll give you a sample.  Here you go!$"*
  - Dialogue (Text_ObtainedTheX): *"(Global/External Text: Text_ObtainedTheX)"*
  - Dialogue (waitfanfare): *"(Global/External Text: waitfanfare)"*
  - Dialogue (Route1_Text_PutPotionAway): *"{PLAYER} put the POTION away in  the BAG's ITEMS POCKET.$"*
- **OBJ_EVENT_GFX_BOY** (Script: `Route1_EventScript_Boy`)
  - Dialogue (Route1_Text_CanJumpFromLedges): *"See those ledges along the road?  It's a bit scary, but you can jump  from them.  You can get back to MILL TOWN  quicker that way.$"*
**Interactables / Signs:**
- **Sign** (Script: `Route1_EventScript_RouteSign`)
  - Text (Route1_Text_RouteSign): *"ROUTE 1  MILL TOWN - VIRID-LAN CITY$"*

---
### Virid-LAN City
#### ViridianCity
**NPCs:**
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `ViridianCity_EventScript_DreamEaterTutor`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `ViridianCity_EventScript_OldMan`)
  - Dialogue (ViridianCity_Text_GymClosedWonderWhoLeaderIs): *"This POKéMON GYM is always closed.  I wonder who the LEADER is?$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_VAR_0** (Script: `ViridianCity_EventScript_TutorialOldMan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `ViridianCity_EventScript_Woman`)
  - Dialogue (ViridianCity_Text_GoShoppingInPewterOccasionally): *"I go shopping in PERM-TER CITY  occasionally.  I have to take the winding trail in  VIRIDIAN FOREST when I go.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianCity_EventScript_Youngster`)
  - Dialogue (ViridianCity_Text_WantToKnowAboutCaterpillarMons): *"You want to know about the two  kinds of caterpillar POKéMON?$"*
- **OBJ_EVENT_GFX_BOY** (Script: `ViridianCity_EventScript_Boy`)
  - Dialogue (ViridianCity_Text_CanCarryMonsAnywhere): *"Those POKé BALLS at your waist!  You have POKéMON, don't you?  It's great that you can carry and  use POKéMON anytime, anywhere.$"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianCity_EventScript_ItemPotion`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_EventScript_TrainerTips1`)
  - Text (ViridianCity_Text_CatchMonsForEasierBattles): *"TRAINER TIPS  Catch POKéMON and expand your  collection.  The more you have, the easier it  is to battle.$"*
- **Sign** (Script: `ViridianCity_EventScript_GymSign`)
  - Text (ViridianCity_Text_GymSign): *"VIRID-LAN CITY POKéMON GYM$"*
- **Sign** (Script: `ViridianCity_EventScript_TrainerTips2`)
  - Text (ViridianCity_Text_MovesLimitedByPP): *"TRAINER TIPS  The battle moves of POKéMON are  limited by their POWER POINTS, PP.  To replenish PP, rest your tired  POKéMON at a POKéMON CENTER.$"*
- **Sign** (Script: `ViridianCity_EventScript_CitySign`)
  - Text (ViridianCity_Text_CitySign): *"VIRID-LAN CITY   The Eternally Green Paradise$"*
- **Sign** (Script: `ViridianCity_EventScript_GymDoor`)
  - Text (ViridianCity_Text_GymDoorsAreLocked): *"VIRIDIAN GYM's doors are locked…$"*
#### ViridianCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `ViridianCity_Gym_EventScript_Takashi`)
  - Dialogue (ViridianCity_Gym_Text_TakashiPostBattle): *"The POKéMON LEAGUE?  You? Don't get cocky!$"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `ViridianCity_Gym_EventScript_Yuji`)
  - Dialogue (ViridianCity_Gym_Text_YujiPostBattle): *"You'll need power to keep up with  our GYM LEADER.$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `ViridianCity_Gym_EventScript_Atsushi`)
  - Dialogue (ViridianCity_Gym_Text_AtsushiPostBattle): *"I'm still not worthy!$"*
- **OBJ_EVENT_GFX_MAN** (Script: `ViridianCity_Gym_EventScript_Jason`)
  - Dialogue (ViridianCity_Gym_Text_JasonPostBattle): *"Do you know the identity of our  GYM LEADER?$"*
- **OBJ_EVENT_GFX_MAN** (Script: `ViridianCity_Gym_EventScript_Cole`)
  - Dialogue (ViridianCity_Gym_Text_ColePostBattle): *"Wait!  I was just careless!$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `ViridianCity_Gym_EventScript_Kiyo`)
  - Dialogue (ViridianCity_Gym_Text_KiyoPostBattle): *"If my POKéMON were as good at  karate as I…$"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `ViridianCity_Gym_EventScript_Samuel`)
  - Dialogue (ViridianCity_Gym_Text_SamuelPostBattle): *"You can go on to the POKéMON  LEAGUE only by defeating our GYM\l LEADER!$"*
- **OBJ_EVENT_GFX_GIOVANNI** (Script: `ViridianCity_Gym_EventScript_Giovanni`)
  - Dialogue (ViridianCity_Gym_Text_GiovanniPostBattle): *"Having lost in this fashion,   I can't face my followers.\l I have betrayed their trust.  As of today, TEAM ROCKET is  finished forever!  As for myself, I shall dedicate  my life to training again.  Let us meet again someday!  Farewell!$"*
  - Dialogue (fadescreen): *"(Global/External Text: fadescreen)"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `ViridianCity_Gym_EventScript_Warren`)
  - Dialogue (ViridianCity_Gym_Text_WarrenPostBattle): *"The LEADER will scold me for  losing this way…$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `ViridianCity_Gym_EventScript_GymGuy`)
  - Dialogue (ViridianCity_Gym_Text_OllieIntro): *"OLLIE: Hey SHUKTI! The final badge.  You've come so far. I'm so proud.  I've got a final gift for you.  Five tokens of my love.$"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_Gym_EventScript_GymStatue`)
  - Text (ViridianCity_Gym_Text_GymStatue): *"VIRIDIAN POKéMON GYM  LEADER: ?  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `ViridianCity_Gym_EventScript_GymStatue`)
  - Text (ViridianCity_Gym_Text_GymStatue): *"VIRIDIAN POKéMON GYM  LEADER: ?  WINNING TRAINERS:  {RIVAL}$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### ViridianCity_House
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `ViridianCity_House_EventScript_BaldingMan`)
  - Dialogue (ViridianCity_House_Text_NicknamingIsFun): *"Coming up with nicknames is fun,  but it's not so easy to do.  Clever names are nice, but simple  names are easier to remember.$"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ViridianCity_House_EventScript_LittleGirl`)
  - Dialogue (ViridianCity_House_Text_MyDaddyLovesMonsToo): *"My daddy loves POKéMON, too.$"*
- **OBJ_EVENT_GFX_SPEAROW** (Script: `ViridianCity_House_EventScript_Speary`)
  - Dialogue (ViridianCity_House_Text_Speary): *"SPEARY: Tetweet!$"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_House_EventScript_NicknameSign`)
  - Text (ViridianCity_House_Text_SpearowNameSpeary): *"SPEAROW  Name: SPEARY$"*
#### ViridianCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `ViridianCity_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianCity_Mart_EventScript_Youngster`)
  - Dialogue (ViridianCity_Mart_Text_GotToBuySomePotions): *"I've got to buy some POTIONS.  You never know when your POKéMON  will need quick healing.$"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `ViridianCity_Mart_EventScript_Woman`)
  - Dialogue (ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes): *"This shop does good business in  ANTIDOTES, I've heard.$"*
#### ViridianCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC): *"Please feel free to use that PC in  the corner.  The receptionist told me so.  It's so kind of her!$"*
- **OBJ_EVENT_GFX_BOY** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Boy`)
  - Dialogue (ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown): *"There's a POKéMON CENTER in every  town ahead.  They charge no money, so don't  be shy about healing POKéMON.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons): *"POKéMON CENTERS heal your tired,  hurt, or fainted POKéMON.  They make all POKéMON completely  healthy.$"*
#### ViridianCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*
#### ViridianCity_School
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `ViridianCity_School_EventScript_Woman`)
  - Dialogue (ViridianCity_School_Text_ReadBlackboardCarefully): *"Okay!  Be sure to read what's on the  blackboard carefully!$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_LASS** (Script: `ViridianCity_School_EventScript_Lass`)
  - Dialogue (ViridianCity_School_Text_TryingToMemorizeNotes): *"Whew! I'm trying to memorize all my  notes.$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
**Interactables / Signs:**
- **Sign** (Script: `ViridianCity_School_EventScript_Notebook`)
  - Text (ViridianCity_School_Text_NotebookFirstPage): *"Let's check out the notebook.  First page…  POKé BALLS are used to catch  POKéMON.  Up to six POKéMON can be carried  in your party.  People who raise and battle  with POKéMON are called TRAINERS.$"*
  - Text (ViridianCity_School_Text_TurnThePage): *"Turn the page?$"*
  - Text (ViridianCity_School_Text_NotebookSecondPage): *"Second page…  A healthy POKéMON may be hard to  catch, so weaken it first.  Poison, burn, or cause another  status problem to weaken it.$"*
  - Text (ViridianCity_School_Text_TurnThePage): *"Turn the page?$"*
  - Text (ViridianCity_School_Text_NotebookThirdPage): *"Third page…  POKéMON TRAINERS seek others to  engage in POKéMON battles.  To TRAINERS, the taste of victory  is sweet, indeed.  Battles are constantly waged at  POKéMON GYMS everywhere.$"*
  - Text (ViridianCity_School_Text_TurnThePage): *"Turn the page?$"*
  - Text (ViridianCity_School_Text_NotebookFourthPage): *"Fourth page…  The ultimate goal for all POKéMON  TRAINERS is simple.  It is to defeat the top eight  POKéMON GYM LEADERS.  Do so to earn the right to face…  The ELITE FOUR of the POKéMON  LEAGUE!$"*
  - Text (ViridianCity_School_Text_HeyDontLookAtMyNotes): *"GIRL: Hey!  Don't look at my notes!$"*
- **Sign** (Script: `ViridianCity_School_EventScript_Blackboard`)
  - Text (ViridianCity_School_Text_BlackboardListsStatusProblems): *"The blackboard lists POKéMON  STATUS problems during battles.$"*
- **Sign** (Script: `ViridianCity_School_EventScript_Blackboard`)
  - Text (ViridianCity_School_Text_BlackboardListsStatusProblems): *"The blackboard lists POKéMON  STATUS problems during battles.$"*
- **Sign** (Script: `ViridianCity_School_EventScript_PokemonJournal`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `ViridianCity_School_EventScript_PokemonJournal`)
  - Text: *(No local text calls found in script)*

---
### Route 2
#### Route2
**NPCs:**
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route2_EventScript_ItemEther`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route2_EventScript_ItemParalyzeHeal`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route2_EventScript_DiglettsCaveSign`)
  - Text (Route2_Text_DiglettsCave): *"DIGLETT'S CAVE$"*
- **Sign** (Script: `Route2_EventScript_RouteSign`)
  - Text (Route2_Text_RouteSign): *"ROUTE 2  VIRID-LAN CITY - PERM-TER CITY$"*
#### Route2_EastBuilding
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route2_EastBuilding_EventScript_Aide`)
  - Dialogue (Route2_EastBuilding_Text_GiveHM05IfSeen10Mons): *"Hi! Remember me?  I'm one of PROF. TREE's AIDES.  If your POKéDEX has complete data  on ten species, I'm supposed to\l give you a reward.  PROF. TREE entrusted me with  HM05 for you.  So, {PLAYER}, let me ask you.  Have you gathered data on at least  ten kinds of POKéMON?$"*
  - Dialogue (Route2_EastBuilding_Text_GreatHereYouGo): *"Great! You have caught or owned  {STR_VAR_3} kinds of POKéMON!  Congratulations!  Here you go!$"*
  - Dialogue (Route2_EastBuilding_Text_ExplainHM05): *"HM05 contains the hidden move  FLASH.  FLASH lights up even the darkest  of caves and dungeons.$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route2_EastBuilding_EventScript_Rocker`)
  - Dialogue (Route2_EastBuilding_Text_CanGetThroughRockTunnel): *"Once a POKéMON learns FLASH, you  can get through ROCK TUNNEL.$"*
#### Route2_House
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route2_House_EventScript_Scientist`)
  - Dialogue (Route2_House_Text_FaintedMonsCanUseFieldMoves): *"A fainted POKéMON just has no  energy left to battle.  It can still use moves like CUT  outside of battle.$"*
- **OBJ_EVENT_GFX_GBA_KID** (Script: `Route2_House_EventScript_Reyley`)
  - Dialogue (Trade_Text_LookingForMonWannaTradeForMon): *"(Global/External Text: Trade_Text_LookingForMonWannaTradeForMon)"*
  - Dialogue (Trade_Text_HeyThanks): *"(Global/External Text: Trade_Text_HeyThanks)"*
#### Route2_ViridianForest_NorthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route2_ViridianForest_NorthEntrance_EventScript_Youngster`)
  - Dialogue (Route2_ViridianForest_NorthEntrance_Text_ManyMonsOnlyInForests): *"Many POKéMON live only in forests   and caves.  You need to be persistent and look  everywhere to get different kinds.$"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route2_ViridianForest_NorthEntrance_EventScript_OldMan`)
  - Dialogue (Route2_ViridianForest_NorthEntrance_Text_CanCutSkinnyTrees): *"Have you noticed the skinny trees  on the roadside?  They can be cut down by a special  POKéMON move, I hear.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `Route2_ViridianForest_NorthEntrance_EventScript_CooltrainerF`)
  - Dialogue (Route2_ViridianForest_NorthEntrance_Text_CanCancelEvolution): *"Do you know the evolution-cancel  technique?  When a POKéMON is evolving, you  can stop the process.  It's a technique for raising  POKéMON the way they are.$"*
#### Route2_ViridianForest_SouthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `Route2_ViridianForest_SouthEntrance_EventScript_Woman1`)
  - Dialogue (Route2_ViridianForest_SouthEntrance_Text_ForestIsMaze): *"Are you going to VIRIDIAN FOREST?  It's a natural maze in there.\l Be careful you don't get lost.$"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `Route2_ViridianForest_SouthEntrance_EventScript_Woman2`)
  - Dialogue (Route2_ViridianForest_SouthEntrance_Text_RattataHasWickedBite): *"RATTATA may be small, but don't  underestimate its wicked bite.  Have you caught one already?$"*

---
### Viridian Forest
#### ViridianForest
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `ViridianForest_EventScript_Youngster`)
  - Dialogue (ViridianForest_Text_FriendsItchingToBattle): *"I came here with some friends to  catch us some BUG POKéMON!  They're all itching to get into  some POKéMON battles!$"*
- **OBJ_EVENT_GFX_BOY** (Script: `ViridianForest_EventScript_Boy`)
  - Dialogue (ViridianForest_Text_RanOutOfPokeBalls): *"I was throwing POKé BALLS to  catch POKéMON, and I ran out.  That's why you can never have too  many POKé BALLS.$"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Rick`)
  - Dialogue (ViridianForest_Text_RickPostBattle): *"Ssh! You'll scare the bugs away.  Another time, okay?$"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Doug`)
  - Dialogue (ViridianForest_Text_DougPostBattle): *"That totally stinks! I'm going to  catch some stronger ones!$"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Sammy`)
  - Dialogue (ViridianForest_Text_SammyPostBattle): *"Sometimes, you can find stuff on  the ground.  I'm looking for the stuff I  dropped. Can you help me?$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemPokeBall`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemAntidote`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemPotion`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Anthony`)
  - Dialogue (ViridianForest_Text_AnthonyPostBattle): *"I lost some of my allowance…$"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `ViridianForest_EventScript_Charlie`)
  - Dialogue (ViridianForest_Text_CharliePostBattle): *"BUG POKéMON evolve quickly.  They're a lot of fun!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ViridianForest_EventScript_ItemPotion2`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips1`)
  - Text (ViridianForest_Text_AvoidGrassyAreasWhenWeak): *"TRAINER TIPS  If your POKéMON are weak and you  want to avoid battles, stay away\l from grassy areas!$"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips3`)
  - Text (ViridianForest_Text_ContactOakViaPCToRatePokedex): *"TRAINER TIPS  Contact PROF. TREE via a PC to  get your POKéDEX evaluated!$"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips4`)
  - Text (ViridianForest_Text_CantCatchOwnedMons): *"TRAINER TIPS  You can't catch a POKéMON that  belongs to someone else.  Throw POKé BALLS only at wild  POKéMON to catch them!$"*
- **Sign** (Script: `ViridianForest_EventScript_ExitSign`)
  - Text (ViridianForest_Text_LeavingViridianForest): *"LEAVING VIRIDIAN FOREST  PERM-TER CITY AHEAD$"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips2`)
  - Text (ViridianForest_Text_UseAntidoteForPoison): *"For poison, use ANTIDOTE!  Get it at POKéMON MARTS!$"*
- **Sign** (Script: `ViridianForest_EventScript_TrainerTips5`)
  - Text (ViridianForest_Text_WeakenMonsBeforeCapture): *"TRAINER TIPS  Weaken POKéMON before attempting  capture!  When healthy, they may escape!$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Perm-ter City
#### PewterCity
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `PewterCity_EventScript_Lass`)
  - Dialogue (PewterCity_Text_ClefairyCameFromMoon): *"CLEFAIRY came from the moon.  That's what the rumor is.  They appeared after MOON STONES  fell on MT. MOON.$"*
- **OBJ_EVENT_GFX_MAN** (Script: `PewterCity_EventScript_MuseumGuide`)
  - Dialogue (PewterCity_Text_DidYouCheckOutMuseum): *"Did you check out the MUSEUM?$"*
  - Dialogue (PewterCity_Text_ReallyYouHaveToGo): *"Really?  You absolutely have to go!$"*
  - Dialogue (delay): *"(Global/External Text: delay)"*
  - Dialogue (PewterCity_Text_ThisIsTheMuseum): *"This is it, the MUSEUM.  You have to pay to get in, but it's  worth it. See you around!$"*
  - Dialogue (delay): *"(Global/External Text: delay)"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `PewterCity_EventScript_FatMan`)
  - Dialogue (PewterCity_Text_BrockOnlySeriousTrainerHere): *"There aren't many serious POKéMON  TRAINERS here.  They're all like BUG CATCHERS,  you know, just hobbyists.  But PEWTER GYM's BROCK isn't like  that, not one bit.$"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `PewterCity_EventScript_BugCatcher`)
  - Dialogue (PewterCity_Text_DoYouKnowWhatImDoing): *"Psssst!  Do you know what I'm doing?$"*
  - Dialogue (PewterCity_Text_SprayingRepelToKeepWildMonsOut): *"I'm spraying REPEL to keep wild  POKéMON out of my garden!$"*
- **OBJ_EVENT_GFX_BOY** (Script: `PewterCity_EventScript_GymGuide`)
  - Dialogue (PewterCity_Text_BrocksLookingForChallengersFollowMe): *"You're a TRAINER, right?  BROCK's looking for new  challengers. Follow me!$"*
  - Dialogue (playbgm): *"(Global/External Text: playbgm)"*
  - Dialogue (PewterCity_Text_GoTakeOnBrock): *"If you have the right stuff,  go take on BROCK!$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_EventScript_RunningShoesAide`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_EventScript_MuseumSign`)
  - Text (PewterCity_Text_MuseumOfScience): *"PEWTER MUSEUM OF SCIENCE$"*
- **Sign** (Script: `PewterCity_EventScript_PoliceNotice`)
  - Text (PewterCity_Text_CallPoliceIfInfoOnThieves): *"NOTICE!  Thieves have been stealing POKéMON  fossils from MT. MOON.  Please call the PEWTER POLICE if  you have any information.$"*
- **Sign** (Script: `PewterCity_EventScript_GymSign`)
  - Text (PewterCity_Text_GymSign): *"PERM-TER CITY POKéMON GYM  LEADER: BROCK\l The Rock-Solid POKéMON TRAINER!$"*
- **Sign** (Script: `PewterCity_EventScript_TrainerTips`)
  - Text (PewterCity_Text_TrainerTipsEarningEXP): *"TRAINER TIPS  All POKéMON that appear in battle,  however briefly, earn EXP Points.$"*
- **Sign** (Script: `PewterCity_EventScript_CitySign`)
  - Text (PewterCity_Text_CitySign): *"PERM-TER CITY  A Stone Gray City$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### PewterCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_BROCK** (Script: `PewterCity_Gym_EventScript_Brock`)
  - Dialogue (PewterCity_Gym_Text_BrockPostBattle): *"You have a bright future ahead of  you as a TRAINER.  Keep believing in yourself and  your POKéMON!  Why don't you head to CURL-ULEAN CITY  next? BRYONY will be happy to\l see you!$"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `PewterCity_Gym_EventScript_Liam`)
  - Dialogue (PewterCity_Gym_Text_LiamPostBattle): *"You're good, but FARIS is on a  whole other level!$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `PewterCity_Gym_EventScript_GymGuy`)
  - Dialogue (PewterCity_Gym_Text_OllieIntro): *"OLLIE: Hey baby! I'm so glad you  made it here safely.  I've got a little something for you.  It reminded me of us.$"*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_Gym_EventScript_GymStatue`)
  - Text (PewterCity_Gym_Text_GymStatue): *"PERM-TER CITY POKéMON GYM  LEADER: FARIS  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `PewterCity_Gym_EventScript_GymStatue`)
  - Text (PewterCity_Gym_Text_GymStatue): *"PERM-TER CITY POKéMON GYM  LEADER: FARIS  WINNING TRAINERS:  {RIVAL}$"*
#### PewterCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `PewterCity_House1_EventScript_BaldingMan`)
  - Dialogue (PewterCity_House1_Text_TradeMonsAreFinicky): *"Our POKéMON's an outsider, so it's  finicky and hard to handle.  An outsider is a POKéMON that you  get in a trade.  It grows fast, but it may ignore an  unskilled TRAINER in battle.  If only we had some BADGES…$"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `PewterCity_House1_EventScript_LittleBoy`)
  - Dialogue (PewterCity_House1_Text_NidoranSit): *"NIDORAN, sit!$"*
- **OBJ_EVENT_GFX_NIDORAN_M** (Script: `PewterCity_House1_EventScript_Nidoran`)
  - Dialogue: *(No local text calls found in script)*
#### PewterCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `PewterCity_House2_EventScript_OldMan`)
  - Dialogue (PewterCity_House2_Text_MonsLearnTechniquesAsTheyGrow): *"POKéMON learn new techniques as  they grow.  But some moves must be taught to  them by people.$"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `PewterCity_House2_EventScript_LittleBoy`)
  - Dialogue (PewterCity_House2_Text_MonsEasierCatchIfStatused): *"A POKéMON becomes easier to   catch if it has a status problem.  Sleep, poison, burn, or paralysis…  Those are all effective.  But catching POKéMON is never  a sure thing!$"*
#### PewterCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `PewterCity_Mart_EventScript_Youngster`)
  - Dialogue (PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy): *"A shady old guy sucked me into  buying this weird fish POKéMON!  It's totally weak and it cost ¥500!$"*
- **OBJ_EVENT_GFX_BOY** (Script: `PewterCity_Mart_EventScript_Boy`)
  - Dialogue (PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently): *"Good things can happen if you raise  POKéMON diligently.  Even the weak ones can surprise  you if you don't give up on them.$"*
- **OBJ_EVENT_GFX_CLERK** (Script: `PewterCity_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
#### PewterCity_Museum_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `PewterCity_Museum_1F_EventScript_Scientist1`)
  - Dialogue (PewterCity_Museum_1F_Text_PleaseEnjoyYourself): *"Please enjoy yourself.$"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `PewterCity_Museum_1F_EventScript_OldMan`)
  - Dialogue (PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife): *"I should be grateful for my long  life.  Never did I think I would get to  see the bones of a dragon!$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_1F_EventScript_OldAmberScientist`)
  - Dialogue (PewterCity_Museum_1F_Text_WantYouToGetAmberExamined): *"Ssh! Listen, I need to share a  secret with someone.  I think that this chunk of AMBER  contains POKéMON DNA!  It would be a shattering scientific  breakthrough if POKéMON could be\l resurrected from it.  But, my colleagues just ignore  what I have to say.  So, I have a favor to ask!  I want you to get this examined at  a POKéMON LAB somewhere.$"*
- **OBJ_EVENT_GFX_OLD_AMBER** (Script: `PewterCity_Museum_1F_EventScript_OldAmber`)
  - Dialogue (PewterCity_Museum_1F_Text_BeautifulPieceOfAmber): *"There is a beautiful piece of  AMBER in a clear gold color.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_1F_EventScript_Scientist2`)
  - Dialogue (PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit): *"We have two fossils of rare,  prehistoric POKéMON on exhibit.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_1F_EventScript_SeismicTossTutor`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_AerodactylFossil`)
  - Text (PewterCity_Museum_1F_Text_AerodactylFossil): *"AERODACTYL Fossil  A primitive and rare POKéMON.$"*
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_KabutopsFossil`)
  - Text (PewterCity_Museum_1F_Text_KabutopsFossil): *"KABUTOPS Fossil  A primitive and rare POKéMON.$"*
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_PokemonJournalBrock`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `PewterCity_Museum_1F_EventScript_PokemonJournalBrock`)
  - Text: *(No local text calls found in script)*
#### PewterCity_Museum_2F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PewterCity_Museum_2F_EventScript_Scientist`)
  - Dialogue (PewterCity_Museum_1F_Text_RunningSpaceExhibitThisMonth): *"This month, we're running a space  exhibit.$"*
- **OBJ_EVENT_GFX_MAN** (Script: `PewterCity_Museum_2F_EventScript_Man`)
  - Dialogue (PewterCity_Museum_1F_Text_WhatsSpecialAboutMoonStone): *"MOON STONE, huh?  What's so special about it?  Looks like an ordinary rock to me.$"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `PewterCity_Museum_2F_EventScript_OldMan`)
  - Dialogue (PewterCity_Museum_1F_Text_BoughtColorTVForMoonLanding): *"July 20, 1969!  Humankind first set foot on the  moon that day.  I bought a color TV just so I  could watch that news.$"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `PewterCity_Museum_2F_EventScript_LittleGirl`)
  - Dialogue (PewterCity_Museum_1F_Text_AskedDaddyToCatchPikachu): *"I want a PIKACHU!  It's so cute!  I asked my daddy to catch me one!$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `PewterCity_Museum_2F_EventScript_BaldingMan`)
  - Dialogue (PewterCity_Museum_1F_Text_PikachuSoonIPromise): *"Yeah, a PIKACHU soon, I promise!$"*
**Interactables / Signs:**
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_MoonStone`)
  - Text (PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon): *"A meteorite that fell on MT. MOON.  It is thought to be a MOON STONE.$"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text (PewterCity_Museum_1F_Text_SpaceShuttle): *"Space Shuttle$"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text (PewterCity_Museum_1F_Text_SpaceShuttle): *"Space Shuttle$"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text (PewterCity_Museum_1F_Text_SpaceShuttle): *"Space Shuttle$"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text (PewterCity_Museum_1F_Text_SpaceShuttle): *"Space Shuttle$"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text (PewterCity_Museum_1F_Text_SpaceShuttle): *"Space Shuttle$"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_SpaceShuttle`)
  - Text (PewterCity_Museum_1F_Text_SpaceShuttle): *"Space Shuttle$"*
- **Sign** (Script: `PewterCity_Museum_2F_EventScript_MoonStone`)
  - Text (PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon): *"A meteorite that fell on MT. MOON.  It is thought to be a MOON STONE.$"*
#### PewterCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_JIGGLYPUFF** (Script: `PewterCity_PokemonCenter_1F_EventScript_Jigglypuff`)
  - Dialogue (PewterCity_PokemonCenter_1F_Text_Jigglypuff): *"JIGGLYPUFF: Puu pupuu!$"*
  - Dialogue (delay): *"(Global/External Text: delay)"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `PewterCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone): *"What!?  TEAM ROCKET is at MT. MOON?  Huh?  I'm on the phone!  Scram!$"*
- **OBJ_EVENT_GFX_NURSE** (Script: `PewterCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `PewterCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy): *"Yawn!  When JIGGLYPUFF sings, POKéMON get  drowsy…  …Me, too…  Snore…$"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `MysteryEventClub_EventScript_Woman`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GBA_KID** (Script: `PewterCity_PokemonCenter_1F_EventScript_GBAKid1`)
  - Dialogue (PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu): *"I really want a PIKACHU, so I'm  trading my CLEFAIRY for one.$"*
- **OBJ_EVENT_GFX_GBA_KID** (Script: `PewterCity_PokemonCenter_1F_EventScript_GBAKid2`)
  - Dialogue (PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid): *"I'm trading POKéMON with that kid  there.  I had two PIKACHU, so I figured  I might as well trade one.$"*
#### PewterCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*

---
### Route 3
#### Route3
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route3_EventScript_Youngster`)
  - Dialogue (Route3_Text_TunnelFromCeruleanTiring): *"Whew… I better take a rest…  Groan…  That tunnel from CERULEAN takes a  lot out of you!$"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route3_EventScript_Robin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route3_EventScript_James`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route3_EventScript_Sally`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route3_EventScript_Greg`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route3_EventScript_Calvin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route3_EventScript_Janice`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route3_EventScript_Colton`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route3_EventScript_Ben`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route3_EventScript_RouteSign`)
  - Text (Route3_Text_RouteSign): *"ROUTE 3  MT. MOON AHEAD$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Mt. Moon
#### MtMoon_1F
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `MtMoon_1F_EventScript_Iris`)
  - Dialogue (MtMoon_1F_Text_IrisPostBattle): *"I came because I heard there are  some very rare fossils here.$"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `MtMoon_1F_EventScript_Robby`)
  - Dialogue (MtMoon_1F_Text_RobbyPostBattle): *"ZUBAT is tough!  But if you can catch one, you'll\l be able to count on it.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `MtMoon_1F_EventScript_Jovan`)
  - Dialogue (MtMoon_1F_Text_JovanPostBattle): *"I have to find stronger POKéMON.  Where might they be?$"*
- **OBJ_EVENT_GFX_LASS** (Script: `MtMoon_1F_EventScript_Miriam`)
  - Dialogue (MtMoon_1F_Text_MiriamPostBattle): *"How do you get out of here?  It's so big, I may get lost.$"*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `MtMoon_1F_EventScript_Kent`)
  - Dialogue (MtMoon_1F_Text_KentPostBattle): *"I saw them!  I'm sure they're from TEAM ROCKET!$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `MtMoon_1F_EventScript_Josh`)
  - Dialogue (MtMoon_1F_Text_JoshPostBattle): *"I came all the way down here to  show off to girls.$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `MtMoon_1F_EventScript_Marcos`)
  - Dialogue (MtMoon_1F_Text_MarcosPostBattle): *"Kids like you shouldn't be  wandering around here in the dark.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemParalyzeHeal`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemTM09`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemPotion`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemRareCandy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemEscapeRope`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_1F_EventScript_ItemMoonStone`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `MtMoon_1F_EventScript_BaldingMan`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `MtMoon_1F_EventScript_ZubatSign`)
  - Text (MtMoon_1F_Text_ZubatIsABloodsucker): *"Beware!  ZUBAT is a bloodsucker!$"*
#### MtMoon_B1F
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### MtMoon_B2F
**NPCs:**
- **OBJ_EVENT_GFX_FOSSIL** (Script: `MtMoon_B2F_EventScript_DomeFossil`)
  - Dialogue (MtMoon_B2F_Text_YouWantDomeFossil): *"Do you want the DOME FOSSIL?$"*
  - Dialogue (special): *"(Global/External Text: special)"*
  - Dialogue (MtMoon_B2F_Text_ThenThisFossilIsMine): *"All right.  Then this fossil is mine!$"*
  - Dialogue (waitfanfare): *"(Global/External Text: waitfanfare)"*
- **OBJ_EVENT_GFX_FOSSIL** (Script: `MtMoon_B2F_EventScript_HelixFossil`)
  - Dialogue (MtMoon_B2F_Text_YouWantHelixFossil): *"Do you want the HELIX FOSSIL?$"*
  - Dialogue (special): *"(Global/External Text: special)"*
  - Dialogue (MtMoon_B2F_Text_ThenThisFossilIsMine): *"All right.  Then this fossil is mine!$"*
  - Dialogue (waitfanfare): *"(Global/External Text: waitfanfare)"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `MtMoon_B2F_EventScript_Miguel`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt4`)
  - Dialogue (MtMoon_B2F_Text_Grunt4PostBattle): *"POKéMON lived here long before  people came.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt1`)
  - Dialogue (MtMoon_B2F_Text_Grunt1PostBattle): *"You made me mad!  TEAM ROCKET will blacklist you!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt3`)
  - Dialogue (MtMoon_B2F_Text_Grunt3PostBattle): *"If you find a fossil, give it to me  and scram!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `MtMoon_B2F_EventScript_Grunt2`)
  - Dialogue (MtMoon_B2F_Text_Grunt2PostBattle): *"Darn it all!  My associates won't stand for this!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemStarPiece`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemTM46`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemRevive`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `MtMoon_B2F_EventScript_ItemAntidote`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 4
#### Route4
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `Route4_EventScript_Woman`)
  - Dialogue (Route4_Text_TrippedOverGeodude): *"Ouch! I tripped over a rocky  POKéMON, GEODUDE!$"*
- **OBJ_EVENT_GFX_LASS** (Script: `Route4_EventScript_Crissy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route4_EventScript_ItemTM05`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BOY** (Script: `Route4_EventScript_Boy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `Route4_EventScript_MegaPunchTutor`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `Route4_EventScript_MegaKickTutor`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `None`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route4_EventScript_MtMoonSign`)
  - Text (Route4_Text_MtMoonEntrance): *"MT. MOON  Tunnel Entrance$"*
- **Sign** (Script: `Route4_EventScript_RouteSign`)
  - Text (Route4_Text_RouteSign): *"ROUTE 4  MT. MOON - CURL-ULEAN CITY$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route4_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `Route4_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `Route4_PokemonCenter_1F_EventScript_MagikarpSalesman`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `Route4_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean): *"TEAM ROCKET attacks CERULEAN  citizens…  Not a day goes by without TEAM  ROCKET being in the news.$"*
- **OBJ_EVENT_GFX_BOY** (Script: `Route4_PokemonCenter_1F_EventScript_Boy`)
  - Dialogue (Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou): *"Okay, set six POKé BALLS in my  belt…  Yeah, that'll do it. At most, you  can have six POKéMON with you.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route4_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC): *"Sometimes, you'll have too many  POKéMON with you to add any more.  In that case, you should just  store some using any PC.$"*
- **OBJ_EVENT_GFX_CLIPBOARD** (Script: `Route4_PokemonCenter_1F_EventScript_Newspaper`)
  - Dialogue (Route4_PokemonCenter_1F_Text_ItsANewspaper): *"It's a newspaper.$"*
#### Route4_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*

---
### Curl-ulean City
#### CeruleanCity
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `CeruleanCity_EventScript_Policeman`)
  - Dialogue (CeruleanCity_Text_PeopleHereWereRobbed): *"The people here were robbed.  It's obvious that TEAM ROCKET is  behind this most heinous crime!  Even our POLICE FORCE has  trouble with the ROCKETS!$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeruleanCity_EventScript_Grunt`)
  - Dialogue (CeruleanCity_Text_GruntIntro): *"Hey! Stay out!  It's not your yard!  …Huh?  Me?  I'm an innocent bystander!  Don't you believe me?{PLAY_BGM}{MUS_ENCOUNTER_ROCKET}$"*
  - Dialogue (playbgm): *"(Global/External Text: playbgm)"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `CeruleanCity_EventScript_LittleBoy`)
  - Dialogue (CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree): *"If that SLOWBRO wasn't there, you  could CUT down the small tree.  That way, you could get to the  other side.  I think there's a way around it,  though.$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `CeruleanCity_EventScript_BaldingMan`)
  - Dialogue (CeruleanCity_Text_PokemonEncyclopediaAmusing): *"You're making an encyclopedia on  POKéMON? That sounds amusing.$"*
- **OBJ_EVENT_GFX_SLOWBRO** (Script: `CeruleanCity_EventScript_Slowbro`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `CeruleanCity_EventScript_Lass`)
  - Dialogue (delay): *"(Global/External Text: delay)"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_EventScript_Youngster`)
  - Dialogue (CeruleanCity_Text_TrainerLifeIsToughIsntIt): *"You're a TRAINER, too?  Collecting, battling…  It's a tough life, isn't it?$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `CeruleanCity_EventScript_Woman`)
  - Dialogue (CeruleanCity_Text_WantBrightRedBicycle): *"I want a bright red bicycle.  I'll keep it at home, so it won't  get dirty.$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `CeruleanCity_EventScript_CeruleanCaveGuard`)
  - Dialogue (CeruleanCity_Text_ThisIsCeruleanCave): *"This is CERULEAN CAVE.  Horribly strong POKéMON live inside  there.  It takes a very special TRAINER to  be allowed inside there.  You'd have to be strong enough to  become the POKéMON LEAGUE\l CHAMPION for starters.  And, you would have to have  made a great achievement.$"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_EventScript_CitySign`)
  - Text (CeruleanCity_Text_CitySign): *"CURL-ULEAN CITY  A Mysterious, Blue Aura Surrounds\l It$"*
- **Sign** (Script: `CeruleanCity_EventScript_GymSign`)
  - Text (CeruleanCity_Text_GymSign): *"CURL-ULEAN CITY POKéMON GYM  LEADER: MISTY\l The Tomboyish Mermaid!$"*
- **Sign** (Script: `CeruleanCity_EventScript_BikeShopSign`)
  - Text (CeruleanCity_Text_BikeShopSign): *"Grass and caves handled easily!  BIKE SHOP$"*
- **Sign** (Script: `CeruleanCity_EventScript_TrainerTips`)
  - Text (CeruleanCity_Text_TrainerTipsHeldItems): *"TRAINER TIPS  A POKéMON can be made to hold  an item.  Some items can even be used by  the holding POKéMON in battle.$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text: *(No local text calls found in script)*
#### CeruleanCity_BikeShop
**NPCs:**
- **OBJ_EVENT_GFX_MAN** (Script: `CeruleanCity_BikeShop_EventScript_Clerk`)
  - Dialogue (CeruleanCity_BikeShop_Text_WelcomeToBikeShop): *"Hi!  Welcome to our BIKE SHOP.  Have we got just the BIKE for  you!$"*
  - Dialogue (multichoice): *"(Global/External Text: multichoice)"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_BikeShop_EventScript_Youngster`)
  - Dialogue (CeruleanCity_BikeShop_Text_BikesCoolButExpensive): *"These bikes are cool, but they're  way expensive!$"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CeruleanCity_BikeShop_EventScript_Woman`)
  - Dialogue (CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe): *"A plain city bike is good enough  for me.  After all, you can't put a shopping  basket on a mountain bike.$"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
- **Sign** (Script: `CeruleanCity_BikeShop_EventScript_Bicycle`)
  - Text (CeruleanCity_BikeShop_Text_ShinyNewBicycle): *"A shiny new BICYCLE!$"*
#### CeruleanCity_Gym
**NPCs:**
- **229 + (1 << 14)** (Script: `CeruleanCity_Gym_EventScript_Bowie`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MISTY** (Script: `CeruleanCity_Gym_EventScript_Misty`)
  - Dialogue (CeruleanCity_Gym_Text_ExplainTM03): *"TM03 teaches WATER PULSE.  It's a great move for all sorts  of POKéMON!$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `CeruleanCity_Gym_EventScript_GymGuy`)
  - Dialogue (CeruleanCity_Gym_Text_OllieIntro): *"OLLIE: You look amazing today,  SHUKTI. The journey suits you.  I've got a little something sweet  for you. Just like you.$"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_Gym_EventScript_GymStatue`)
  - Text (CeruleanCity_Gym_Text_GymStatue): *"CURL-ULEAN CITY POKéMON GYM  LEADER: BRYONY  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `CeruleanCity_Gym_EventScript_GymStatue`)
  - Text (CeruleanCity_Gym_Text_GymStatue): *"CURL-ULEAN CITY POKéMON GYM  LEADER: BRYONY  WINNING TRAINERS:  {RIVAL}$"*
#### CeruleanCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CeruleanCity_House1_EventScript_BadgeGuy`)
  - Dialogue (CeruleanCity_House1_Text_BadgesHaveAmazingSecrets): *"Only skilled TRAINERS can collect  POKéMON BADGES.  I see you have at least one.  Those BADGES have amazing secrets,  did you know?$"*
  - Dialogue (CeruleanCity_House1_Text_DescribeWhichBadge): *"Now then…  Which of the eight BADGES should  I describe?$"*
  - Dialogue (setvar): *"(Global/External Text: setvar)"*
#### CeruleanCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_HIKER** (Script: `CeruleanCity_House2_EventScript_Hiker`)
  - Dialogue (CeruleanCity_House2_Text_RocketsStoleTMForDig): *"Those miserable ROCKETS!  Look what they've done to my  house!  They stole a TM for teaching  POKéMON how to DIG holes!  I was going to use it on a  MANKEY or a SANDSHREW…  That cost me a bundle, it did!$"*
- **OBJ_EVENT_GFX_LASS** (Script: `CeruleanCity_House2_EventScript_Lass`)
  - Dialogue (CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood): *"TEAM ROCKET must be trying to DIG  their way into no good!$"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_House2_EventScript_WallHole`)
  - Text (CeruleanCity_House2_Text_TeamRocketLeftWayOut): *"TEAM ROCKET left a way out!$"*
#### CeruleanCity_House3
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeruleanCity_House3_EventScript_Dontae`)
  - Dialogue (Trade_Text_DoYouHaveMonWouldYouTradeForMon): *"(Global/External Text: Trade_Text_DoYouHaveMonWouldYouTradeForMon)"*
  - Dialogue (Trade_Text_Thanks): *"(Global/External Text: Trade_Text_Thanks)"*
- **OBJ_EVENT_GFX_OLD_WOMAN** (Script: `CeruleanCity_House3_EventScript_OldWoman`)
  - Dialogue (CeruleanCity_House3_Text_PleaseTradeWithMyHusband): *"My husband likes trading POKéMON.  You're collecting POKéMON for your  POKéDEX, aren't you?  Would you please trade with him?$"*
#### CeruleanCity_House4
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeruleanCity_House4_EventScript_WonderNewsBerryMan`)
  - Dialogue: *(No local text calls found in script)*
#### CeruleanCity_House5
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `CeruleanCity_House5_EventScript_BerryPowderMan`)
  - Dialogue (CeruleanCity_House1_Text_AnyInterestInBerries): *"I concoct a variety of medicine  from BERRY POWDER.  Using good BERRY POWDER, I can  make any kind of medicine.  Now tell me, have you any interest  in BERRIES?$"*
  - Dialogue (CeruleanCity_House1_Text_HaveJustTheThing): *"Ah, good! For you, then, I have  just the thing.$"*
  - Dialogue (CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner): *"There's something new on the second  floor of POKéMON CENTERS, at the\l DIRECT CORNER.  They installed a Wireless Adapter  machine for crushing BERRIES.  This is where you come in.  I have a favor to ask, one that  I can entrust only to you.  Could you make BERRY POWDER for  me using that machine?  Don't forget, the machine is at the  DIRECT CORNER of POKéMON CENTERS.  I'll concoct medicine for you if  you bring me some BERRY POWDER.  Don't forget, crush BERRIES into  BERRY POWDER and bring it to me.$"*
**Interactables / Signs:**
- **Sign** (Script: `CeruleanCity_House5_EventScript_BerryCrushRankings`)
  - Text: *(No local text calls found in script)*
#### CeruleanCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `CeruleanCity_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `CeruleanCity_Mart_EventScript_Woman`)
  - Dialogue (CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy): *"Do you know about RARE CANDY?  They don't sell it in shops.  I think it makes POKéMON grow  very quickly all of a sudden.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_Mart_EventScript_Youngster`)
  - Dialogue (CeruleanCity_Mart_Text_RepelWorksOnWeakMons): *"REPEL not only keeps bugs away,  it also works on weak POKéMON.  Put your strongest POKéMON at the  left of the POKéMON LIST.  If your first POKéMON is strong,  REPEL's effect is boosted.$"*
#### CeruleanCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OAK** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_ProfTree`)
  - Dialogue (CeruleanCity_PokemonCenter_1F_Text_ProfTree_Intro): *"TREE: Hello, {PLAYER}!  I was just doing some research on\l the rare POKéMON in this area.  I happened to have another one of  my special starters with me.  I'd like you to have it!$"*
  - Dialogue (CeruleanCity_PokemonCenter_1F_Text_ProfTree_Outro): *"TREE: That POKéMON should help  you on your journey.  Keep up the good work!$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Rocker`)
  - Dialogue (CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons): *"That BILL!  I heard that he'll do whatever it  takes to get rare POKéMON.  He's not above doing all sorts  of things, I've heard.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons): *"BILL has lots of POKéMON!  He collects rare ones, too!$"*
- **OBJ_EVENT_GFX_LASS** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_Lass`)
  - Dialogue (CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs): *"Why don't you go upstairs and try  trading POKéMON with your friends?  You could get a lot more variety  by trading.  The POKéMON you get in trades grow  quickly, too.$"*
- **0** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_PokemonJournalMisty`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `CeruleanCity_PokemonCenter_1F_EventScript_PokemonJournalMisty`)
  - Dialogue: *(No local text calls found in script)*
#### CeruleanCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*

---
### Route 24
#### Route24
**NPCs:**
- **OBJ_EVENT_GFX_MAN** (Script: `Route24_EventScript_Rocket`)
  - Dialogue (Route24_Text_JustEarnedFabulousPrize): *"Congratulations! You beat our  five contest TRAINERS!  You just earned a fabulous prize!$"*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route24_EventScript_Ethan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route24_EventScript_Reli`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route24_EventScript_Timmy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route24_EventScript_Ali`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route24_EventScript_Cale`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route24_EventScript_Shane`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route24_EventScript_ItemTM45`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 25
#### Route25
**NPCs:**
- **OBJ_EVENT_GFX_HIKER** (Script: `Route25_EventScript_Franklin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route25_EventScript_Joey`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route25_EventScript_Wayne`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route25_EventScript_Dan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route25_EventScript_Kelsey`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route25_EventScript_Nob`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route25_EventScript_Flint`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route25_EventScript_Chad`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route25_EventScript_Haley`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route25_EventScript_ItemTM43`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route25_EventScript_Beauty`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MAN** (Script: `Route25_EventScript_Man`)
  - Dialogue (Route25_Text_AreYouHereAlone): *"Hello, are you here alone?  If you're out at CERULEAN's cape…  Well, it should be as a couple.$"*
**Interactables / Signs:**
- **Sign** (Script: `Route25_EventScript_SeaCottageSign`)
  - Text (Route25_Text_SeaCottageSign): *"SEA COTTAGE  BILL lives here!$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route25_SeaCottage
**NPCs:**
- **OBJ_EVENT_GFX_BILL** (Script: `Route25_SeaCottage_EventScript_Bill`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CLEFAIRY** (Script: `Route25_SeaCottage_EventScript_Bill`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route25_SeaCottage_EventScript_Computer`)
  - Text (Route25_SeaCottage_Text_TeleporterIsDisplayed): *"TELEPORTER is displayed on the PC  monitor.$"*

---
### Route 5
#### Route5
**Interactables / Signs:**
- **Sign** (Script: `Route5_EventScript_UndergroundPathSign`)
  - Text (Route5_Text_UndergroundPathSign): *"UNDERGROUND PATH  CURL-ULEAN CITY - VER-MULLET-ON$"*
#### Route5_PokemonDayCare
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `Route5_PokemonDayCare_EventScript_DaycareMan`)
  - Dialogue: *(No local text calls found in script)*
#### Route5_SouthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route5_SouthEntrance_EventScript_Guard`)
  - Dialogue (Route5_SouthEntrance_Text_HiHowsItGoing): *"Hi, how's it going?$"*

---
### Route 6
#### Route6
**NPCs:**
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route6_EventScript_Keigo`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route6_EventScript_Ricky`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route6_EventScript_Nancy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route6_EventScript_Elijah`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route6_EventScript_Isabelle`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route6_EventScript_Jeff`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route6_EventScript_UndergroundPathSign`)
  - Text (Route6_Text_UndergroundPathSign): *"UNDERGROUND PATH  CURL-ULEAN CITY - VER-MULLET-ON$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route6_NorthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route6_NorthEntrance_EventScript_Guard`)
  - Dialogue (Route6_NorthEntrance_Text_HiHowsItGoing): *"Hi, how's it going?$"*
#### Route6_UnusedHouse

---
### Ver-Mullet-on
#### VermilionCity
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `VermilionCity_EventScript_Woman`)
  - Dialogue (VermilionCity_Text_GrimerMultipliesInSludge): *"We're careful about pollution here.  We've heard GRIMER multiplies in  toxic sludge.$"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `VermilionCity_EventScript_OldMan1`)
  - Dialogue (VermilionCity_Text_DidYouSeeSSAnneInHarbor): *"Did you see the S.S. ANNE moored  in the harbor?$"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `VermilionCity_EventScript_OldMan2`)
  - Dialogue (VermilionCity_Text_BuildingOnThisLand): *"I'm putting up a building on this  plot of land. I own it all.  My POKéMON is tamping the land  to lay the foundation.$"*
- **OBJ_EVENT_GFX_MACHOP** (Script: `VermilionCity_EventScript_Machop`)
  - Dialogue (VermilionCity_Text_Machop): *"MACHOP: Guoh! Gogogoh!$"*
  - Dialogue (VermilionCity_Text_MachopStompingLandFlat): *"A MACHOP is stomping the land flat.$"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `VermilionCity_EventScript_Sailor`)
  - Dialogue (VermilionCity_Text_SSAnneVisitsOnceAYear): *"The S.S. ANNE is a famous luxury  cruise ship.  It visits VERMILION once a year.$"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `VermilionCity_EventScript_FerrySailor`)
  - Dialogue (VermilionCity_Text_WelcomeToTheSSAnne): *"Welcome to the S.S. ANNE!$"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `VermilionCity_EventScript_OaksAide`)
  - Dialogue (VermilionCity_Text_Route2AideHasPackageForYou): *"Oh, hello, {PLAYER}!  How are you doing?  It's me, one of PROF. TREE's AIDES.  Did you meet the other AIDE?  He had a package from PROF. TREE  for you, {PLAYER}.  He said he'd look for you around  ROUTE 2, {PLAYER}.  If you're in the ROUTE 2 area,  please look for him.$"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_EventScript_CitySign`)
  - Text (VermilionCity_Text_CitySign): *"VER-MULLET-ON  The Port of Exquisite Sunsets$"*
- **Sign** (Script: `VermilionCity_EventScript_PokemonFanClubSign`)
  - Text (VermilionCity_Text_PokemonFanClubSign): *"POKéMON FAN CLUB  All POKéMON fans welcome!$"*
- **Sign** (Script: `VermilionCity_EventScript_GymSign`)
  - Text (VermilionCity_Text_GymSign): *"VER-MULLET-ON POKéMON GYM  LEADER: LT. SURGE\l The Lightning American!$"*
- **Sign** (Script: `VermilionCity_EventScript_HarborSign`)
  - Text (VermilionCity_Text_VermilionHarbor): *"VERMILION HARBOR$"*
- **Sign** (Script: `VermilionCity_EventScript_SnorlaxNotice`)
  - Text (VermilionCity_Text_SnorlaxBlockingRoute12): *"NOTICE!  ROUTE 12 may be blocked off by a  sleeping POKéMON.  Detour through ROCK TUNNEL to  LA-VAMPIRE TOWN.  VERMILION POLICE$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### VermilionCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_LT_SURGE** (Script: `VermilionCity_Gym_EventScript_LtSurge`)
  - Dialogue (VermilionCity_Gym_Text_LtSurgePostBattle): *"A little word of advice, kid!  Electricity is sure powerful!  But, it's useless against GROUND-  type POKéMON!$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `VermilionCity_Gym_EventScript_Baily`)
  - Dialogue (VermilionCity_Gym_Text_BailyPostBattle): *"Okay, I'll talk!  LT. SURGE said he hid door  switches inside something.$"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `VermilionCity_Gym_EventScript_Dwayne`)
  - Dialogue (VermilionCity_Gym_Text_DwaynePostBattle): *"LT. SURGE installed the traps in  the GYM himself.  He set up double locks everywhere.  Let me give you a hint.  When you open the first lock, the  second lock is right next to it.$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `VermilionCity_Gym_EventScript_GymGuy`)
  - Dialogue (VermilionCity_Gym_Text_OllieIntro): *"OLLIE: Missed you! I hope you're  liking the journey so far.  I've got a little something for you.  It's a scale from my heart.$"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `VermilionCity_Gym_EventScript_Tucker`)
  - Dialogue (VermilionCity_Gym_Text_TuckerPostBattle): *"It's not easy opening that door.  LT. SURGE was always famous for  his cautious nature in the Army.$"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_Gym_EventScript_GymStatue`)
  - Text (VermilionCity_Gym_Text_GymStatue): *"VERMILION POKéMON GYM  LEADER: LT. SURGE  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_GymStatue`)
  - Text (VermilionCity_Gym_Text_GymStatue): *"VERMILION POKéMON GYM  LEADER: LT. SURGE  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan4`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan5`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan6`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan7`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan8`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan9`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan10`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan11`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan12`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan13`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan14`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `VermilionCity_Gym_EventScript_TrashCan15`)
  - Text: *(No local text calls found in script)*
#### VermilionCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `VermilionCity_House1_EventScript_FishingGuru`)
  - Dialogue (VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish): *"I'm the FISHING GURU!  I simply looove fishing!  I can't bear to go without.  Tell me, do you like to fish?$"*
  - Dialogue (VermilionCity_House1_Text_OhThatsSoDisappointing): *"Oh…  That's so disappointing…$"*
#### VermilionCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `VermilionCity_House2_EventScript_Elyssa`)
  - Dialogue (VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon): *"Hi!  Do you have a {STR_VAR_1}?  Want to trade it for my  {STR_VAR_2}?$"*
  - Dialogue (VermilionCity_House2_Text_ThankYou): *"Thank you!$"*
#### VermilionCity_House3
**NPCs:**
- **OBJ_EVENT_GFX_BOY** (Script: `VermilionCity_House3_EventScript_Boy`)
  - Dialogue (VermilionCity_House3_Text_PidgeyFlyLetterToSaffron): *"I'm getting my PIDGEY to fly a  letter to SAFFRON in the north.$"*
- **OBJ_EVENT_GFX_PIDGEY** (Script: `VermilionCity_House3_EventScript_Pidgey`)
  - Dialogue (VermilionCity_House3_Text_Pidgey): *"PIDGEY: Kurukkoo!$"*
- **OBJ_EVENT_GFX_CLIPBOARD** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_LASS** (Script: `VermilionCity_House3_EventScript_Lass`)
  - Dialogue (VermilionCity_House3_Text_SendMyPidgeyToUnionRoom): *"I want to exchange MAIL with all  sorts of people.  I send my PIDGEY to a UNION ROOM  to exchange MAIL for me.$"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_House3_EventScript_Letter`)
  - Text (VermilionCity_House3_Text_DearPippiLetter): *"Dear PIPPI,  I hope to see you soon.  I heard SAFFRON has problems with  TEAM ROCKET.  VERMILION appears to be safe.$"*
#### VermilionCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `VermilionCity_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VermilionCity_Mart_EventScript_CooltrainerF`)
  - Dialogue (VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer): *"I think POKéMON can be good or  bad. It depends on the TRAINER.$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `VermilionCity_Mart_EventScript_BaldingMan`)
  - Dialogue (VermilionCity_Mart_Text_TeamRocketAreWickedPeople): *"There are wicked people who will  use POKéMON for criminal acts.  TEAM ROCKET traffics in rare  POKéMON, for example.  They also abandon POKéMON that  they consider unpopular or useless.  That's the sort of horrid people  they are, TEAM ROCKET.$"*
#### VermilionCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MAN** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Man`)
  - Dialogue (VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking): *"My POKéMON was poisoned!  It fainted while we were walking!$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Hiker`)
  - Dialogue (VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild): *"Even if they are the same level,  POKéMON can have very different\l stats and abilities.  A POKéMON raised by a TRAINER is  stronger than one in the wild.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `VermilionCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes): *"It is true that a higher-level  POKéMON will be more powerful…  But, all POKéMON will have weak  points against specific types.  So, there appears to be no  universally strong POKéMON.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `VermilionCity_PokemonCenter_1F_EventScript_PokemonJournalLtSurge`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `VermilionCity_PokemonCenter_1F_EventScript_PokemonJournalLtSurge`)
  - Dialogue: *(No local text calls found in script)*
#### VermilionCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*
#### VermilionCity_PokemonFanClub
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `VermilionCity_PokemonFanClub_EventScript_Chairman`)
  - Dialogue (VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons): *"I chair the POKéMON Fan Club!  I raise more than a hundred  POKéMON!  I'm very fussy when it comes to  POKéMON! I surely am!  So…  Did you come visit to hear about  my POKéMON?$"*
  - Dialogue (VermilionCity_PokemonFanClub_Text_ComeBackToHearStory): *"Oh. Come back when you want to  hear my story!$"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `VermilionCity_PokemonFanClub_EventScript_WorkerF`)
  - Dialogue (VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon): *"Our CHAIRMAN is very vocal about  POKéMON.$"*
- **OBJ_EVENT_GFX_PIKACHU** (Script: `VermilionCity_PokemonFanClub_EventScript_Pikachu`)
  - Dialogue (VermilionCity_PokemonFanClub_Text_Pikachu): *"PIKACHU: Chu! Pikachu!$"*
- **OBJ_EVENT_GFX_SEEL** (Script: `VermilionCity_PokemonFanClub_EventScript_Seel`)
  - Dialogue (VermilionCity_PokemonFanClub_Text_Seel): *"SEEL: Kyuoo!$"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `VermilionCity_PokemonFanClub_EventScript_Woman`)
  - Dialogue (VermilionCity_PokemonFanClub_Text_AdoreMySeel): *"I just adore my SEEL!  It's so lovable!  It squeals, “Kyuuuh,” when I  hug it!$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `VermilionCity_PokemonFanClub_EventScript_FatMan`)
  - Dialogue (VermilionCity_PokemonFanClub_Text_AdmirePikachusTail): *"Won't you admire my PIKACHU's  adorable tail?$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
**Interactables / Signs:**
- **Sign** (Script: `VermilionCity_PokemonFanClub_EventScript_RulesSign1`)
  - Text (VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers): *"Let's all listen politely to other  TRAINERS!$"*
- **Sign** (Script: `VermilionCity_PokemonFanClub_EventScript_RulesSign2`)
  - Text (VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack): *"If someone brags, brag right back!$"*

---
### S.S. Anne
#### SSAnne_Exterior
**NPCs:**
- **OBJ_EVENT_GFX_SS_ANNE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### SSAnne_1F_Corridor
**NPCs:**
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_1F_Corridor_EventScript_Sailor`)
  - Dialogue (SSAnne_1F_Corridor_Text_PassengersAreRestless): *"The passengers are restless from  this long voyage.  You might be challenged by the  more bored ones!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SSAnne_1F_Corridor_EventScript_WorkerM`)
  - Dialogue (SSAnne_1F_Corridor_Text_LeStrongSilentType): *"Bonjour!  I am le waiter on this ship!  I will be happy to serve you  anything you please!  … … …  Ah! Le strong silent type!$"*
#### SSAnne_2F_Corridor
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_2F_Corridor_EventScript_Sailor`)
  - Dialogue (SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner): *"This ship, she is a luxury liner for  TRAINERS of the world!  At every port, we hold parties with  invited TRAINERS.$"*
#### SSAnne_3F_Corridor
**NPCs:**
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_3F_Corridor_EventScript_Sailor`)
  - Dialogue (SSAnne_3F_Corridor_Text_CaptainTeachesCutToMons): *"Our CAPTAIN is a sword master.  He's awesome at using CUT.  They say he even teaches CUT  to POKéMON!$"*
#### SSAnne_B1F_Corridor
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### SSAnne_CaptainsOffice
**NPCs:**
- **OBJ_EVENT_GFX_CAPTAIN** (Script: `SSAnne_CaptainsOffice_EventScript_Captain`)
  - Dialogue (SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick): *"CAPTAIN: Ooargh…  I feel hideous…\l Urrp! Seasick…$"*
  - Dialogue (SSAnne_CaptainsOffice_Text_RubbedCaptainsBack): *"{PLAYER} rubbed the CAPTAIN's  back!  Rub-rub…  Rub-rub…$"*
  - Dialogue (playfanfare): *"(Global/External Text: playfanfare)"*
  - Dialogue (SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut): *"CAPTAIN: Whew! Thank you!  I'm feeling much better now.  You want to see my hidden CUT  technique?  I could show you my prized CUT  technique if I weren't so ill…  I know! You can have this!  This HIDDEN MACHINE!  Teach CUT to your POKéMON, and  you can see it CUT anytime!$"*
  - Dialogue (SSAnne_CaptainsOffice_Text_ExplainCut): *"Using CUT, you can chop down  small trees.  Why not try it with the trees  around VER-MULLET-ON?$"*
**Interactables / Signs:**
- **Sign** (Script: `SSAnne_CaptainsOffice_EventScript_Book`)
  - Text (SSAnne_CaptainsOffice_Text_HowToConquerSeasickness): *"How to Conquer Seasickness…  The CAPTAIN's reading this!$"*
- **Sign** (Script: `SSAnne_CaptainsOffice_EventScript_TrashCan`)
  - Text (SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked): *"Yuck!  Shouldn't have looked!$"*
- **Sign** (Script: `SSAnne_CaptainsOffice_EventScript_Book`)
  - Text (SSAnne_CaptainsOffice_Text_HowToConquerSeasickness): *"How to Conquer Seasickness…  The CAPTAIN's reading this!$"*
#### SSAnne_Deck
**NPCs:**
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_Deck_EventScript_Trevor`)
  - Dialogue (SSAnne_Deck_Text_TrevorPostBattle): *"My pa said there are 100 kinds of  POKéMON. I think there are more.$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `SSAnne_Deck_EventScript_BaldingMan`)
  - Dialogue (SSAnne_Deck_Text_FeelSeasick): *"Urf… I feel ill…  I got seasick, so I stepped out to  get some air…$"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_Deck_EventScript_Sailor`)
  - Dialogue (SSAnne_Deck_Text_ScrubbingDecksHardWork): *"Whew!  Scrubbing decks is hard work!$"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `SSAnne_Deck_EventScript_Edmond`)
  - Dialogue (SSAnne_Deck_Text_EdmondPostBattle): *"How many kinds of POKéMON do you  think there are in this big world?$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SSAnne_Deck_EventScript_Youngster`)
  - Dialogue (SSAnne_Deck_Text_ShipDepartingSoon): *"The party's over.  The ship will be departing soon.$"*
#### SSAnne_Kitchen
**NPCs:**
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef1`)
  - Dialogue (SSAnne_Kitchen_Text_BusyOutOfTheWay): *"You, mon petit!  We're busy here!\l Out of the way!$"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef2`)
  - Dialogue (SSAnne_Kitchen_Text_SawOddBerryInTrash): *"I saw an odd BERRY in the trash.  I wonder what that was?$"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef3`)
  - Dialogue (SSAnne_Kitchen_Text_SoBusyImDizzy): *"I'm so busy I'm getting dizzy!  You have to give me room here!$"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef4`)
  - Dialogue (SSAnne_Kitchen_Text_IAmLeChefMainCourseIs): *"Er-hem!  Indeed I am le CHEF!  Le main course is$"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef5`)
  - Dialogue (SSAnne_Kitchen_Text_PeelSpudsEveryDay): *"Hum-de-hum-de-ho…  I peel spuds every day!  Hum-hum…$"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef6`)
  - Dialogue (SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton): *"Did you hear about SNORLAX?  It's a glutton.  No other POKéMON eats and sleeps  the way SNORLAX can and does!$"*
- **OBJ_EVENT_GFX_CHEF** (Script: `SSAnne_Kitchen_EventScript_Chef7`)
  - Dialogue (SSAnne_Kitchen_Text_OnlyGetToPeelOnions): *"Snivel… Sniff…  I only get to peel onions…  Snivel…$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SSAnne_Kitchen_EventScript_ItemGreatBall`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 11
#### Route11
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Eddie`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Hugo`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Dillon`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Dave`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Jasper`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Darian`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `Route11_EventScript_Braxton`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EventScript_Yasu`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route11_EventScript_Dirk`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `Route11_EventScript_Bernie`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route11_EventScript_ItemXDefend`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route11_EventScript_ItemGreatBall`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route11_EventScript_ItemAwakening`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route11_EventScript_DiglettsCaveSign`)
  - Text (Route11_Text_DiglettsCave): *"DIGLETT'S CAVE$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route11_EastEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route11_EastEntrance_1F_EventScript_TopGuard`)
  - Dialogue (Route11_EastEntrance_1F_Text_ManInLavenderRatesNames): *"Don't you think it's hard to think  up good names for POKéMON?  Especially if you've caught a  whole bunch?  In LA-VAMPIRE TOWN, there's a man  who rates POKéMON nicknames.  He can even help you rename your  POKéMON, too.$"*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route11_EastEntrance_1F_EventScript_BottomGuard`)
  - Dialogue (Route11_EastEntrance_1F_Text_RockTunnelToReachLavender): *"If you're aiming to reach LAVENDER  TOWN, take ROCK TUNNEL.  You can get to ROCK TUNNEL from  CURL-ULEAN CITY.$"*
#### Route11_EastEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route11_EastEntrance_2F_EventScript_Turner`)
  - Dialogue (Trade_Text_LookingForMonWannaTradeForMon): *"(Global/External Text: Trade_Text_LookingForMonWannaTradeForMon)"*
  - Dialogue (Trade_Text_HeyThanks): *"(Global/External Text: Trade_Text_HeyThanks)"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route11_EastEntrance_2F_EventScript_Aide`)
  - Dialogue (Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30): *"Hi! Remember me?  I'm one of PROF. TREE's AIDES.  If your POKéDEX has complete data  on {STR_VAR_1} species, I'm supposed to\l give you a reward.  PROF. TREE entrusted me with the  {STR_VAR_2} for you.  So, {PLAYER}, let me ask you.  Have you gathered data on at least  {STR_VAR_1} kinds of POKéMON?$"*
  - Dialogue (Route11_EastEntrance_2F_Text_GreatHereYouGo): *"Great! You have caught or owned  {STR_VAR_3} kinds of POKéMON!  Congratulations!  Here you go!$"*
  - Dialogue (Route11_EastEntrance_2F_Text_ExplainItemfinder): *"There are items on the ground that  may be hidden from view.  Use the ITEMFINDER to detect any  hidden items close to you.  The machine is a bit limited.  It can't pinpoint item locations.  What it does is show the direction  where the item is.  Use it to get your bearings, then  search the suspect area by hand.$"*
**Interactables / Signs:**
- **Sign** (Script: `Route11_EastEntrance_2F_EventScript_LeftBinoculars`)
  - Text (Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad): *"Let's see what the binoculars have  to show…  A big POKéMON is asleep on a road!$"*
- **Sign** (Script: `Route11_EastEntrance_2F_EventScript_RightBinoculars`)
  - Text (Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender): *"Let's see what the binoculars have  to show…  To get to LA-VAMPIRE TOWN from  CURL-ULEAN CITY…  ROCK TUNNEL appears to be a good  route to take.$"*

---
### Diglett's Cave
#### DiglettsCave_B1F
#### DiglettsCave_NorthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_HIKER** (Script: `DiglettsCave_NorthEntrance_EventScript_Hiker`)
  - Dialogue (DiglettsCave_NorthEntrance_RockTunnelPitchBlack): *"I went inside ROCK TUNNEL, but it's  pitch-black and scary in there.  If I could get a POKéMON to use  FLASH and light it up…$"*
#### DiglettsCave_SouthEntrance
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `DiglettsCave_SouthEntrance_EventScript_OldMan`)
  - Dialogue (DiglettsCave_SouthEntrance_Text_DiglettDugThisTunnel): *"Well, isn't this a surprise!  DIGLETT dug this long tunnel!  It goes right to VIRID-LAN CITY,  they tell me.$"*

---
### Route 9
#### Route9
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route9_EventScript_Alicia`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route9_EventScript_Jeremy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route9_EventScript_Alan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route9_EventScript_Chris`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route9_EventScript_Brent`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `Route9_EventScript_Conner`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route9_EventScript_Brice`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route9_EventScript_Caitlin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route9_EventScript_Drew`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route9_EventScript_ItemTM40`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route9_EventScript_ItemBurnHeal`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route9_EventScript_RouteSign`)
  - Text (Route9_Text_RouteSign): *"ROUTE 9  CURL-ULEAN CITY - ROCK TUNNEL$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 10
#### Route10
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route10_EventScript_Carol`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route10_EventScript_Clark`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `Route10_EventScript_Herman`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_HIKER** (Script: `Route10_EventScript_Trent`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `Route10_EventScript_Mark`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route10_EventScript_Heidi`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route10_EventScript_SouthRockTunnelSign`)
  - Text (Route10_Text_RockTunnel): *"ROCK TUNNEL$"*
- **Sign** (Script: `Route10_EventScript_PowerPlantSign`)
  - Text (Route10_Text_PowerPlant): *"POWER PLANT$"*
- **Sign** (Script: `Route10_EventScript_NorthRockTunnelSign`)
  - Text (Route10_Text_RockTunnelDetourToLavender): *"ROCK TUNNEL  Detour to LA-VAMPIRE TOWN$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route10_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `Route10_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `Route10_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers): *"The types of POKéMON match up  differently with each other.  Every type is stronger than some  types and weaker than others.$"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `Route10_PokemonCenter_1F_EventScript_FatMan`)
  - Dialogue (Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000): *"A NUGGET is totally useless.  So I sold it for ¥5000.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `Route10_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender): *"I heard that ghosts haunt  LA-VAMPIRE TOWN.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route10_PokemonCenter_1F_EventScript_Aide`)
  - Dialogue (Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons): *"Oh… {PLAYER}!  I've been looking for you!  It's me, one of the ever-present  AIDES to PROF. TREE.  If your POKéDEX has complete data  on twenty species, I'm supposed to\l give you a reward from PROF. TREE.  He entrusted me with this  EVERSTONE.  So, {PLAYER}, let me ask you.  Have you gathered data on at least  twenty kinds of POKéMON?$"*
  - Dialogue (Route10_PokemonCenter_1F_Text_GreatHereYouGo): *"Great! You have caught or owned  {STR_VAR_3} kinds of POKéMON!  Congratulations!  Here you go!$"*
  - Dialogue (Route10_PokemonCenter_1F_Text_ExplainEverstone): *"Making POKéMON evolve certainly  can add to the POKéDEX.  However, at times, you may not  want a certain POKéMON to evolve.  In that case, give the EVERSTONE  to that POKéMON.  It will prevent evolution according  to the PROFESSOR.$"*
#### Route10_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*

---
### Rock Tunnel
#### RockTunnel_1F
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_1F_EventScript_Dana`)
  - Dialogue (RockTunnel_1F_Text_DanaPostBattle): *"You looked cute and harmless.  Was I ever wrong!$"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_1F_EventScript_Ariana`)
  - Dialogue (RockTunnel_1F_Text_ArianaPostBattle): *"Whew!  I'm all sweaty now.$"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_1F_EventScript_Leah`)
  - Dialogue (RockTunnel_1F_Text_LeahPostBattle): *"I saw a MACHOP in this tunnel.$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_1F_EventScript_Lucas`)
  - Dialogue (RockTunnel_1F_Text_LucasPostBattle): *"You're talented enough to hike!$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_1F_EventScript_Oliver`)
  - Dialogue (RockTunnel_1F_Text_OliverPostBattle): *"That sleeping POKéMON on ROUTE 12  forced me to take this detour.$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_1F_EventScript_Lenny`)
  - Dialogue (RockTunnel_1F_Text_LennyPostBattle): *"Watch for ONIX.  They appear only occasionally.  High-level ones can put the  squeeze on you!$"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_1F_EventScript_Ashton`)
  - Dialogue (RockTunnel_1F_Text_AshtonPostBattle): *"Oh well, I'll get a ZUBAT as I go!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_1F_EventScript_ItemRepel`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_1F_EventScript_ItemPearl`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_1F_EventScript_ItemEscapeRope`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `RockTunnel_1F_EventScript_RouteSign`)
  - Text (RockTunnel_1F_Text_RouteSign): *"ROCK TUNNEL  CURL-ULEAN CITY - LA-VAMPIRE TOWN$"*
#### RockTunnel_B1F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_B1F_EventScript_Cooper`)
  - Dialogue (RockTunnel_B1F_Text_CooperPostBattle): *"When you finish your POKéDEX,  can I have it?$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_B1F_EventScript_Dudley`)
  - Dialogue (RockTunnel_B1F_Text_DudleyPostBattle): *"I go for power because I hate  thinking.$"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_B1F_EventScript_Sofia`)
  - Dialogue (RockTunnel_B1F_Text_SofiaPostBattle): *"I want to go home!$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_B1F_EventScript_Allen`)
  - Dialogue (RockTunnel_B1F_Text_AllenPostBattle): *"In mountains, you'll often find  ROCK-type POKéMON.$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `RockTunnel_B1F_EventScript_Eric`)
  - Dialogue (RockTunnel_B1F_Text_EricPostBattle): *"I'll raise my POKéMON to beat  yours, kid.$"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_B1F_EventScript_Steve`)
  - Dialogue (RockTunnel_B1F_Text_StevePostBattle): *"POKéMON cosplay is dressing up as  POKéMON for fun.  CLEFAIRY is a favorite.$"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `RockTunnel_B1F_EventScript_Martha`)
  - Dialogue (RockTunnel_B1F_Text_MarthaPostBattle): *"I like tiny POKéMON.  Big ones are too scary!$"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `RockTunnel_B1F_EventScript_Winston`)
  - Dialogue (RockTunnel_B1F_Text_WinstonPostBattle): *"I'm an artist, not a fighter.  I'll go home to draw.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `RockTunnel_B1F_EventScript_RockSlideTutor`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_B1F_EventScript_ItemRevive`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RockTunnel_B1F_EventScript_ItemMaxEther`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*

---
### La-Vampire Town
#### LavenderTown
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `LavenderTown_EventScript_LittleGirl`)
  - Dialogue (LavenderTown_Text_DoYouBelieveInGhosts): *"Do you believe in ghosts?$"*
  - Dialogue (LavenderTown_Text_JustImaginingWhiteHand): *"Hahaha, I guess not.  That white hand on your shoulder…  I'm just imagining it.$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `LavenderTown_EventScript_WorkerM`)
  - Dialogue (LavenderTown_Text_TownKnownAsMonGraveSite): *"This town is known as the grave  site of POKéMON.  Memorial services are held in  POKéMON TOWER.$"*
- **OBJ_EVENT_GFX_BOY** (Script: `LavenderTown_EventScript_Boy`)
  - Dialogue (LavenderTown_Text_GhostsAppearedInTower): *"Ghosts appeared in POKéMON TOWER.  I heard TEAM ROCKET is holding a  dog named FIG up there!  They're probably planning to take  her to their boss in SAFFRON-SWAN CITY.$"*
**Interactables / Signs:**
- **Sign** (Script: `LavenderTown_EventScript_SilphScopeNotice`)
  - Text (LavenderTown_Text_SilphScopeNotice): *"New SILPH SCOPE!  Make the Invisible Plain to See!  SILPH CO.$"*
- **Sign** (Script: `LavenderTown_EventScript_TownSign`)
  - Text (LavenderTown_Text_TownSign): *"LA-VAMPIRE TOWN  The Noble Purple Town$"*
- **Sign** (Script: `LavenderTown_EventScript_PokemonTowerSign`)
  - Text (LavenderTown_Text_PokemonTowerSign): *"POKéMON TOWER  Becalm the Spirits of POKéMON$"*
- **Sign** (Script: `LavenderTown_EventScript_VolunteerHouseSign`)
  - Text (LavenderTown_Text_VolunteerPokemonHouse): *"LAVENDER VOLUNTEER  POKéMON HOUSE$"*
#### LavenderTown_House1
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `LavenderTown_House1_EventScript_CooltrainerF`)
  - Dialogue (LavenderTown_House1_Text_RocketsKilledCubonesMother): *"Those horrible ROCKETS!  They deserve no mercy!  That poor CUBONE's mother…  It was killed trying to escape from  TEAM ROCKET.$"*
- **OBJ_EVENT_GFX_CUBONE** (Script: `LavenderTown_House1_EventScript_Cubone`)
  - Dialogue (LavenderTown_House1_Text_Cubone): *"CUBONE: Kyarugoo!$"*
#### LavenderTown_House2
**NPCs:**
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `LavenderTown_House2_EventScript_NameRater`)
  - Dialogue (LavenderTown_House2_Text_WantMeToRateNicknames): *"Hello, hello!  I am the official NAME RATER!  Want me to rate the nicknames of  your POKéMON?$"*
#### LavenderTown_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `LavenderTown_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `LavenderTown_Mart_EventScript_BaldingMan`)
  - Dialogue (LavenderTown_Mart_Text_SearchingForStatRaiseItems): *"I'm searching for items that raise  the stats of POKéMON.  They're effective over the course  of a single battle.  X ATTACK, X DEFEND, X SPEED,   and X SPECIAL are what I'm after.  Do you know where I can get them?$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `LavenderTown_Mart_EventScript_Rocker`)
  - Dialogue (LavenderTown_Mart_Text_DidYouBuyRevives): *"Did you buy some REVIVES?  They revive any fainted POKéMON!$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `LavenderTown_Mart_EventScript_Youngster`)
  - Dialogue (LavenderTown_Mart_Text_TrainerDuosCanChallengeYou): *"Sometimes, a TRAINER duo will  challenge you with two POKéMON\l at the same time.  If that happens, you have to send  out two POKéMON to battle, too.$"*
#### LavenderTown_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney): *"TEAM ROCKET will do anything for  the sake of money!  There is no job too dirty, no deed  too heinous, no crime too wicked!$"*
- **OBJ_EVENT_GFX_LASS** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Lass`)
  - Dialogue (LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets): *"I saw CUBONE's mother trying to  escape from TEAM ROCKET.  She was killed trying to get away…$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `LavenderTown_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls): *"You know how the CUBONE species  wears skulls, right?  People will pay a lot for one.$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `LavenderTown_PokemonCenter_1F_EventScript_BaldingMan`)
  - Dialogue: *(No local text calls found in script)*
#### LavenderTown_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*
#### LavenderTown_VolunteerPokemonHouse
**NPCs:**
- **OBJ_EVENT_GFX_MR_FUJI** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji`)
  - Dialogue (LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis): *"MR. FUJI: {PLAYER}…  Your POKéDEX quest is one that  requires strong dedication.  Without deep love for POKéMON,  your quest may fail.  I'm not sure if this will help you,  but I'd like you to have it.$"*
  - Dialogue (LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute): *"Upon hearing the POKé FLUTE,  sleeping POKéMON will spring awake.  Try using it on POKéMON that are  sleeping obstacles.$"*
- **OBJ_EVENT_GFX_NIDORINO** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino`)
  - Dialogue (LavenderTown_VolunteerPokemonHouse_Text_Nidorino): *"NIDORINO: Gaoo!$"*
- **OBJ_EVENT_GFX_PSYDUCK** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck`)
  - Dialogue (LavenderTown_VolunteerPokemonHouse_Text_Psyduck): *"PSYDUCK: Gwappa!$"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy`)
  - Dialogue (LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug): *"It's so warm!  POKéMON are so nice to hug.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Youngster`)
  - Dialogue (LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo): *"That's odd, MR. FUJI isn't here.  Where'd he go?$"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl`)
  - Dialogue (LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons): *"This is really MR. FUJI's house.  He's really kind.  He looks after abandoned and  orphaned POKéMON.$"*
**Interactables / Signs:**
- **Sign** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine`)
  - Text (LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped): *"POKéMON FAN MAGAZINE  Monthly Grand Prize Drawing!  The application form is…  Gone! It's been clipped out.  Someone must have applied already.$"*
- **Sign** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf`)
  - Text (LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf): *"POKéMON magazines line the shelf.  POKéMON INSIDER…  POKéMON FAN…$"*
- **Sign** (Script: `LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf`)
  - Text (LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf): *"POKéMON magazines line the shelf.  POKéMON INSIDER…  POKéMON FAN…$"*

---
### Pokémon Tower
#### PokemonTower_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `PokemonTower_1F_EventScript_WorkerF`)
  - Dialogue (PokemonTower_1F_Text_ErectedInMemoryOfDeadMons): *"POKéMON TOWER was erected in the  memory of POKéMON that died.$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_1F_EventScript_Channeler`)
  - Dialogue (PokemonTower_1F_Text_SenseSpiritsUpToMischief): *"I am a CHANNELER.  There are spirits up to mischief.  I sense them high in the TOWER.$"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `PokemonTower_1F_EventScript_Woman1`)
  - Dialogue (PokemonTower_1F_Text_GrowlitheWhyDidYouDie): *"My GROWLITHE…  Why did you die?$"*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `PokemonTower_1F_EventScript_Woman2`)
  - Dialogue (PokemonTower_1F_Text_ComeToPayRespectsGirl): *"Did you come to pay respects?  Bless your POKéMON-loving heart,  girl.$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `PokemonTower_1F_EventScript_BaldingMan`)
  - Dialogue (PokemonTower_1F_Text_CameToPrayForDepartedClefairy): *"I came to pray for my dearly  departed CLEFAIRY.  Sniff!  I'm awash in tears…$"*
#### PokemonTower_2F
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_2F_EventScript_Channeler`)
  - Dialogue (PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts): *"Even we could not identify the  wayward ghosts.  A SILPH SCOPE might be able to  unmask them.$"*
#### PokemonTower_3F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_3F_EventScript_Patricia`)
  - Dialogue (PokemonTower_3F_Text_PatriciaPostBattle): *"The others above…  They must have been possessed.$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_3F_EventScript_Carly`)
  - Dialogue (PokemonTower_3F_Text_CarlyPostBattle): *"Sorry!  I was possessed!$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_3F_EventScript_Hope`)
  - Dialogue (PokemonTower_3F_Text_HopePostBattle): *"The ghosts can be identified by  the SILPH SCOPE.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_3F_EventScript_ItemEscapeRope`)
  - Dialogue: *(No local text calls found in script)*
#### PokemonTower_4F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_4F_EventScript_Laurel`)
  - Dialogue (PokemonTower_4F_Text_LaurelPostBattle): *"We can't determine the identity of  the ghosts…$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_4F_EventScript_Jody`)
  - Dialogue (PokemonTower_4F_Text_JodyPostBattle): *"May the departed POKéMON rest in  peace…$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_4F_EventScript_Paula`)
  - Dialogue (PokemonTower_4F_Text_PaulaPostBattle): *"I must have been dreaming…$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_4F_EventScript_ItemElixir`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_4F_EventScript_ItemAwakening`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_4F_EventScript_ItemGreatBall`)
  - Dialogue: *(No local text calls found in script)*
#### PokemonTower_5F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Ruth`)
  - Dialogue (PokemonTower_5F_Text_RuthPostBattle): *"I was possessed.$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Tammy`)
  - Dialogue (PokemonTower_5F_Text_TammyPostBattle): *"I was under possession.$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Karina`)
  - Dialogue (PokemonTower_5F_Text_KarinaPostBattle): *"I regained my senses.$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Janae`)
  - Dialogue (PokemonTower_5F_Text_JanaePostBattle): *"I fell to evil spirits despite my  training in the mountains…$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_5F_EventScript_Channeler`)
  - Dialogue (PokemonTower_5F_Text_RestHereInPurifiedSpace): *"Come, child!  I have purified this space.\l You can rest here.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_5F_EventScript_ItemNugget`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_5F_EventScript_ItemCleanseTag`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### PokemonTower_6F
**NPCs:**
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_6F_EventScript_Angelica`)
  - Dialogue (PokemonTower_6F_Text_AngelicaPostBattle): *"I feel anemic and weak…$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_6F_EventScript_Jennifer`)
  - Dialogue (PokemonTower_6F_Text_JenniferPostBattle): *"What's going on here?$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `PokemonTower_6F_EventScript_Emilia`)
  - Dialogue (PokemonTower_6F_Text_EmiliaPostBattle): *"My hair didn't fall out!  It was a malevolent spirit!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_6F_EventScript_ItemRareCandy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonTower_6F_EventScript_ItemXAccuracy`)
  - Dialogue: *(No local text calls found in script)*
#### PokemonTower_7F
**NPCs:**
- **OBJ_EVENT_GFX_MR_FUJI** (Script: `PokemonTower_7F_EventScript_MrFuji`)
  - Dialogue (PokemonTower_7F_Text_MrFujiThankYouFollowMe): *"MR. FUJI: Heh?  You came to save me?  Thank you. But, I came here of my  own free will.  I came to calm the spirit of  CUBONE's mother.  I think MAROWAK's spirit has  finally left us.  I must thank you for your kind  concern.  Follow me to my home, POKéMON  HOUSE, at the foot of this tower.$"*
  - Dialogue (warp): *"(Global/External Text: warp)"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `PokemonTower_7F_EventScript_Grunt1`)
  - Dialogue (PokemonTower_7F_Text_Grunt1PostBattle): *"I'm not going to forget this!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `PokemonTower_7F_EventScript_Grunt2`)
  - Dialogue (PokemonTower_7F_Text_Grunt2PostBattle): *"POKéMON are only good for making  money. Why not use them?  You stay out of our business!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `PokemonTower_7F_EventScript_Grunt3`)
  - Dialogue (PokemonTower_7F_Text_Grunt3PostBattle): *"You're not getting away with this!$"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 12
#### Route12
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Ned`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Chip`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Hank`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Elliot`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SNORLAX** (Script: `Route12_EventScript_Snorlax`)
  - Dialogue (Text_WantToUsePokeFlute): *"Want to use the POKé FLUTE?$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route12_EventScript_Luca`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route12_EventScript_Justin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_EventScript_Andrew`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route12_EventScript_ItemTM48`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route12_EventScript_ItemIron`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route12_EventScript_Gia`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MAN** (Script: `Route12_EventScript_Jes`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route12_EventScript_RouteSign`)
  - Text (Route12_Text_RouteSign): *"ROUTE 12   North to LAVENDER$"*
- **Sign** (Script: `Route12_EventScript_FishingSign`)
  - Text (Route12_Text_SportfishingArea): *"SPORTFISHING AREA$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route12_FishingHouse
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route12_FishingHouse_EventScript_FishingGuruBrother`)
  - Dialogue (Route12_FishingHouse_Text_DoYouLikeToFish): *"I'm the FISHING GURU's younger  brother.  I simply looove fishing!  I can't bear to go without.  Tell me, do you like to fish?$"*
  - Dialogue (Route12_FishingHouse_Text_OhThatsDisappointing): *"Oh…  That's so disappointing…$"*
**Interactables / Signs:**
- **Sign** (Script: `Route12_FishingHouse_EventScript_MagikarpRecordSign`)
  - Text (Route12_FishingHouse_Text_BlankChartOfSomeSort): *"It's a blank chart of some sort.  It has spaces for writing in  records of some kind.$"*
#### Route12_NorthEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route12_NorthEntrance_1F_EventScript_Guard`)
  - Dialogue (Route12_NorthEntrance_1F_Text_LookoutSpotUpstairs): *"There's a lookout spot upstairs.  The view is magnificent.$"*
#### Route12_NorthEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `Route12_NorthEntrance_2F_EventScript_Lass`)
  - Dialogue (Route12_NorthEntrance_2F_Text_ExplainTM27): *"TM27 is a move called RETURN…  If you treat your POKéMON good,  it will return your love by working\l its hardest in battle.$"*
**Interactables / Signs:**
- **Sign** (Script: `Route12_NorthEntrance_2F_EventScript_LeftBinoculars`)
  - Text (Route12_NorthEntrance_2F_Text_TheresManFishing): *"Let's see what the binoculars have  to show…  There's a man fishing!$"*
- **Sign** (Script: `Route12_NorthEntrance_2F_EventScript_RightBinoculars`)
  - Text (Route12_NorthEntrance_2F_Text_ItsPokemonTower): *"Let's see what the binoculars have  to show…  It's POKéMON TOWER!$"*

---
### Route 13
#### Route13
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Alma`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route13_EventScript_Sebastian`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Susie`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route13_EventScript_Sheila`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route13_EventScript_Lola`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Valerie`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route13_EventScript_Gwen`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route13_EventScript_Robert`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route13_EventScript_Perry`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route13_EventScript_Jared`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route13_EventScript_RouteSign`)
  - Text (Route13_Text_RouteSign): *"ROUTE 13  North to SILENCE BRIDGE$"*
- **Sign** (Script: `Route13_EventScript_TrainerTips2`)
  - Text (Route13_Text_SelectToSwitchItems): *"TRAINER TIPS  Use SELECT to switch items in the  ITEMS window.$"*
- **Sign** (Script: `Route13_EventScript_TrainerTips1`)
  - Text (Route13_Text_LookToLeftOfThatPost): *"TRAINER TIPS  Look, look!  Look to the left of that post!$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 14
#### Route14
**NPCs:**
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Gerald`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Donald`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Beck`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Marlon`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Isaac`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Malik`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Mitch`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Carter`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route14_EventScript_Lukas`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route14_EventScript_Benny`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route14_EventScript_Jan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route14_EventScript_Kiri`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route14_EventScript_RouteSign`)
  - Text (Route14_Text_RouteSign): *"ROUTE 14  West to FO-SHEAR-IA$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 15
#### Route15
**NPCs:**
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Yazmin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route15_EventScript_Edwin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route15_EventScript_Chester`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Kindra`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route15_EventScript_Olivia`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route15_EventScript_Alex`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route15_EventScript_Ernest`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Becky`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route15_EventScript_Grace`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route15_EventScript_Celia`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `Route15_EventScript_ItemTM18`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `Route15_EventScript_Ron`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `Route15_EventScript_Mya`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route15_EventScript_RouteSign`)
  - Text (Route15_Text_RouteSign): *"ROUTE 15  West to FO-SHEAR-IA$"*
#### Route15_WestEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route15_WestEntrance_1F_EventScript_Guard`)
  - Dialogue (Route15_WestEntrance_1F_Text_OaksAideCameByHere): *"Are you the kid who's working on  a POKéDEX?  PROF. TREE's AIDE came by here.$"*
#### Route15_WestEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route15_WestEntrance_2F_EventScript_Aide`)
  - Dialogue (Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough): *"Hi! Remember me?  I'm one of PROF. TREE's AIDES.  If your POKéDEX has complete data  on {STR_VAR_1} species, I'm supposed to\l give you a reward.  PROF. TREE entrusted me with the  {STR_VAR_2} for you.  So, {PLAYER}, let me ask you.  Have you gathered data on at least  {STR_VAR_1} kinds of POKéMON?$"*
  - Dialogue (Route15_WestEntrance_2F_Text_GreatHereYouGo): *"Great! You have caught or owned  {STR_VAR_3} kinds of POKéMON!  Congratulations!  Here you go!$"*
  - Dialogue (Route15_WestEntrance_2F_Text_ExplainExpShare): *"EXP. SHARE is an item to be held  by a POKéMON.  The POKéMON will receive a share  of the EXP. Points without having\l to battle.$"*
**Interactables / Signs:**
- **Sign** (Script: `Route15_WestEntrance_2F_EventScript_LeftBinoculars`)
  - Text (Route15_WestEntrance_2F_Text_LargeShiningBird): *"Let's see what the binoculars have  to show…  A large, shining bird is flying  toward the sea.$"*
- **Sign** (Script: `Route15_WestEntrance_2F_EventScript_RightBinoculars`)
  - Text (Route15_WestEntrance_2F_Text_SmallIslandOnHorizon): *"Let's see what the binoculars have  to show…  It looks like a small island on  the horizon!$"*

---
### Route 16
#### Route16
**NPCs:**
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Lao`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Koji`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Luke`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Ruben`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Hideo`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route16_EventScript_Camron`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `Route16_EventScript_Lea`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MAN** (Script: `Route16_EventScript_Jed`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SNORLAX** (Script: `Route16_EventScript_Snorlax`)
  - Dialogue (Text_WantToUsePokeFlute): *"(Global/External Text: Text_WantToUsePokeFlute)"*
**Interactables / Signs:**
- **Sign** (Script: `Route16_EventScript_RouteSign`)
  - Text (Route16_Text_RouteSign): *"ROUTE 16  SAL-ON CITY - FO-SHEAR-IA$"*
- **Sign** (Script: `Route16_EventScript_CyclingRoadSign`)
  - Text (Route16_Text_CyclingRoadSign): *"Enjoy the slope!  CYCLING ROAD$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route16_House
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `Route16_House_EventScript_Woman`)
  - Dialogue (Route16_House_Text_FoundMySecretRetreat): *"Oh, dear.  You've found my secret retreat.  Please don't tell anyone I'm here.  I'll make it up to you with this!$"*
  - Dialogue (Route16_House_Text_ExplainHM02): *"HM02 is FLY.  It's a wonderfully convenient move.  Please, put it to good use.$"*
- **OBJ_EVENT_GFX_FEAROW** (Script: `Route16_House_EventScript_Fearow`)
  - Dialogue (Route16_House_Text_Fearow): *"FEAROW: Kyueen!$"*
#### Route16_NorthEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route16_NorthEntrance_1F_EventScript_Guard`)
  - Dialogue (Route16_NorthEntrance_1F_Text_CyclingRoadIsDownhillCourse): *"CYCLING ROAD is a downhill course  by the sea. It's a great ride.$"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route16_NorthEntrance_1F_EventScript_OldMan`)
  - Dialogue (Route16_NorthEntrance_1F_Text_HowdYouGetInGoodEffort): *"How'd you get in?  Good effort!$"*
#### Route16_NorthEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `Route16_NorthEntrance_2F_EventScript_LittleBoy`)
  - Dialogue (Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend): *"I'm on a relaxing ride on my new  bike with my girlfriend.$"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route16_NorthEntrance_2F_EventScript_LittleGirl`)
  - Dialogue (Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes): *"We're going riding together on our  new bikes.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route16_NorthEntrance_2F_EventScript_Aide`)
  - Dialogue (Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40): *"Hi! Remember me?  I'm one of PROF. TREE's AIDES.  If your POKéDEX has complete data  on 40 species, I'm supposed to\l give you a reward.  PROF. TREE entrusted me with an  AMULET COIN for you.  So, {PLAYER}, let me ask you.  Have you gathered data on at least  40 kinds of POKéMON?$"*
  - Dialogue (Route16_NorthEntrance_2F_Text_GreatHereYouGo): *"Great! You have caught or owned  {STR_VAR_3} kinds of POKéMON!  Congratulations!  Here you go!$"*
  - Dialogue (Route16_NorthEntrance_2F_Text_ExplainAmuletCoin): *"An AMULET COIN is an item to be  held by a POKéMON.  If the POKéMON appears in a winning  battle, you will earn more money.$"*
**Interactables / Signs:**
- **Sign** (Script: `Route16_NorthEntrance_2F_EventScript_LeftBinoculars`)
  - Text (Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore): *"Let's see what the binoculars have  to show…  It's the CELADON DEPT. STORE!$"*
- **Sign** (Script: `Route16_NorthEntrance_2F_EventScript_RightBinoculars`)
  - Text (Route16_NorthEntrance_2F_Text_LongPathOverWater): *"Let's see what the binoculars have  to show…  There's a long path over water far  away.$"*

---
### Route 17
#### Route17
**NPCs:**
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Virgil`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Isaiah`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Raul`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Nikolas`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Billy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Jamal`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Zeek`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Corey`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_William`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route17_EventScript_Jaxon`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route17_EventScript_RouteSign`)
  - Text (Route17_Text_RouteSign): *"ROUTE 17  SAL-ON CITY - FO-SHEAR-IA$"*
- **Sign** (Script: `Route17_EventScript_TrainerTips2`)
  - Text (Route17_Text_PressBToStayInPlace): *"TRAINER TIPS  Press the B Button to stay in place  while on a slope.$"*
- **Sign** (Script: `Route17_EventScript_TrainerTips1`)
  - Text (Route17_Text_SameSpeciesGrowDifferentRates): *"TRAINER TIPS  All POKéMON are unique.  Even POKéMON of the same species  and level grow at different rates.$"*
- **Sign** (Script: `Route17_EventScript_ItemsNotice`)
  - Text (Route17_Text_WatchOutForDiscardedItems): *"It's a notice.  Watch out for discarded items.$"*
- **Sign** (Script: `Route17_EventScript_BallsNotice`)
  - Text (Route17_Text_DontThrowGameThrowBalls): *"It's a notice!  Don't throw the game, throw POKé  BALLS instead!$"*
- **Sign** (Script: `Route17_EventScript_CyclingRoadSign`)
  - Text (Route17_Text_CyclingRoadSign): *"CYCLING ROAD  Slope ends here!$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 18
#### Route18
**NPCs:**
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route18_EventScript_Jacob`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route18_EventScript_Ramiro`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route18_EventScript_Wilton`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route18_EventScript_CyclingRoadSign`)
  - Text (Route18_Text_CyclingRoadSign): *"CYCLING ROAD  No pedestrians permitted!$"*
- **Sign** (Script: `Route18_EventScript_RouteSign`)
  - Text (Route18_Text_RouteSign): *"ROUTE 18  SAL-ON CITY - FO-SHEAR-IA$"*
#### Route18_EastEntrance_1F
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route18_EastEntrance_1F_EventScript_Guard`)
  - Dialogue (Route18_EastEntrance_1F_Text_CyclingRoadAllUphillFromHere): *"CYCLING ROAD is all uphill from  here.$"*
#### Route18_EastEntrance_2F
**NPCs:**
- **OBJ_EVENT_GFX_BOY** (Script: `Route18_EastEntrance_2F_EventScript_Haden`)
  - Dialogue (Trade_Text_LookingForMonWannaTradeForMon): *"(Global/External Text: Trade_Text_LookingForMonWannaTradeForMon)"*
  - Dialogue (Trade_Text_HeyThanks): *"(Global/External Text: Trade_Text_HeyThanks)"*
**Interactables / Signs:**
- **Sign** (Script: `Route18_EastEntrance_2F_EventScript_LeftBinoculars`)
  - Text (Route18_EastEntrance_2F_Text_PalletTownInWest): *"Let's see what the binoculars have  to show…  MILL TOWN is in the west.$"*
- **Sign** (Script: `Route18_EastEntrance_2F_EventScript_RightBinoculars`)
  - Text (Route18_EastEntrance_2F_Text_PeopleSwimming): *"Let's see what the binoculars have  to show…  There are people swimming.$"*

---
### Fo-Shear-ia City
#### FuchsiaCity
**NPCs:**
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `FuchsiaCity_EventScript_Erik`)
  - Dialogue (FuchsiaCity_Text_WheresSara): *"ERIK: Where's SARA?  I said I'd meet her here.$"*
- **OBJ_EVENT_GFX_SLOWPOKE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_VOLTORB** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `FuchsiaCity_EventScript_Youngster`)
  - Dialogue (FuchsiaCity_Text_ItemBallInThere): *"That item ball in there…  Were you wanting that?  Me, too!  …Huh? That's a POKéMON?$"*
- **OBJ_EVENT_GFX_CHANSEY** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `FuchsiaCity_EventScript_LittleBoy`)
  - Dialogue (FuchsiaCity_Text_DidYouTrySafariGame): *"Did you try the SAFARI GAME?  There are some rare POKéMON that  can only be caught there.$"*
- **OBJ_EVENT_GFX_LAPRAS** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `FuchsiaCity_EventScript_OldMan`)
  - Dialogue (FuchsiaCity_Text_SafariZoneZooInFront): *"The SAFARI ZONE has a zoo in front  of the entrance.  Out back is the SAFARI GAME for  catching POKéMON.$"*
- **OBJ_EVENT_GFX_VAR_0** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_KANGASKHAN** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BUG_CATCHER** (Script: `FuchsiaCity_EventScript_SubstituteTutor`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `FuchsiaCity_EventScript_Lass`)
  - Dialogue (FuchsiaCity_Text_MyFatherIsGymLeader): *"My father is the GYM LEADER of  this town.  I'm training to use POISON POKéMON  as well as my father.$"*
**Interactables / Signs:**
- **Sign** (Script: `FuchsiaCity_EventScript_CitySign`)
  - Text (FuchsiaCity_Text_CitySign): *"FO-SHEAR-IA  Behold! It's Passion Pink!$"*
- **Sign** (Script: `FuchsiaCity_EventScript_SafariZoneSign`)
  - Text (FuchsiaCity_Text_SafariZoneSign): *"POKéMON PARADISE  SAFARI ZONE$"*
- **Sign** (Script: `FuchsiaCity_EventScript_GymSign`)
  - Text (FuchsiaCity_Text_GymSign): *"FO-SHEAR-IA POKéMON GYM  LEADER: KOGA\l The Poisonous Ninja Master$"*
- **Sign** (Script: `FuchsiaCity_EventScript_WardensHomeSign`)
  - Text (FuchsiaCity_Text_WardensHomeSign): *"SAFARI ZONE  WARDEN'S HOME$"*
- **Sign** (Script: `FuchsiaCity_EventScript_VoltorbSign`)
  - Text (FuchsiaCity_Text_VoltorbSign): *"Name: VOLTORB  The very image of a POKé BALL.$"*
- **Sign** (Script: `FuchsiaCity_EventScript_SlowpokeSign`)
  - Text (FuchsiaCity_Text_SlowpokeSign): *"Name: SLOWPOKE  Friendly and very slow moving.$"*
- **Sign** (Script: `FuchsiaCity_EventScript_ChanseySign`)
  - Text (FuchsiaCity_Text_ChanseySign): *"Name: CHANSEY  Catching one is all up to chance.$"*
- **Sign** (Script: `FuchsiaCity_EventScript_KangaskhanSign`)
  - Text (FuchsiaCity_Text_KangaskhanSign): *"Name: KANGASKHAN  A maternal POKéMON that raises its  young in a pouch on its belly.$"*
- **Sign** (Script: `FuchsiaCity_EventScript_FossilMonSign`)
  - Text (FuchsiaCity_Text_KabutoSign): *"Name: KABUTO  An extremely rare POKéMON that was\l regenerated from a fossil.$"*
- **Sign** (Script: `FuchsiaCity_EventScript_LaprasSign`)
  - Text (FuchsiaCity_Text_LaprasSign): *"Name: LAPRAS  AKA the king of the seas.$"*
- **Sign** (Script: `FuchsiaCity_EventScript_SafariGameSign`)
  - Text (FuchsiaCity_Text_SafariGameSign): *"SAFARI GAME  POKéMON-U-CATCH!$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### FuchsiaCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Kayden`)
  - Dialogue (FuchsiaCity_Gym_Text_KaydenPostBattle): *"So, you mix brawn with brains?  Good strategy!  That's remarkable for a child  TRAINER.$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Shawn`)
  - Dialogue (FuchsiaCity_Gym_Text_ShawnPostBattle): *"Where there is light, there is  shadow!  Light and shadow!  Which do you choose?$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Kirk`)
  - Dialogue (FuchsiaCity_Gym_Text_KirkPostBattle): *"Even though I've lost, I will keep  training according to the teachings\l of KOGA, my ninja master.$"*
- **OBJ_EVENT_GFX_MAN** (Script: `FuchsiaCity_Gym_EventScript_Edgar`)
  - Dialogue (FuchsiaCity_Gym_Text_EdgarPostBattle): *"I still have much to learn.$"*
- **OBJ_EVENT_GFX_MAN** (Script: `FuchsiaCity_Gym_EventScript_Phil`)
  - Dialogue (FuchsiaCity_Gym_Text_PhilPostBattle): *"You impressed me!  Here's a hint!  Look very closely for gaps in the  invisible walls!$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `FuchsiaCity_Gym_EventScript_Nate`)
  - Dialogue (FuchsiaCity_Gym_Text_NatePostBattle): *"I like poison and sleep techniques,  as they linger after battle!$"*
- **OBJ_EVENT_GFX_KOGA** (Script: `FuchsiaCity_Gym_EventScript_Koga`)
  - Dialogue (FuchsiaCity_Gym_Text_KogaPostBattle): *"When afflicted by TOXIC, a POKéMON  suffers more and more.  It suffers worsening damage as the  battle wears on!  It will surely terrorize foes!$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `FuchsiaCity_Gym_EventScript_GymGuy`)
  - Dialogue (FuchsiaCity_Gym_Text_OllieIntro): *"OLLIE: Hey SHUKTI! Tricky walls,  tricky ninjas... everything is a\l puzzle until we're together.  I've got a little something for you.  The scent of a thousand memories.$"*
**Interactables / Signs:**
- **Sign** (Script: `FuchsiaCity_Gym_EventScript_GymStatue`)
  - Text (FuchsiaCity_Gym_Text_GymStatue): *"FUCHSIA POKéMON GYM  LEADER: KOGA  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `FuchsiaCity_Gym_EventScript_GymStatue`)
  - Text (FuchsiaCity_Gym_Text_GymStatue): *"FUCHSIA POKéMON GYM  LEADER: KOGA  WINNING TRAINERS:  {RIVAL}$"*
#### FuchsiaCity_House1
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `FuchsiaCity_House1_EventScript_OldMan`)
  - Dialogue (FuchsiaCity_House1_Text_BillIsMyGrandson): *"Hmm?  You've met BILL?  He's my grandson!  He always liked collecting things,  even as a child!$"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `FuchsiaCity_House1_EventScript_Woman`)
  - Dialogue (FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth): *"The SAFARI ZONE's WARDEN is old,   but he's still very much active.  All his teeth are false, though.$"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `FuchsiaCity_House1_EventScript_LittleBoy`)
  - Dialogue (FuchsiaCity_House1_Text_BillFilesHisOwnMonData): *"BILL files his own POKéMON data on  his PC.  Did he show you?$"*
#### FuchsiaCity_House2
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `FuchsiaCity_House2_EventScript_FishingGurusBrother`)
  - Dialogue (FuchsiaCity_House2_Text_DoYouLikeToFish): *"I'm the FISHING GURU's older  brother.  I simply looove fishing!  I can't bear to go without.  Tell me, do you like to fish?$"*
  - Dialogue (FuchsiaCity_House2_Text_OhThatsDisappointing): *"Oh…  That's so disappointing…$"*
#### FuchsiaCity_House3
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `FuchsiaCity_House3_EventScript_MoveDeleter`)
  - Dialogue (FuchsiaCity_House3_Text_WouldYouLikeToForgetMove): *"Uh…  Oh, yes, I'm the MOVE DELETER.  I can make POKéMON forget their  moves.  Would you like me to do that?$"*
#### FuchsiaCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `FuchsiaCity_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `FuchsiaCity_Mart_EventScript_Gentleman`)
  - Dialogue (FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants): *"Don't they have any pennants  promoting the SAFARI ZONE?  How about some paper lanterns?  Aren't there even any calendars?$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `FuchsiaCity_Mart_EventScript_CooltrainerF`)
  - Dialogue (FuchsiaCity_Mart_Text_DidYouTryXSpeed): *"Did you try X SPEED?  It speeds up a POKéMON in battle.$"*
#### FuchsiaCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OAK** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_ProfTree`)
  - Dialogue (FuchsiaCity_PokemonCenter_1F_Text_ProfTree_Intro): *"TREE: Ah, {PLAYER}!  You've made it all the way to\l FO-SHEAR-IA CITY!  I have the final one of my special  starter POKéMON with me.  Since you've come so far, I want  you to have it!$"*
  - Dialogue (FuchsiaCity_PokemonCenter_1F_Text_ProfTree_Outro): *"TREE: Now you have all three of  my original starters!  You are truly a remarkable Trainer.  Go forth and conquer the League!$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF`)
  - Dialogue (FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian): *"There's a narrow trail west of  VIRID-LAN CITY.  It goes to the POKéMON LEAGUE HQ.  The HQ governs all TRAINERS.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `FuchsiaCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex): *"If you're working on a POKéDEX,  visit the SAFARI ZONE.  All sorts of rare POKéMON breed  there.$"*
#### FuchsiaCity_PokemonCenter_2F
**NPCs:**
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_UnionRoomAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_WirelessClubAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST** (Script: `Common_EventScript_DirectCornerAttendant`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MG_DELIVERYMAN** (Script: `CableClub_EventScript_MysteryGiftMan`)
  - Dialogue: *(No local text calls found in script)*
#### FuchsiaCity_SafariZone_Entrance
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant`)
  - Dialogue (FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone): *"Hi! Is it your first time here at  the SAFARI ZONE?$"*
  - Dialogue (FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere): *"Sorry, you're a regular here!$"*
#### FuchsiaCity_SafariZone_Office
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker2`)
  - Dialogue (FuchsiaCity_SafariZone_Office_Text_WardenIsVeryKnowledgeable): *"WARDEN SLOWPOKE is very  knowledgeable about POKéMON.  He even has some fossils of rare,  extinct POKéMON.$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker3`)
  - Dialogue (FuchsiaCity_SafariZone_Office_Text_CouldntUnderstandWarden): *"WARDEN SLOWPOKE came in, but  I couldn't understand him.  I think he's got a speech problem!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker1`)
  - Dialogue (FuchsiaCity_SafariZone_Office_Text_NicknamedWardenSlowpoke): *"We nicknamed the WARDEN  “SLOWPOKE.”  You know, he has that vacant look  like a SLOWPOKE.$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `FuchsiaCity_SafariZone_Office_EventScript_Worker4`)
  - Dialogue (FuchsiaCity_SafariZone_Office_Text_PrizeInSafariZone): *"WARDEN SLOWPOKE is running a  promotion campaign right now.  Try to get to the farthest corner  of the SAFARI ZONE.  If you can make it, you'll win a  very convenient prize.$"*
#### FuchsiaCity_WardensHouse
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `FuchsiaCity_WardensHouse_EventScript_Warden`)
  - Dialogue (FuchsiaCity_WardensHouse_Text_HifFuffHefifoo): *"WARDEN: Hif fuff hefifoo!  Ha lof ha feef ee hafahi ho.  Heff hee fwee!$"*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `FuchsiaCity_WardensHouse_EventScript_ItemRareCandy`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `FuchsiaCity_WardensHouse_EventScript_PokemonJournalKoga`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign2`)
  - Text (FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay): *"Old POKéMON merchandise is on  display.$"*
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign1`)
  - Text (FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay): *"POKéMON photos and fossils are on  display.$"*
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign1`)
  - Text (FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay): *"POKéMON photos and fossils are on  display.$"*
- **Sign** (Script: `FuchsiaCity_WardensHouse_EventScript_DisplaySign2`)
  - Text (FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay): *"Old POKéMON merchandise is on  display.$"*

---
### Safari Zone
#### SafariZone_Center
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_Center_EventScript_ItemNugget`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_Center_EventScript_RestHouseSign`)
  - Text (SafariZone_Center_Text_RestHouse): *"REST HOUSE$"*
- **Sign** (Script: `SafariZone_Center_EventScript_TrainerTips`)
  - Text (SafariZone_Center_Text_PressStartToCheckTime): *"TRAINER TIPS  Press START to check  remaining time.$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SafariZone_Center_EventScript_AreaSign`)
  - Text (SafariZone_Center_Text_CenterArea): *"CENTER AREA$"*
#### SafariZone_East
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemMaxPotion`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemFullRestore`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemTM11`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_East_EventScript_ItemLeafStone`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_East_EventScript_AreaSign`)
  - Text (SafariZone_East_Text_AreaSign): *"AREA 1  WEST: CENTER AREA$"*
- **Sign** (Script: `SafariZone_East_EventScript_RestHouseSign`)
  - Text (SafariZone_East_Text_RestHouse): *"REST HOUSE$"*
- **Sign** (Script: `SafariZone_East_EventScript_TrainerTips`)
  - Text (SafariZone_East_Text_TimeDeclinesOnlyWhileYouWalk): *"TRAINER TIPS  The remaining time declines only  while you walk.$"*
#### SafariZone_North
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_North_EventScript_ItemProtein`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_North_EventScript_ItemTM47`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_North_EventScript_ItemQuickClaw`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_North_EventScript_TrainerTips1`)
  - Text (SafariZone_North_Text_SecretHouseStillAhead): *"TRAINER TIPS  The SECRET HOUSE is still ahead.$"*
- **Sign** (Script: `SafariZone_North_EventScript_AreaSign`)
  - Text (SafariZone_North_Text_Area2): *"AREA 2$"*
- **Sign** (Script: `SafariZone_North_EventScript_TrainerTips2`)
  - Text (SafariZone_North_Text_ZigzagThroughTallGrass): *"TRAINER TIPS  POKéMON hide in tall grass.  Zigzag through grassy areas to  flush them out.$"*
- **Sign** (Script: `SafariZone_North_EventScript_TrainerTips3`)
  - Text (SafariZone_North_Text_WinFreeHMFindSecretHouse): *"TRAINER TIPS  Win a free HM for finding the  SECRET HOUSE.$"*
- **Sign** (Script: `SafariZone_North_EventScript_RestHouseSign`)
  - Text (SafariZone_North_Text_RestHouse): *"REST HOUSE$"*
#### SafariZone_West
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemGoldTeeth`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemTM32`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemMaxPotion`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SafariZone_West_EventScript_ItemMaxRevive`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SafariZone_West_EventScript_LostTeethNotice`)
  - Text (SafariZone_West_Text_PleaseFindWardensLostTeeth): *"REQUEST NOTICE  Please find the SAFARI WARDEN's  lost GOLD TEETH.\l They're around here somewhere.  Reward offered!  Contact: WARDEN$"*
- **Sign** (Script: `SafariZone_West_EventScript_TrainerTips`)
  - Text (SafariZone_West_Text_SearchForSecretHouse): *"TRAINER TIPS  Zone Exploration Campaign!  The Search for the SECRET HOUSE!$"*
- **Sign** (Script: `SafariZone_West_EventScript_AreaSign`)
  - Text (SafariZone_West_Text_AreaSign): *"AREA 3  EAST: CENTER AREA$"*
- **Sign** (Script: `SafariZone_West_EventScript_RestHouseSign`)
  - Text (SafariZone_West_Text_RestHouse): *"REST HOUSE$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### SafariZone_SecretHouse
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SafariZone_SecretHouse_EventScript_Attendant`)
  - Dialogue (SafariZone_SecretHouse_Text_CongratsYouveWon): *"Ah! Finally!  You're the first person to reach  the SECRET HOUSE!  Although I made a campaign  for our grand opening,  I was getting worried that no one  would win our campaign prize.  Congratulations!  You have won!$"*
  - Dialogue (SafariZone_SecretHouse_Text_ExplainSurf): *"HM03 is SURF.  POKéMON will be able to ferry you  across water using it.  And, this HM isn't disposable, so  you can use it over and over.  You're super lucky for winning this  fabulous prize!$"*

---
### Route 8
#### Route8
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Julia`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route8_EventScript_Rich`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route8_EventScript_Glenn`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Paige`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route8_EventScript_Leslie`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Andrea`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LASS** (Script: `Route8_EventScript_Megan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `Route8_EventScript_Stan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `Route8_EventScript_Aidan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route8_EventScript_Eli`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `Route8_EventScript_Anne`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route8_EventScript_Ricardo`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `Route8_EventScript_Jaren`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route8_EventScript_UndergroundPathSign`)
  - Text (Route8_Text_UndergroundPathSign): *"UNDERGROUND PATH  SAL-ON CITY - LA-VAMPIRE TOWN$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route8_WestEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route8_WestEntrance_EventScript_Guard`)
  - Dialogue (Route8_WestEntrance_Text_HiHowsItGoing): *"Hi, how's it going?$"*

---
### Route 7
#### Route7
**NPCs:**
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route7_EventScript_UndergroundPathSign`)
  - Text (Route7_Text_UndergroundPathSign): *"UNDERGROUND PATH  SAL-ON CITY - LA-VAMPIRE TOWN$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route7_EastEntrance
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route7_EastEntrance_EventScript_Guard`)
  - Dialogue (Route7_EastEntrance_Text_HiHowsItGoing): *"Hi, how's it going?$"*

---
### Sal-on City
#### CeladonCity
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeladonCity_EventScript_RocketGrunt1`)
  - Dialogue (CeladonCity_Text_KeepOutOfTeamRocketsWay): *"Keep out of TEAM ROCKET's way!$"*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `CeladonCity_EventScript_FatMan`)
  - Dialogue (CeladonCity_Text_MyTrustedPalPoliwrath): *"This is my trusted pal, POLIWRATH.  It evolved from a POLIWHIRL when  I used a WATER STONE.$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_POLIWRATH** (Script: `CeladonCity_EventScript_Poliwrath`)
  - Dialogue (CeladonCity_Text_Poliwrath): *"POLIWRATH: Ribi ribit!$"*
  - Dialogue (waitmoncry): *"(Global/External Text: waitmoncry)"*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `CeladonCity_EventScript_LittleGirl`)
  - Dialogue (CeladonCity_Text_GotMyKoffingInCinnabar): *"I got my KOFFING in CINNABAR.  It's usually nice, but it breathes  poison when it's angry.$"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CeladonCity_EventScript_Woman`)
  - Dialogue (CeladonCity_Text_GameCornerIsBadForCitysImage): *"CELADON takes pride in its efforts  to keep the city beautiful.  That's why the new GAME CORNER is  bad for our city's image.$"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeladonCity_EventScript_OldMan2`)
  - Dialogue (CeladonCity_Text_BlewItAllAtSlots): *"Moan…  I blew it all at the slots!  I knew I should have cashed in my  COINS for prizes!$"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `CeladonCity_EventScript_SoftboiledTutor`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeladonCity_EventScript_RocketGrunt2`)
  - Dialogue (CeladonCity_Text_GetLostOrIllPunchYou): *"What are you staring at?  Get lost, or I'll punch you.$"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CeladonCity_EventScript_OldMan1`)
  - Dialogue (CeladonCity_Text_GymIsGreatFullOfWomen): *"Heheh! This GYM is great!  It's full of women!$"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BOY** (Script: `CeladonCity_EventScript_Boy`)
  - Dialogue (CeladonCity_Text_ScaldedTongueOnTea): *"Aaaagh, ow…  I scalded my tongue!  This nice old lady in the MANSION  gave me some TEA.  But it was boiling hot!  Gotta cool it to drink it.$"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `None`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `CeladonCity_EventScript_ItemEther`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CeladonCity_EventScript_SilphCoScientist`)
  - Dialogue (CeladonCity_Text_SomeoneStoleSilphScope): *"Oh, what am I to do…  Someone stole poor FIG!  The thief came running this way  with a tricolour collie, I'm sure\l of it!  But I lost sight of them!  Where'd they go?$"*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_EventScript_TrainerTips2`)
  - Text (CeladonCity_Text_GuardSpecProtectsFromStatus): *"TRAINER TIPS  GUARD SPEC. protects POKéMON  from status-reduction moves during\l battle.  Get your items at the  CELADON DEPT. STORE!$"*
- **Sign** (Script: `CeladonCity_EventScript_PrizeExchangeSign`)
  - Text (CeladonCity_Text_PrizeExchangeSign): *"COINS exchanged for prizes!  PRIZE EXCHANGE$"*
- **Sign** (Script: `CeladonCity_EventScript_GameCornerSign`)
  - Text (CeladonCity_Text_GameCornerSign): *"ROCKET GAME CORNER  The playground for grown-ups!$"*
- **Sign** (Script: `CeladonCity_EventScript_CitySign`)
  - Text (CeladonCity_Text_CitySign): *"SAL-ON CITY  The City of Rainbow Dreams$"*
- **Sign** (Script: `CeladonCity_EventScript_MansionSign`)
  - Text (CeladonCity_Text_MansionSign): *"CELADON MANSION$"*
- **Sign** (Script: `CeladonCity_EventScript_TrainerTips1`)
  - Text (CeladonCity_Text_ExplainXAccuracyDireHit): *"TRAINER TIPS  X ACCURACY boosts the accuracy of  techniques.  DIRE HIT jacks up the likelihood  of critical hits.  Get your items at the CELADON  DEPT. STORE!$"*
- **Sign** (Script: `CeladonCity_EventScript_DeptStoreSign`)
  - Text (CeladonCity_Text_DeptStoreSign): *"Find what you need at the  CELADON DEPT. STORE!$"*
- **Sign** (Script: `CeladonCity_EventScript_GymSign`)
  - Text (CeladonCity_Text_GymSign): *"SAL-ON CITY POKéMON GYM  LEADER: ERIKA\l The Nature-Loving Princess!$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### CeladonCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_LASS** (Script: `CeladonCity_Gym_EventScript_Kay`)
  - Dialogue (CeladonCity_Gym_Text_KayPostBattle): *"Bleaah!  I hope ERIKA wipes you out!$"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Gym_EventScript_Bridget`)
  - Dialogue (CeladonCity_Gym_Text_BridgetPostBattle): *"GRASS-type POKéMON are tough  against the WATER type.  They also have an edge on ROCK-  and GROUND-type POKéMON.$"*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `CeladonCity_Gym_EventScript_Tina`)
  - Dialogue (CeladonCity_Gym_Text_TinaPostBattle): *"Oh, you were looking at ERIKA…  You weren't looking at me…$"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Gym_EventScript_Tamia`)
  - Dialogue (CeladonCity_Gym_Text_TamiaPostBattle): *"We only use GRASS-type POKéMON at  our GYM.  Why? We also use them for making  flower arrangements!$"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Gym_EventScript_Lori`)
  - Dialogue (CeladonCity_Gym_Text_LoriPostBattle): *"I have a blind date coming up.  I have to learn to be polite,\l especially if I have to battle.$"*
- **OBJ_EVENT_GFX_LASS** (Script: `CeladonCity_Gym_EventScript_Lisa`)
  - Dialogue (CeladonCity_Gym_Text_LisaPostBattle): *"Our LEADER ERIKA might be quiet,  but she's famous around here.$"*
- **OBJ_EVENT_GFX_ERIKA** (Script: `CeladonCity_Gym_EventScript_Erika`)
  - Dialogue (CeladonCity_Gym_Text_ErikaPostBattle): *"You are cataloging POKéMON?  I must say I'm impressed.  I would never collect POKéMON if  they were unattractive.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `CeladonCity_Gym_EventScript_Mary`)
  - Dialogue (CeladonCity_Gym_Text_MaryPostBattle): *"I didn't bring my best POKéMON.  Wait until next time!$"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_Gym_EventScript_GymStatue`)
  - Text (CeladonCity_Gym_Text_GymStatue): *"CELADON POKéMON GYM  LEADER: ERIKA  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `CeladonCity_Gym_EventScript_GymStatue`)
  - Text (CeladonCity_Gym_Text_GymStatue): *"CELADON POKéMON GYM  LEADER: ERIKA  WINNING TRAINERS:  {RIVAL}$"*
#### CeladonCity_Condominiums_1F
**NPCs:**
- **OBJ_EVENT_GFX_MEOWTH** (Script: `CeladonCity_Condominiums_1F_EventScript_Meowth`)
  - Dialogue (CeladonCity_Condominiums_1F_Text_Meowth): *"MEOWTH: Meow!$"*
- **OBJ_EVENT_GFX_CLEFAIRY** (Script: `CeladonCity_Condominiums_1F_EventScript_Clefairy`)
  - Dialogue (CeladonCity_Condominiums_1F_Text_Clefairy): *"CLEFAIRY: Pi pippippi!$"*
- **OBJ_EVENT_GFX_NIDORAN_F** (Script: `CeladonCity_Condominiums_1F_EventScript_Nidoran`)
  - Dialogue (CeladonCity_Condominiums_1F_Text_Nidoran): *"NIDORAN♀: Kya kyaoo!$"*
- **OBJ_EVENT_GFX_OLD_WOMAN** (Script: `CeladonCity_Condominiums_1F_EventScript_TeaWoman`)
  - Dialogue (CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead): *"You shouldn't spend all your money  on drinks.  Try this instead.$"*
  - Dialogue (CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea): *"Nothing beats thirst like some hot  TEA.  It really is the best.$"*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_Condominiums_1F_EventScript_SuiteSign`)
  - Text (CeladonCity_Condominiums_1F_Text_ManagersSuite): *"CELADON MANSION  Manager's Suite$"*
- **Sign** (Script: `CeladonCity_Condominiums_1F_EventScript_SuiteSign`)
  - Text (CeladonCity_Condominiums_1F_Text_ManagersSuite): *"CELADON MANSION  Manager's Suite$"*
#### CeladonCity_DepartmentStore_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `CeladonCity_DepartmentStore_1F_EventScript_Receptionist`)
  - Dialogue (CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore): *"Hello!  Welcome to CELADON DEPT. STORE.  The board on the right describes  the store layout.$"*
**Interactables / Signs:**
- **Sign** (Script: `CeladonCity_DepartmentStore_1F_EventScript_LayoutSign`)
  - Text (CeladonCity_DepartmentStore_1F_Text_FloorDescriptions): *"1F: SERVICE COUNTER  2F: TRAINER'S MARKET  3F: TV GAME SHOP  4F: WISE MAN GIFTS  5F: DRUGSTORE  ROOFTOP SQUARE: VENDING MACHINES$"*
- **Sign** (Script: `CeladonCity_DepartmentStore_1F_EventScript_FloorSign`)
  - Text (CeladonCity_DepartmentStore_1F_Text_ServiceCounter): *"1F: SERVICE COUNTER$"*
#### CeladonCity_GameCorner
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `CeladonCity_GameCorner_EventScript_InfoClerk`)
  - Dialogue (CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor): *"Welcome!  You can exchange your COINS for  fabulous prizes next door.$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `CeladonCity_GameCorner_EventScript_CoinsClerk`)
  - Dialogue (CeladonCity_GameCorner_Text_WelcomeBuySomeCoins): *"Welcome to ROCKET GAME CORNER!  Do you need some game COINS?  Would you like to buy some?$"*
  - Dialogue (multichoice): *"(Global/External Text: multichoice)"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `CeladonCity_GameCorner_EventScript_BaldingMan`)
  - Dialogue (CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace): *"Keep this quiet.  It's rumored that this place is run  by TEAM ROCKET.$"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CeladonCity_GameCorner_EventScript_Woman1`)
  - Dialogue (CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds): *"I think these machines have  different odds.$"*
- **OBJ_EVENT_GFX_FISHER** (Script: `CeladonCity_GameCorner_EventScript_Fisher`)
  - Dialogue (CeladonCity_GameCorner_Text_DoYouWantToPlay): *"Kid, do you want to play?$"*
  - Dialogue (CeladonCity_GameCorner_Text_Received10CoinsFromMan): *"{PLAYER} received 10 COINS  from the man.$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `CeladonCity_GameCorner_EventScript_GymGuy`)
  - Dialogue (CeladonCity_GameCorner_Text_OllieIntro): *"OLLIE: Hey SHUKTI! Fancy seeing  you here in SAL-ON CITY!  I've got a little something for you.  It's a knot that ties us together.$"*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `CeladonCity_GameCorner_EventScript_Woman2`)
  - Dialogue (CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck): *"These slot games…  Win or lose, it's only by luck.$"*
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `CeladonCity_GameCorner_EventScript_OldMan`)
  - Dialogue (CeladonCity_GameCorner_Text_SoEasyToGetHooked): *"Games are scary!  It's so easy to get hooked!$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CeladonCity_GameCorner_EventScript_Scientist`)
  - Dialogue (CeladonCity_GameCorner_Text_WantSomeCoins): *"What's up?  Want some COINS?$"*
  - Dialogue (CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy): *"{PLAYER} received 20 COINS  from the nice guy.$"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CeladonCity_GameCorner_EventScript_Gentleman`)
  - Dialogue (CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo): *"Hey, what? You're throwing me off!  Here are some COINS, so shoo!$"*
  - Dialogue (CeladonCity_GameCorner_Text_Received20CoinsFromMan): *"{PLAYER} received 20 COINS  from the man.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `CeladonCity_GameCorner_EventScript_RocketGrunt`)
  - Dialogue (CeladonCity_GameCorner_Text_GruntPostBattle): *"The TEAM ROCKET HIDEOUT might  be discovered!  I better tell BOSS!$"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine0`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_UnusableSlotMachine1`)
  - Text (CeladonCity_GameCorner_Text_OutOfOrder): *"OUT OF ORDER  This is broken.$"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine5`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine6`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine7`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine8`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine9`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine10`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine11`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine12`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine13`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine14`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_UnusableSlotMachine2`)
  - Text (CeladonCity_GameCorner_Text_OutToLunch): *"OUT TO LUNCH  This is reserved.$"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine16`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine17`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_UnusableSlotMachine3`)
  - Text (CeladonCity_GameCorner_Text_SomeonesKeys): *"Someone's keys!  They'll be back.$"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine19`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine20`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_SlotMachine21`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_Poster`)
  - Text (CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt): *"Hey!  A switch behind the poster!?  Let's push it!$"*
- **Sign** (Script: `CeladonCity_GameCorner_EventScript_PhotoPrinter`)
  - Text: *(No local text calls found in script)*
#### CeladonCity_Hotel
**NPCs:**
- **OBJ_EVENT_GFX_OLD_WOMAN** (Script: `CeladonCity_Hotel_EventScript_Receptionist`)
  - Dialogue (CeladonCity_Hotel_Text_ThisHotelIsForPeople): *"POKéMON?  No, this is a hotel for people.  We're full up, unfortunately.$"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `CeladonCity_Hotel_EventScript_Beauty`)
  - Dialogue (CeladonCity_Hotel_Text_OnVacationWithBrotherAndBoyfriend): *"I'm on vacation with my brother and  boyfriend.  CELADON is such a pretty city!$"*
- **OBJ_EVENT_GFX_MAN** (Script: `CeladonCity_Hotel_EventScript_BeautyBoyfriend`)
  - Dialogue (CeladonCity_Hotel_Text_WhyDidSheBringBrother): *"Why?  Why did she bring her brother?$"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `CeladonCity_Hotel_EventScript_BeautyBrother`)
  - Dialogue (CeladonCity_Hotel_Text_SisBroughtMeOnVacation): *"Yippee! I'm on vacation!  My sis brought me along! Awesome!$"*
#### CeladonCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `CeladonCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CeladonCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons): *"A POKé FLUTE awakens sleeping  POKéMON. You know that.  It does so with a sound that only  they can hear.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF`)
  - Dialogue (CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia): *"I rode here from FUCHSIA.  It's an uphill ride on CYCLING  ROAD, so I'm exhausted.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CeladonCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike): *"If I had a BIKE, I would go to  CYCLING ROAD!$"*

---
### Rocket Hideout
#### RocketHideout_B1F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt2`)
  - Dialogue (RocketHideout_B1F_Text_Grunt2PostBattle): *"You're not going to get away with  this, brat!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt1`)
  - Dialogue (RocketHideout_B1F_Text_Grunt1PostBattle): *"Blast it… You're dissing TEAM  ROCKET, aren't you?$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt4`)
  - Dialogue (RocketHideout_B1F_Text_Grunt4PostBattle): *"Okay, I'll talk…  Take the elevator to see my BOSS.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt3`)
  - Dialogue (RocketHideout_B1F_Text_Grunt3PostBattle): *"SILPH SCOPE? Humph!  I don't know where it is.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B1F_EventScript_Grunt5`)
  - Dialogue (RocketHideout_B1F_Text_Grunt5PostBattle): *"Uh-oh, that ruckus somehow opened  the door!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B1F_EventScript_ItemEscapeRope`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B1F_EventScript_ItemHyperPotion`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### RocketHideout_B2F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B2F_EventScript_Grunt`)
  - Dialogue (RocketHideout_B2F_Text_GruntPostBattle): *"The TEAM ROCKET HQ has four  underground floors.  Think you can reach the BOSS?$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemXSpeed`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemMoonStone`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemTM12`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B2F_EventScript_ItemSuperPotion`)
  - Dialogue: *(No local text calls found in script)*
#### RocketHideout_B3F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B3F_EventScript_Grunt2`)
  - Dialogue (RocketHideout_B3F_Text_Grunt2PostBattle): *"Go ahead and go!  But you can't run the elevator  without the LIFT KEY.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B3F_EventScript_Grunt1`)
  - Dialogue (RocketHideout_B3F_Text_Grunt1PostBattle): *"SILPH SCOPE?  Oh, that machine the BOSS stole.  It's here somewhere.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B3F_EventScript_ItemRareCandy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B3F_EventScript_ItemTM21`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B3F_EventScript_ItemBlackGlasses`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### RocketHideout_B4F
**NPCs:**
- **OBJ_EVENT_GFX_GIOVANNI** (Script: `RocketHideout_B4F_EventScript_Giovanni`)
  - Dialogue (RocketHideout_B4F_Text_GiovanniIntro): *"So! I must say, I am impressed you  got here.  TEAM ROCKET captures POKéMON from  around the world.  They're important tools for keeping  our criminal enterprise going.  I am the leader, GIOVANNI!  For your insolence, you will feel a  world of pain!$"*
  - Dialogue (playbgm): *"(Global/External Text: playbgm)"*
  - Dialogue (RocketHideout_B4F_Text_GiovanniPostBattle): *"I see that you raise POKéMON with  utmost care.  A child like you would never  understand what I hope to achieve.  I shall step aside this time!  I hope we meet again…$"*
  - Dialogue (removeobject): *"(Global/External Text: removeobject)"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_SilphScope`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B4F_EventScript_Grunt1`)
  - Dialogue (RocketHideout_B4F_Text_Grunt1PostBattle): *"Oh, no!  I dropped the LIFT KEY!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_LiftKey`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B4F_EventScript_Grunt3`)
  - Dialogue (RocketHideout_B4F_Text_Grunt3PostBattle): *"BOSS!  I'm sorry I failed you!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `RocketHideout_B4F_EventScript_Grunt2`)
  - Dialogue (RocketHideout_B4F_Text_Grunt2PostBattle): *"Do you have something against TEAM  ROCKET?$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_ItemTM49`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_ItemMaxEther`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `RocketHideout_B4F_EventScript_ItemCalcium`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Saffron-Swan City
#### SaffronCity
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt1`)
  - Dialogue (SaffronCity_Text_WhatDoYouWantGetLost): *"What do you want?  Get lost!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt2`)
  - Dialogue (SaffronCity_Text_BossTakeTownForTeamRocket): *"BOSS said he'll take this town  in the name of TEAM ROCKET!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt3`)
  - Dialogue (SaffronCity_Text_DontGetDefiantOrIllHurtYou): *"Don't get defiant!  Or I'll have to hurt you!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt4`)
  - Dialogue (SaffronCity_Text_SaffronBelongsToTeamRocket): *"SAFFRON belongs to TEAM ROCKET!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt5`)
  - Dialogue (SaffronCity_Text_CriminalLifeMakesMeFeelAlive): *"My life as a criminal makes me feel  so alive!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_DoorGuardGrunt`)
  - Dialogue (SaffronCity_Text_ImASecurityGuard): *"I'm a security guard.  Suspicious kids I don't allow in!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt7`)
  - Dialogue (SaffronCity_Text_WeCanExploitMonsAroundWorld): *"With SILPH under control, we can  exploit POKéMON around the world!  We'll get stinking rich, yeahah!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SaffronCity_EventScript_RocketGrunt6`)
  - Dialogue (SaffronCity_Text_WatchWhereYoureWalking): *"Ow!  Watch where you're walking!$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SaffronCity_EventScript_Youngster`)
  - Dialogue (SaffronCity_Text_SafeToGoOutAgain): *"Yeah! TEAM ROCKET is gone!  It's safe to go out again!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SaffronCity_EventScript_WorkerM`)
  - Dialogue (SaffronCity_Text_YouBeatTeamRocket): *"You beat TEAM ROCKET all alone?  That's amazing!$"*
- **OBJ_EVENT_GFX_MAN** (Script: `SaffronCity_EventScript_Man`)
  - Dialogue (SaffronCity_Text_SawRocketBossEscaping): *"I saw the ROCKET BOSS escaping  SILPH's building.$"*
- **OBJ_EVENT_GFX_BOY** (Script: `SaffronCity_EventScript_Boy`)
  - Dialogue (SaffronCity_Text_FlewHereOnPidgeot): *"I flew here on my PIDGEOT when  I read about SILPH.  It's already over?  I missed the media action…$"*
- **OBJ_EVENT_GFX_PIDGEOT** (Script: `SaffronCity_EventScript_Pidgeot`)
  - Dialogue (SaffronCity_Text_Pidgeot): *"PIDGEOT: Bi bibii!$"*
- **OBJ_EVENT_GFX_LASS** (Script: `SaffronCity_EventScript_Lass`)
  - Dialogue (SaffronCity_Text_PeopleComingBackToSaffron): *"People fled from here in droves  when those ROCKETS came.  They should be flocking back to  SAFFRON now.$"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `SaffronCity_EventScript_BattleGirl`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SaffronCity_EventScript_CitySign`)
  - Text (SaffronCity_Text_CitySign): *"SAFFRON-SWAN CITY  Shining, Golden Land of Commerce$"*
- **Sign** (Script: `SaffronCity_EventScript_DojoSign`)
  - Text (SaffronCity_Text_FightingDojo): *"FIGHTING DOJO$"*
- **Sign** (Script: `SaffronCity_EventScript_SilphProductSign`)
  - Text (SaffronCity_Text_SilphsLatestProduct): *"SILPH's latest product!  Release to be determined…$"*
- **Sign** (Script: `SaffronCity_EventScript_TrainerTips2`)
  - Text (SaffronCity_Text_GreatBallImprovedCatchRate): *"TRAINER TIPS  The new GREAT BALL offers improved  catching rates.  Try it on those hard-to-catch  POKéMON.$"*
- **Sign** (Script: `SaffronCity_EventScript_SilphCoSign`)
  - Text (SaffronCity_Text_SilphCoSign): *"SILPH CO. OFFICE BUILDING$"*
- **Sign** (Script: `SaffronCity_EventScript_TrainerTips1`)
  - Text (SaffronCity_Text_FullHealCuresStatus): *"TRAINER TIPS  FULL HEAL cures all ailments like  burns, paralysis, poisoning,\l freezing, and sleep.  It costs a bit more, but it's more  convenient than buying other items.$"*
- **Sign** (Script: `SaffronCity_EventScript_GymSign`)
  - Text (SaffronCity_Text_GymSign): *"SAFFRON-SWAN CITY POKéMON GYM  LEADER: SABRINA\l The Master of PSYCHIC POKéMON!$"*
- **Sign** (Script: `SaffronCity_EventScript_MrPsychicsHouseSign`)
  - Text (SaffronCity_Text_MrPsychicsHouse): *"MR. PSYCHIC'S HOUSE$"*
- **Sign** (Script: `SaffronCity_EventScript_TrainerFanClubSign`)
  - Text (SaffronCity_Text_TrainerFanClubSign): *"POKéMON TRAINER FAN CLUB  Many TRAINERS have scribbled their  names on this sign.$"*
#### SaffronCity_Gym
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Cameron`)
  - Dialogue (SaffronCity_Gym_Text_CameronPostBattle): *"There used to be two POKéMON GYMS  in SAFFRON.  The FIGHTING DOJO next door lost  its GYM status, though.  We simply creamed them when we  decided to have just one GYM.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Johan`)
  - Dialogue (SaffronCity_Gym_Text_JohanPostBattle): *"PSYCHIC POKéMON fear only ghosts  and bugs!$"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Preston`)
  - Dialogue (SaffronCity_Gym_Text_PrestonPostBattle): *"That's right! I used telepathy to  read your mind!$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `SaffronCity_Gym_EventScript_Amanda`)
  - Dialogue (SaffronCity_Gym_Text_AmandaPostBattle): *"In a battle of equals, the one  with the stronger will wins.  If you wish to beat SABRINA, focus  and will yourself to victory.$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `SaffronCity_Gym_EventScript_Stacy`)
  - Dialogue (SaffronCity_Gym_Text_StacyPostBattle): *"I have much to learn still…  I must master PSYCHIC and teach it  to my POKéMON…$"*
- **OBJ_EVENT_GFX_CHANNELER** (Script: `SaffronCity_Gym_EventScript_Tasha`)
  - Dialogue (SaffronCity_Gym_Text_TashaPostBattle): *"I knew that this was going to take  place.$"*
- **OBJ_EVENT_GFX_SABRINA** (Script: `SaffronCity_Gym_EventScript_Sabrina`)
  - Dialogue (SaffronCity_Gym_Text_ExplainTM04): *"TM04 is CALM MIND.  It makes the POKéMON concentrate  to raise both SP. ATK and SP. DEF.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `SaffronCity_Gym_EventScript_Tyron`)
  - Dialogue (SaffronCity_Gym_Text_TyronPostBattle): *"SABRINA just wiped out the KARATE  MASTER next door.$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `SaffronCity_Gym_EventScript_GymGuy`)
  - Dialogue (SaffronCity_Gym_Text_OllieIntro): *"(Global/External Text: SaffronCity_Gym_Text_OllieIntro)"*
**Interactables / Signs:**
- **Sign** (Script: `SaffronCity_Gym_EventScript_GymStatue`)
  - Text (SaffronCity_Gym_Text_GymStatue): *"SAFFRON POKéMON GYM  LEADER: SABRINA  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `SaffronCity_Gym_EventScript_GymStatue`)
  - Text (SaffronCity_Gym_Text_GymStatue): *"SAFFRON POKéMON GYM  LEADER: SABRINA  WINNING TRAINERS:  {RIVAL}$"*
#### SaffronCity_Dojo
**NPCs:**
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Hitoshi`)
  - Dialogue (SaffronCity_Dojo_Text_HitoshiPostBattle): *"The prime fighters across the land  train here.$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Hideki`)
  - Dialogue (SaffronCity_Dojo_Text_HidekiPostBattle): *"Our MASTER is a pro fighter.  Be prepared to lose!$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Aaron`)
  - Dialogue (SaffronCity_Dojo_Text_AaronPostBattle): *"The only thing that frightens us is  psychic power!$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_Mike`)
  - Dialogue (SaffronCity_Dojo_Text_MikePostBattle): *"You wait 'til you see our MASTER!  I'm a small fry compared to him!$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `SaffronCity_Dojo_EventScript_MasterKoichi`)
  - Dialogue (SaffronCity_Dojo_Text_ChoosePrizedFightingMon): *"Indeed, I have lost!  But, I beseech you, do not take  our emblem as your trophy!  In return, I will give you a prized  FIGHTING POKéMON!  Choose whichever one you like!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SaffronCity_Dojo_EventScript_HitmonleeBall`)
  - Dialogue (SaffronCity_Dojo_Text_YouWantHitmonlee): *"You want the hard-kicking  HITMONLEE?$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SaffronCity_Dojo_EventScript_HitmonchanBall`)
  - Dialogue (SaffronCity_Dojo_Text_YouWantHitmonchan): *"You want the piston-punching  HITMONCHAN?$"*
**Interactables / Signs:**
- **Sign** (Script: `SaffronCity_Dojo_EventScript_Statue`)
  - Text (SaffronCity_Dojo_Text_FightingDojo): *"FIGHTING DOJO$"*
- **Sign** (Script: `SaffronCity_Dojo_EventScript_Statue`)
  - Text (SaffronCity_Dojo_Text_FightingDojo): *"FIGHTING DOJO$"*
- **Sign** (Script: `SaffronCity_Dojo_EventScript_LeftScroll`)
  - Text (SaffronCity_Dojo_Text_EnemiesOnEverySide): *"Enemies on every side!$"*
- **Sign** (Script: `SaffronCity_Dojo_EventScript_RightScroll`)
  - Text (SaffronCity_Dojo_Text_GoesAroundComesAround): *"What goes around comes around.$"*
#### SaffronCity_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `SaffronCity_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SaffronCity_Mart_EventScript_Youngster`)
  - Dialogue (SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper): *"MAX REPEL keeps weaker POKéMON  from appearing.  MAX REPEL stays effective longer  than SUPER REPEL.$"*
- **OBJ_EVENT_GFX_LASS** (Script: `SaffronCity_Mart_EventScript_Lass`)
  - Dialogue (SaffronCity_Mart_Text_ReviveIsCostly): *"REVIVE is costly, but it revives  fainted POKéMON!$"*
#### SaffronCity_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame): *"SILPH CO. is widely known to all.  It's a victim of its own fame - it  attracted TEAM ROCKET.$"*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Woman`)
  - Dialogue (SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies): *"POKéMON growth rates differ from  species to species.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `SaffronCity_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets): *"Sigh…  Wouldn't this be great?  If the ELITE FOUR came and  stomped TEAM ROCKET?$"*
- **0** (Script: `SaffronCity_PokemonCenter_1F_EventScript_PokemonJournalSabrina`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `SaffronCity_PokemonCenter_1F_EventScript_PokemonJournalSabrina`)
  - Dialogue: *(No local text calls found in script)*
#### SaffronCity_CopycatsHouse_1F
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad`)
  - Dialogue (SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople): *"My daughter likes to mimic people.  It's rather vexing.  Her mimicry has earned her the  nickname COPYCAT around here.$"*
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom`)
  - Dialogue (SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered): *"My daughter is so self-centered.  She has but a few friends.$"*
- **OBJ_EVENT_GFX_CHANSEY** (Script: `SaffronCity_CopycatsHouse_1F_EventScript_Chansey`)
  - Dialogue (SaffronCity_CopycatsHouse_1F_Text_Chansey): *"CHANSEY: Chaan! Sii!$"*
#### SaffronCity_MrPsychicsHouse
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `SaffronCity_MrPsychicsHouse_EventScript_MrPsychic`)
  - Dialogue (SaffronCity_MrPsychicsHouse_Text_YouWantedThis): *"…Wait! Don't say a word!  You wanted this!$"*
  - Dialogue (SaffronCity_MrPsychicsHouse_Text_ExplainTM29): *"You already know, don't you?  TM29 is PSYCHIC.  It's an attack that may also lower  the target's special stats.$"*

---
### Silph Co.
#### SilphCo_1F
**NPCs:**
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_1F_EventScript_Receptionist`)
  - Dialogue (SilphCo_1F_Text_WelcomePresidentInBoardroom): *"Welcome.  The PRESIDENT is in the boardroom  on 11F.$"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_1F_EventScript_FloorSign`)
  - Text (SilphCo_1F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  1F$"*
#### SilphCo_2F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_2F_EventScript_Grunt2`)
  - Dialogue (SilphCo_2F_Text_Grunt2PostBattle): *"SILPH CO. will be associated with  TEAM ROCKET!$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_2F_EventScript_Jerry`)
  - Dialogue (SilphCo_2F_Text_JerryPostBattle): *"Can you solve the maze in here?  It's not easy, I tell you!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_2F_EventScript_Grunt1`)
  - Dialogue (SilphCo_2F_Text_Grunt1PostBattle): *"Diamond-shaped tiles are teleport  blocks.  They're transporters for this  high-tech building.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_2F_EventScript_Connor`)
  - Dialogue (SilphCo_2F_Text_ConnorPostBattle): *"I work for both SILPH and TEAM  ROCKET.$"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `SilphCo_2F_EventScript_ThunderWaveTutor`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_2F_EventScript_FloorSign`)
  - Text (SilphCo_2F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  2F$"*
#### SilphCo_3F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_3F_EventScript_Grunt`)
  - Dialogue (SilphCo_3F_Text_GruntPostBattle): *"A hint? You can open doors with  a CARD KEY!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_3F_EventScript_WorkerM`)
  - Dialogue (SilphCo_3F_Text_WhatAmIToDo): *"I work for SILPH CO.  What am I to do?$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_3F_EventScript_Jose`)
  - Dialogue (SilphCo_3F_Text_JosePostBattle): *"Humph…  TEAM ROCKET said that if I helped  them, they'd let me study POKéMON.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_3F_EventScript_ItemHyperPotion`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_3F_EventScript_FloorSign`)
  - Text (SilphCo_3F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  3F$"*
#### SilphCo_4F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_4F_EventScript_Grunt2`)
  - Dialogue (SilphCo_4F_Text_Grunt2PostBattle): *"I better tell the BOSS on 11F!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_4F_EventScript_Grunt1`)
  - Dialogue (SilphCo_4F_Text_Grunt1PostBattle): *"Fwahahaha!  My BOSS has been after this place!$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_4F_EventScript_Rodney`)
  - Dialogue (SilphCo_4F_Text_RodneyPostBattle): *"The doors are electronically  locked.  It takes a CARD KEY to open the  doors here.$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_4F_EventScript_WorkerM`)
  - Dialogue (SilphCo_4F_Text_CantYouSeeImHiding): *"Sssh!  Can't you see I'm hiding?$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemMaxRevive`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemEscapeRope`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemFullHeal`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_4F_EventScript_ItemTM41`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_4F_EventScript_FloorSign`)
  - Text (SilphCo_4F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  4F$"*
#### SilphCo_5F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_5F_EventScript_Grunt2`)
  - Dialogue (SilphCo_5F_Text_Grunt2PostBattle): *"Which reminds me.  KOFFING evolves into WEEZING!$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `SilphCo_5F_EventScript_Dalton`)
  - Dialogue (SilphCo_5F_Text_DaltonPostBattle): *"You're only on 5F.  It's a long way to my BOSS!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_5F_EventScript_WorkerM`)
  - Dialogue (SilphCo_5F_Text_RocketsInUproarAboutIntruder): *"TEAM ROCKET is in an uproar over  some intruder.  That's you, right?$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_5F_EventScript_Beau`)
  - Dialogue (SilphCo_5F_Text_BeauPostBattle): *"We worked on the ultimate POKé  BALL which would catch anything.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_5F_EventScript_Grunt1`)
  - Dialogue (SilphCo_5F_Text_Grunt1PostBattle): *"It's not smart to pick a fight with  TEAM ROCKET!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_5F_EventScript_ItemProtein`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_5F_EventScript_ItemTM01`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_5F_EventScript_ItemCardKey`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_5F_EventScript_Scientist`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_PokemonReport3`)
  - Text (SilphCo_5F_Text_SomeMonsEvolveWhenTraded): *"It's a POKéMON REPORT!  Some POKéMON have been confirmed  to evolve when they are traded.$"*
- **Sign** (Script: `SilphCo_5F_EventScript_PokemonReport2`)
  - Text (SilphCo_5F_Text_Over350TechniquesConfirmed): *"It's a POKéMON REPORT!  Over 350 POKéMON techniques have  been confirmed.$"*
- **Sign** (Script: `SilphCo_5F_EventScript_PokemonReport1`)
  - Text (SilphCo_5F_Text_PorygonFirstVRMon): *"It's a POKéMON REPORT!  POKéMON LAB created PORYGON,  the first virtual-reality POKéMON.$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_5F_EventScript_FloorSign`)
  - Text (SilphCo_5F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  5F$"*
#### SilphCo_6F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_6F_EventScript_Grunt1`)
  - Dialogue (SilphCo_6F_Text_Grunt1PostBattle): *"No matter!  My brothers will avenge me!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_6F_EventScript_WorkerM1`)
  - Dialogue (SilphCo_6F_Text_HelpMePlease): *"Oh dear, oh dear.  Help me, please!$"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_6F_EventScript_WorkerF1`)
  - Dialogue (SilphCo_6F_Text_ThatManIsSuchACoward): *"That man next to me…  He's such a coward!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_6F_EventScript_WorkerM2`)
  - Dialogue (SilphCo_6F_Text_TargetedSilphForOurMonProducts): *"They must have targeted SILPH for  our POKéMON products.$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_6F_EventScript_WorkerM3`)
  - Dialogue (SilphCo_6F_Text_RocketsTookOverBuilding): *"The ROCKETS came and took over  the building!$"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_6F_EventScript_WorkerF2`)
  - Dialogue (SilphCo_6F_Text_RocketsTryingToConquerWorld): *"TEAM ROCKET is trying to conquer  the world with POKéMON.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_6F_EventScript_Taylor`)
  - Dialogue (SilphCo_6F_Text_TaylorPostBattle): *"TIKSI BRANCH?  It's in Russian no-man's-land!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_6F_EventScript_ItemHPUp`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_6F_EventScript_ItemXSpecial`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_6F_EventScript_Grunt2`)
  - Dialogue (SilphCo_6F_Text_Grunt2PostBattle): *"If you stand for justice, you  betray us bad guys!$"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_6F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_6F_EventScript_FloorSign`)
  - Text (SilphCo_6F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  6F$"*
#### SilphCo_7F
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_7F_EventScript_LaprasGuy`)
  - Dialogue (SilphCo_7F_Text_HaveMonForSavingUs): *"Oh! Hi! You're not a ROCKET!  You came to save us?\l Why, thank you!  I want you to have this POKéMON  for saving us.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_7F_EventScript_Grunt1`)
  - Dialogue (SilphCo_7F_Text_Grunt1PostBattle): *"Doesn't matter.  My brothers will repay the favor!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_7F_EventScript_Grunt2`)
  - Dialogue (SilphCo_7F_Text_Grunt2PostBattle): *"Go on home before my BOSS gets  ticked off!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_7F_EventScript_Grunt3`)
  - Dialogue (SilphCo_7F_Text_Grunt3PostBattle): *"You won't find my BOSS by just  scurrying around!$"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_7F_EventScript_WorkerF`)
  - Dialogue (SilphCo_7F_Text_ReallyDangerousHere): *"You!  It's really dangerous here!  You came to save me?  You can't!$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_7F_EventScript_WorkerM1`)
  - Dialogue (SilphCo_7F_Text_RocketsAfterMasterBall): *"TEAM ROCKET was after the MASTER  BALL, which catches any POKéMON.$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_7F_EventScript_WorkerM2`)
  - Dialogue (SilphCo_7F_Text_BadIfTeamRocketTookOver): *"It would be bad if TEAM ROCKET  took over SILPH or our POKéMON.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_7F_EventScript_Joshua`)
  - Dialogue (SilphCo_7F_Text_JoshuaPostBattle): *"Despite your age, you are a  skilled TRAINER!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_7F_EventScript_ItemCalcium`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_7F_EventScript_ItemTM08`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_7F_EventScript_FloorSign`)
  - Text (SilphCo_7F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  7F$"*
#### SilphCo_8F
**NPCs:**
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_8F_EventScript_Grunt1`)
  - Dialogue (SilphCo_8F_Text_Grunt1PostBattle): *"If you don't turn back…  I'll call for backup!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_8F_EventScript_Grunt2`)
  - Dialogue (SilphCo_8F_Text_Grunt2PostBattle): *"I'll leave you up to my brothers.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_8F_EventScript_Parker`)
  - Dialogue (SilphCo_8F_Text_ParkerPostBattle): *"So, what do you think of SILPH  BUILDING's maze?$"*
- **OBJ_EVENT_GFX_WORKER_M** (Script: `SilphCo_8F_EventScript_WorkerM`)
  - Dialogue (SilphCo_8F_Text_WonderIfSilphIsFinished): *"I wonder if SILPH is finished…$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_8F_EventScript_ItemIron`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_8F_EventScript_Scientist`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_8F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_8F_EventScript_FloorSign`)
  - Text (SilphCo_8F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  8F$"*
#### SilphCo_9F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_9F_EventScript_Ed`)
  - Dialogue (SilphCo_9F_Text_EdPostBattle): *"Exploiting weak spots does work.  Think about type advantages.$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_9F_EventScript_Grunt2`)
  - Dialogue (SilphCo_9F_Text_Grunt2PostBattle): *"My brothers will avenge me!$"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `SilphCo_9F_EventScript_HealWoman`)
  - Dialogue (SilphCo_9F_Text_YouShouldTakeQuickNap): *"You look tired.  You should take a quick nap.$"*
  - Dialogue (call): *"(Global/External Text: call)"*
  - Dialogue (SilphCo_9F_Text_DontGiveUp): *"Don't give up!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_9F_EventScript_Grunt1`)
  - Dialogue (SilphCo_9F_Text_Grunt1PostBattle): *"If I had started as a TRAINER at  your age…$"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door3`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door4`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door1`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_Door2`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_9F_EventScript_FloorSign`)
  - Text (SilphCo_9F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  9F$"*
#### SilphCo_10F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `SilphCo_10F_EventScript_Travis`)
  - Dialogue (SilphCo_10F_Text_TravisPostBattle): *"Are you satisfied with beating me?  Then go on home!$"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_10F_EventScript_WorkerF`)
  - Dialogue (SilphCo_10F_Text_WaaaImScared): *"Waaaaa!  I'm scared!$"*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_10F_EventScript_Grunt`)
  - Dialogue (SilphCo_10F_Text_GruntPostBattle): *"Nice try, but the boardroom is up  one more floor.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_10F_EventScript_ItemCarbos`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_10F_EventScript_ItemUltraBall`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_10F_EventScript_ItemRareCandy`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_10F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_10F_EventScript_FloorSign`)
  - Text (SilphCo_10F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  10F$"*
#### SilphCo_11F
**NPCs:**
- **OBJ_EVENT_GFX_OLD_MAN_2** (Script: `SilphCo_11F_EventScript_President`)
  - Dialogue (SilphCo_11F_Text_ObtainedFig): *"{PLAYER} rescued FIG the Shiny dog!$"*
  - Dialogue (waitfanfare): *"(Global/External Text: waitfanfare)"*
  - Dialogue (SilphCo_11F_Text_ThatsOurSecretPrototype): *"PRESIDENT: Take good care of FIG.  She's been through a lot with those  awful TEAM ROCKET people.  I'm sure she'll be much happier  traveling with you!$"*
- **OBJ_EVENT_GFX_WORKER_F** (Script: `SilphCo_11F_EventScript_Secretary`)
  - Dialogue (SilphCo_11F_Text_ThanksForRescuingUs): *"SECRETARY: Thank you for rescuing  all of us.  We, from the PRESIDENT down,  are indebted to you.$"*
- **OBJ_EVENT_GFX_GIOVANNI** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_11F_EventScript_Grunt1`)
  - Dialogue (SilphCo_11F_Text_Grunt1PostBattle): *"Watch your step…  My BOSS likes his POKéMON tough!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SilphCo_11F_EventScript_ItemZinc`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKET_M** (Script: `SilphCo_11F_EventScript_Grunt2`)
  - Dialogue (SilphCo_11F_Text_Grunt2PostBattle): *"So, you want to see my BOSS?$"*
**Interactables / Signs:**
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_11F_EventScript_Door`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SilphCo_11F_EventScript_FloorSign`)
  - Text (SilphCo_11F_Text_FloorSign): *"SILPH CO. HEAD OFFICE  11F$"*

---
### Route 19
#### Route19
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_M_LAND** (Script: `Route19_EventScript_Reece`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_LAND** (Script: `Route19_EventScript_Richard`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Tony`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Matthew`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Douglas`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_David`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route19_EventScript_Axle`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Alice`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Connie`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Anya`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route19_EventScript_Lia`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_TUBER_M_WATER** (Script: `Route19_EventScript_Luc`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route19_EventScript_RouteSign`)
  - Text (Route19_Text_RouteSign): *"SEA ROUTE 19  FO-SHEAR-IA - SEAFOAM ISLANDS$"*
#### Route19_UnusedHouse

---
### Route 20
#### Route20
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Melissa`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route20_EventScript_Missy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Nora`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCKER** (Script: `Route20_EventScript_Roger`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route20_EventScript_Dean`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `Route20_EventScript_Irene`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route20_EventScript_Barry`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route20_EventScript_Darrin`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Shirley`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route20_EventScript_Tiffany`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `Route20_EventScript_Camper`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `Route20_EventScript_SeafoamIslandsSign`)
  - Text (Route20_Text_SeafoamIslands): *"SEAFOAM ISLANDS$"*
- **Sign** (Script: `Route20_EventScript_SeafoamIslandsSign`)
  - Text (Route20_Text_SeafoamIslands): *"SEAFOAM ISLANDS$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Seafoam Islands
#### SeafoamIslands_1F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_1F_EventScript_ItemIceHeal`)
  - Dialogue: *(No local text calls found in script)*
#### SeafoamIslands_B1F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B1F_EventScript_ItemWaterStone`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B1F_EventScript_ItemRevive`)
  - Dialogue: *(No local text calls found in script)*
#### SeafoamIslands_B2F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B2F_EventScript_ItemBigPearl`)
  - Dialogue: *(No local text calls found in script)*
#### SeafoamIslands_B3F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### SeafoamIslands_B4F
**NPCs:**
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_ARTICUNO** (Script: `SeafoamIslands_B4F_EventScript_Articuno`)
  - Dialogue (Text_Gyaoo): *"(Global/External Text: Text_Gyaoo)"*
  - Dialogue (waitmoncry): *"(Global/External Text: waitmoncry)"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `SeafoamIslands_B4F_EventScript_ItemUltraBall`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `SeafoamIslands_B4F_EventScript_FastCurrentSign`)
  - Text (SeafoamIslands_B4F_Text_DangerFastCurrent): *"DANGER  Fast current!$"*
- **Sign** (Script: `SeafoamIslands_B4F_EventScript_BoulderHintSign`)
  - Text (SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow): *"Hint: Boulders might change the  flow of water.$"*

---
### Cinna-Bella Island
#### CinnabarIsland
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CinnabarIsland_EventScript_Woman`)
  - Dialogue (CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab): *"CINNABAR GYM's BLAINE is quite the  odd fellow.  He's lived on the island since way  before the LAB was built.$"*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `CinnabarIsland_EventScript_OldMan`)
  - Dialogue (CinnabarIsland_Text_ScientistsExperimentInMansion): *"Scientists conduct experiments   in the burned-out building.  You know, the one they call the  POKéMON MANSION.$"*
- **OBJ_EVENT_GFX_BILL** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
**Interactables / Signs:**
- **Sign** (Script: `CinnabarIsland_EventScript_IslandSign`)
  - Text (CinnabarIsland_Text_IslandSign): *"CINNA-BELLA ISLAND  The Fiery Town of Burning Desire$"*
- **Sign** (Script: `CinnabarIsland_EventScript_PokemonLabSign`)
  - Text (CinnabarIsland_Text_PokemonLab): *"POKéMON LAB$"*
- **Sign** (Script: `CinnabarIsland_EventScript_GymSign`)
  - Text (CinnabarIsland_Text_GymSign): *"CINNA-BELLA ISLAND POKéMON GYM  LEADER: BLAINE\l The Hotheaded Quiz Master!$"*
- **Sign** (Script: `CinnabarIsland_EventScript_PokemonLabSign`)
  - Text (CinnabarIsland_Text_PokemonLab): *"POKéMON LAB$"*
#### CinnabarIsland_Gym
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `CinnabarIsland_Gym_EventScript_Quinn`)
  - Dialogue (CinnabarIsland_Gym_Text_QuinnPostBattle): *"I get this uncontrollable urge to  steal other people's POKéMON.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Erik`)
  - Dialogue (CinnabarIsland_Gym_Text_ErikPostBattle): *"Fire, or to be more precise,  combustion…  …Oxygen in the air…  Blah, blah, blah, blah…$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Avery`)
  - Dialogue (CinnabarIsland_Gym_Text_AveryPostBattle): *"My theories are too complicated  for you to understand.$"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `CinnabarIsland_Gym_EventScript_Ramon`)
  - Dialogue (CinnabarIsland_Gym_Text_RamonPostBattle): *"I wish there were a thief POKéMON.  I'd use that!$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Derek`)
  - Dialogue (CinnabarIsland_Gym_Text_DerekPostBattle): *"Our LEADER, BLAINE, became lost  in the mountains but good.  Night fell when a fiery bird  POKéMON appeared.  Its light allowed BLAINE to find  his way down safely.$"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `CinnabarIsland_Gym_EventScript_Dusty`)
  - Dialogue (CinnabarIsland_Gym_Text_DustyPostBattle): *"PONYTA, NINETALES…  Those are popular FIRE POKéMON.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Gym_EventScript_Zac`)
  - Dialogue (CinnabarIsland_Gym_Text_ZacPostBattle): *"Water beats fire, of course.  But fire melts ice, so the FIRE  type beats ICE-type POKéMON.$"*
- **OBJ_EVENT_GFX_BLAINE** (Script: `CinnabarIsland_Gym_EventScript_Blaine`)
  - Dialogue (CinnabarIsland_Gym_Text_BlainePostBattle): *"TM38 contains FIRE BLAST.  Teach it to FIRE-type POKéMON.  VULPIX or CHARMELEON would be  ideal for that move.$"*
- **OBJ_EVENT_GFX_BLUE** (Script: `CinnabarIsland_Gym_EventScript_GymGuy`)
  - Dialogue (CinnabarIsland_Gym_Text_OllieIntro): *"OLLIE: It's boiling in here! I hope  you're doing okay, SHUKTI.  I've got a little something for you.  Something luxurious, just for you.$"*
**Interactables / Signs:**
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_GymStatue`)
  - Text (CinnabarIsland_Gym_Text_GymStatue): *"CINNABAR POKéMON GYM  LEADER: BLAINE  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_GymStatue`)
  - Text (CinnabarIsland_Gym_Text_GymStatue): *"CINNABAR POKéMON GYM  LEADER: BLAINE  WINNING TRAINERS:  {RIVAL}$"*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quz1Left`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quz1Right`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz2Left`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz2Right`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz3Left`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz3Right`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz4Left`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz4Right`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz5Left`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz5Right`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz6Left`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_Quiz6Right`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `CinnabarIsland_Gym_EventScript_BlaineFujiPhoto`)
  - Text: *(No local text calls found in script)*
#### CinnabarIsland_Mart
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `CinnabarIsland_Mart_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `CinnabarIsland_Mart_EventScript_Woman`)
  - Dialogue (CinnabarIsland_Mart_Text_DontTheyHaveXAttack): *"Don't they have X ATTACK?  I like it because it raises the  ATTACK stat in battle.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_Mart_EventScript_Scientist`)
  - Dialogue (CinnabarIsland_Mart_Text_ExtraItemsNeverHurt): *"It never hurts to have extra items.  You never know what might happen.$"*
#### CinnabarIsland_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF`)
  - Dialogue (CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked): *"I came to visit the CINNABAR GYM,  but the door is locked tight.  There should be a key for it  somewhere.  Could it be in that burned-out  mansion?  The GYM LEADER's friend used to  live there, they say.$"*
- **OBJ_EVENT_GFX_GENTLEMAN** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman`)
  - Dialogue (CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom): *"Do you have lots of friends?  Linking up with the usual friends  is fun, of course.  But how about visiting the  UNION ROOM every so often?  Who knows, you may end up making  new friends.  I think it would be worth your time  to check the UNION ROOM.$"*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Youngster`)
  - Dialogue (CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves): *"POKéMON can still learn techniques  after canceling evolution.  Evolution can wait until new moves  have been learned.$"*
- **0** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_PokemonJournalMrFuji`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_PokemonJournalMrFuji`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BILL** (Script: `CinnabarIsland_PokemonCenter_1F_EventScript_Bill`)
  - Dialogue (CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland): *"BILL: Hey, you kept me waiting!  Ready to set sail to ONE ISLAND?$"*
  - Dialogue (CinnabarIsland_PokemonCenter_1F_Text_LetsGo): *"Well, that's it.  Let's go!$"*
  - Dialogue (playbgm): *"(Global/External Text: playbgm)"*
#### CinnabarIsland_PokemonLab_Entrance
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist`)
  - Dialogue (CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively): *"We study POKéMON extensively  every day.  People often bring us rare POKéMON  for examination.$"*
**Interactables / Signs:**
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto`)
  - Text (CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji): *"A photo of the LAB's founder…  DR. FUJI?!$"*
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign`)
  - Text (CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign): *"POKéMON LAB  Meeting Room$"*
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign`)
  - Text (CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign): *"POKéMON LAB  R & D Room$"*
- **Sign** (Script: `CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign`)
  - Text (CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign): *"POKéMON LAB  Testing Room$"*

---
### Pokémon Mansion
#### PokemonMansion_1F
**NPCs:**
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PokemonMansion_1F_EventScript_Ted`)
  - Dialogue (PokemonMansion_1F_Text_TedPostBattle): *"A key? I don't know what you're  talking about.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_1F_EventScript_ItemCarbos`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_1F_EventScript_ItemEscapeRope`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_1F_EventScript_ItemProtein`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_YOUNGSTER** (Script: `PokemonMansion_1F_EventScript_Johnson`)
  - Dialogue (PokemonMansion_1F_Text_JohnsonPostBattle): *"I was exploring here by myself,  but I feel spooked.  I ought to go soon.$"*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_1F_EventScript_Statue`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### PokemonMansion_2F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `PokemonMansion_2F_EventScript_Arnie`)
  - Dialogue (PokemonMansion_1F_Text_ArniePostBattle): *"The switches here open and close  alternating sets of doors.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_2F_EventScript_ItemCalcium`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_2F_EventScript_ItemZinc`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_2F_EventScript_ItemHPUp`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_2F_EventScript_Statue`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `PokemonMansion_2F_EventScript_DiaryJuly10th`)
  - Text (PokemonMansion_1F_Text_ChristenedDiscoveredMonMew): *"Diary: July 10  We christened the newly discovered\l POKéMON, MEW.$"*
- **Sign** (Script: `PokemonMansion_2F_EventScript_DiaryJuly5th`)
  - Text (PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle): *"Diary: July 5  Guyana, South America  A new POKéMON was discovered deep  in the jungle.$"*
#### PokemonMansion_3F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `PokemonMansion_3F_EventScript_Simon`)
  - Dialogue (PokemonMansion_1F_Text_SimonPostBattle): *"I wonder where my partner went.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PokemonMansion_3F_EventScript_Braydon`)
  - Dialogue (PokemonMansion_1F_Text_BraydonPostBattle): *"So, you're stuck?  Try jumping off over there!$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_3F_EventScript_ItemMaxPotion`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_3F_EventScript_ItemIron`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_3F_EventScript_DiaryFeb6th`)
  - Text (PokemonMansion_1F_Text_MewGaveBirthToMewtwo): *"Diary: Feb. 6  MEW gave birth.  We named the newborn MEWTWO.$"*
- **Sign** (Script: `PokemonMansion_3F_EventScript_Statue`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### PokemonMansion_B1F
**NPCs:**
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemTM22`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `PokemonMansion_B1F_EventScript_Lewis`)
  - Dialogue (PokemonMansion_B1F_Text_LewisPostBattle): *"You can find stuff lying around.  The residents must've left them.$"*
- **OBJ_EVENT_GFX_SCIENTIST** (Script: `PokemonMansion_B1F_EventScript_Ivan`)
  - Dialogue (PokemonMansion_B1F_Text_IvanPostBattle): *"I like it here.  It's conducive to my studies.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemTM14`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemFullRestore`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `PokemonMansion_B1F_EventScript_ItemSecretKey`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `PokemonMansion_B1F_EventScript_DiarySep1st`)
  - Text (PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful): *"Diary: Sept. 1  MEWTWO is far too powerful.  We have failed to curb its vicious  tendencies…$"*
- **Sign** (Script: `PokemonMansion_B1F_EventScript_Statue`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `PokemonMansion_B1F_EventScript_Statue`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Route 21
#### Route21_North
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_North_EventScript_Ronald`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_North_EventScript_Wade`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_North_EventScript_Spencer`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `Route21_North_EventScript_Lil`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_TUBER_M_WATER** (Script: `Route21_North_EventScript_Ian`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FAT_MAN** (Script: `None`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### Route21_South
**NPCs:**
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_South_EventScript_Claude`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FISHER** (Script: `Route21_South_EventScript_Nolan`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_South_EventScript_Jack`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_South_EventScript_Jerome`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `Route21_South_EventScript_Roland`)
  - Dialogue: *(No local text calls found in script)*

---
### One Island
#### OneIsland
**NPCs:**
- **OBJ_EVENT_GFX_BILL** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_OLD_MAN_1** (Script: `OneIsland_EventScript_OldMan`)
  - Dialogue (OneIsland_Text_LuckyToHaveCelioHere): *"Here we are on an island smack in  the middle of nowhere.  We're lucky to have an upstanding  young man like CELIO here.  My granddaughter was in a tizzy  over CELIO's friend.  Something about a famous  POKéMANIAC?  I'm not sure what that means, but  CELIO is quite the man!$"*
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `OneIsland_EventScript_BaldingMan`)
  - Dialogue (OneIsland_Text_IsntWarmClimateHereGreat): *"Hi, sight-seeing, are you?  Isn't the warm climate here great?$"*
**Interactables / Signs:**
- **Sign** (Script: `OneIsland_EventScript_IslandSign`)
  - Text (OneIsland_Text_IslandSign): *"ONE ISLAND  Friends Gather at Knot Island$"*
- **Sign** (Script: `OneIsland_EventScript_PokemonNetCenterSign`)
  - Text (OneIsland_Text_PokemonNetCenterSign): *"Expanding the POKéMON World!  POKéMON NET CENTER$"*
#### OneIsland_Harbor
**NPCs:**
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_SAILOR** (Script: `OneIsland_Harbor_EventScript_Sailor`)
  - Dialogue (Text_WhereDoYouWantToSail): *"(Global/External Text: Text_WhereDoYouWantToSail)"*
  - Dialogue (setvar): *"(Global/External Text: setvar)"*
#### OneIsland_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_NURSE** (Script: `OneIsland_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BILL** (Script: `OneIsland_PokemonCenter_1F_EventScript_Bill`)
  - Dialogue (OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis): *"Hmm…  How about we try this like this…$"*
- **OBJ_EVENT_GFX_CELIO** (Script: `OneIsland_PokemonCenter_1F_EventScript_Celio`)
  - Dialogue (OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost): *"I'm sorry for taking up so much of  BILL's time.  I'm also sorry for being such a   poor host on your visit here.$"*
  - Dialogue (applymovement): *"(Global/External Text: applymovement)"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `OneIsland_PokemonCenter_1F_EventScript_LittleBoy`)
  - Dialogue (OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt): *"Oh, you're a stranger here!  Hi! Where did you come from?  …MILL TOWN?  I don't know it!$"*
- **OBJ_EVENT_GFX_HIKER** (Script: `OneIsland_PokemonCenter_1F_EventScript_Hiker`)
  - Dialogue (OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland): *"On this island, there's an enormous  volcano.  It hasn't erupted lately, so why  not enjoy a hike?$"*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_PokemonCenter_1F_EventScript_BattleGirl`)
  - Dialogue (OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend): *"I wish I could trade POKéMON with  my boyfriend who lives far away…$"*
**Interactables / Signs:**
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
- **Sign** (Script: `OneIsland_PokemonCenter_1F_EventScript_NetworkMachine`)
  - Text (OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment): *"Network Machine  Link Level 0  …POKéMON Storage System under  adjustment…$"*
#### OneIsland_TreasureBeach
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `OneIsland_TreasureBeach_EventScript_Amara`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BOY** (Script: `OneIsland_TreasureBeach_EventScript_Boy`)
  - Dialogue (OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach): *"Good things get washed up by the  ocean current onto this beach.  That's why I often come here for  some beachcombing.$"*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### OneIsland_KindleRoad
**NPCs:**
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `OneIsland_KindleRoad_EventScript_Maria`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_LAND** (Script: `OneIsland_KindleRoad_EventScript_Abigail`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_WATER** (Script: `OneIsland_KindleRoad_EventScript_Finn`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_M_LAND** (Script: `OneIsland_KindleRoad_EventScript_Garrett`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_FISHER** (Script: `OneIsland_KindleRoad_EventScript_Tommy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_KindleRoad_EventScript_Sharon`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_KindleRoad_EventScript_Tanya`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `OneIsland_KindleRoad_EventScript_Shea`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `OneIsland_KindleRoad_EventScript_Hugh`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CAMPER** (Script: `OneIsland_KindleRoad_EventScript_Bryce`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PICNICKER** (Script: `OneIsland_KindleRoad_EventScript_Claire`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `OneIsland_KindleRoad_EventScript_Mik`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BATTLE_GIRL** (Script: `OneIsland_KindleRoad_EventScript_Kia`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ROCK_SMASH_ROCK** (Script: `EventScript_RockSmash`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `OneIsland_KindleRoad_EventScript_ItemEther`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `OneIsland_KindleRoad_EventScript_ItemMaxRepel`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `OneIsland_KindleRoad_EventScript_ItemCarbos`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `OneIsland_KindleRoad_EventScript_EmberSpaSign`)
  - Text (OneIsland_KindleRoad_Text_EmberSpaSign): *"Light the Fire in Your Heart!  EMBER SPA$"*
- **Sign** (Script: `OneIsland_KindleRoad_EventScript_RouteSign`)
  - Text (OneIsland_KindleRoad_Text_RouteSign): *"This is KINDLE ROAD.  Go straight for MT. EMBER.$"*

---
### Two Island
#### TwoIsland
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `TwoIsland_EventScript_Clerk`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `TwoIsland_EventScript_Woman`)
  - Dialogue (TwoIsland_Text_ShopkeepersBrotherWorksGameCorner): *"The shopkeeper's brother took  a job at the GAME CORNER.  He's trying to pull together money  so they can buy more merchandise.$"*
- **OBJ_EVENT_GFX_BEAUTY** (Script: `TwoIsland_EventScript_Beauty`)
  - Dialogue (TwoIsland_Text_BrunoCameToIslandWhileBack): *"Listen, listen.  Did you know?  A famous TRAINER came to the  ISLAND a little while back.  He's one of the ELITE FOUR.  His name is BRUNO.  He went away disappointed when he  found out that they were all sold\l out of Rage Candybars.$"*
- **OBJ_EVENT_GFX_SAILOR** (Script: `TwoIsland_EventScript_Sailor`)
  - Dialogue (TwoIsland_Text_FellowMovedFromCeladonCity): *"That fellow there, he moved here  from SAL-ON CITY.  He started up a shop with his  younger brother.  You have to wonder if he knew what  he was getting into.$"*
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `TwoIsland_EventScript_SuperNerd`)
  - Dialogue (TwoIsland_Text_BuyRareItemsHere): *"The discerning TRAINER knows to  buy rare items here!$"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `TwoIsland_EventScript_ItemRevive`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `TwoIsland_EventScript_LittleBoy`)
  - Dialogue (TwoIsland_Text_HaveYouTriedJumpingGame): *"Boing! Boing!  Have you tried the jumping game?  The POKéMON you can enter…  Boing!  Some go boing!  And some go boooooooing!  Did you know that?  Boing!$"*
- **OBJ_EVENT_GFX_BOY** (Script: `TwoIsland_EventScript_Boy`)
  - Dialogue (TwoIsland_Text_OldWomanLivesOutOnCape): *"There's an old woman who lives in  a cottage out on the cape.  She gives the eye to POKéMON.  It's a bit unnerving.$"*
**Interactables / Signs:**
- **Sign** (Script: `TwoIsland_EventScript_IslandSign`)
  - Text (TwoIsland_Text_IslandSign): *"TWO ISLAND  Boon Island for Two$"*
- **Sign** (Script: `TwoIsland_EventScript_JoyfulGameCornerSign`)
  - Text (TwoIsland_Text_JoyfulGameCornerSign): *"Skip & Chomp!  Joyful GAME CORNER$"*
- **Sign** (Script: `TwoIsland_EventScript_FastCurrentSign`)
  - Text (TwoIsland_Text_DangerFastCurrent): *"DANGER! FAST CURRENT!  Fishing and surfing prohibited!$"*
#### TwoIsland_Harbor
**NPCs:**
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_SAILOR** (Script: `TwoIsland_Harbor_EventScript_Sailor`)
  - Dialogue (Text_WhereDoYouWantToSail): *"(Global/External Text: Text_WhereDoYouWantToSail)"*
  - Dialogue (setvar): *"(Global/External Text: setvar)"*
#### TwoIsland_JoyfulGameCorner
**NPCs:**
- **OBJ_EVENT_GFX_BALDING_MAN** (Script: `TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy`)
  - Dialogue (TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland): *"Hey, but listen! I'm begging you,  you have to go to THREE ISLAND.  If anything were to happen to my  LOSTELLE…  My place is the house with the red  roof on THREE ISLAND.  She may just show up late here,  so I can't run off anywhere.  That's why I have to get you to do  me this big favor.$"*
- **OBJ_EVENT_GFX_BIKER** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `TwoIsland_JoyfulGameCorner_EventScript_Lostelle`)
  - Dialogue (TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool): *"Listen, listen!  Please show me you being cool  again!$"*
- **OBJ_EVENT_GFX_MAN** (Script: `TwoIsland_JoyfulGameCorner_EventScript_InfoMan`)
  - Dialogue (TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday): *"I'm sorry.  We're not running any games today.$"*
**Interactables / Signs:**
- **Sign** (Script: `TwoIsland_JoyfulGameCorner_EventScript_ShowPokemonJumpRecords`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `TwoIsland_JoyfulGameCorner_EventScript_ShowDodrioBerryPickingRecords`)
  - Text: *(No local text calls found in script)*
#### TwoIsland_CapeBrink
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*

---
### Three Island
#### ThreeIsland
**NPCs:**
- **OBJ_EVENT_GFX_MAN** (Script: `ThreeIsland_EventScript_AntiBiker1`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_MAN** (Script: `ThreeIsland_EventScript_AntiBiker2`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_EventScript_ItemZinc`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_WOMAN_1** (Script: `ThreeIsland_EventScript_Woman`)
  - Dialogue (ThreeIsland_Text_WouldntWantToSeeBikersHereAgain): *"THREE ISLAND is actually the most  populous of the islands here.  Still, it could be less sleepy.  But I wouldn't want to see goons  like those BIKERS here again.$"*
- **OBJ_EVENT_GFX_LITTLE_BOY** (Script: `ThreeIsland_EventScript_LittleBoy`)
  - Dialogue (ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame): *"I'm going to train my DODUO in the  BERRY FOREST.  When it evolves, I'm going to play  a game on TWO ISLAND.$"*
- **OBJ_EVENT_GFX_DODUO** (Script: `ThreeIsland_EventScript_Doduo`)
  - Dialogue (ThreeIsland_Text_Doduo): *"DODUO: Gigiih!$"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_EventScript_Biker6`)
  - Dialogue (ThreeIsland_Text_IslandBelongsToUs): *"Hyahoo!  From this day on, this island  belongs to us!$"*
**Interactables / Signs:**
- **Sign** (Script: `ThreeIsland_EventScript_IslandSign`)
  - Text (ThreeIsland_Text_IslandSign): *"THREE ISLAND  Kin Island of Family Bonding$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### ThreeIsland_Harbor
**NPCs:**
- **OBJ_EVENT_GFX_SEAGALLOP** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_SAILOR** (Script: `ThreeIsland_Harbor_EventScript_Sailor`)
  - Dialogue (Text_WhereDoYouWantToSail): *"(Global/External Text: Text_WhereDoYouWantToSail)"*
  - Dialogue (setvar): *"(Global/External Text: setvar)"*
#### ThreeIsland_Port
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_3** (Script: `ThreeIsland_Port_EventScript_Woman`)
  - Dialogue (ThreeIsland_Port_Text_IllCallThePolice): *"Aiyeeh!  Wh-who are you?!  I… I'll call the police!$"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_Port_EventScript_Biker1`)
  - Dialogue (ThreeIsland_Port_Text_WereKantoRiderFederation): *"We're the KANTO RIDER FEDERATION!  Vroom! Vavavavooom! Vroom!  My bike's wimpy, so I have to  make exhaust noises myself!$"*
- **OBJ_EVENT_GFX_BIKER** (Script: `ThreeIsland_Port_EventScript_Biker2`)
  - Dialogue (ThreeIsland_Port_Text_ForkOverMoney): *"Hey, hey, lady!  Fork over some spending money!$"*
#### ThreeIsland_BerryForest
**NPCs:**
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ThreeIsland_BerryForest_EventScript_Lostelle`)
  - Dialogue (ThreeIsland_BerryForest_Text_HelpScaryPokemon): *"LOSTELLE: Whimper… Sniff…  Oh! Please, help!  A scary POKéMON appeared there  a little while ago.  It kept scaring.  It made LOSTELLE scared.  I'm too scared to move!  But I want to go home…$"*
  - Dialogue (ThreeIsland_BerryForest_Text_HereItComesAgain): *"Oh! Here it comes again!  No! Go away! It's scaring me!  Waaaaaaah!  I want my daddy!$"*
  - Dialogue (ThreeIsland_BerryForest_Text_ThankYouHaveThis): *"Ohh! That was so scary!  Thank you!  LOSTELLE came to pick some  BERRIES.  You can have this!$"*
  - Dialogue (ThreeIsland_BerryForest_Text_LetsGoHome): *"What's your name?  LOSTELLE's scared, so can I go  with you to my daddy's house?  Okay!  Let's go home!$"*
  - Dialogue (setflag): *"(Global/External Text: setflag)"*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_BerryForest_EventScript_ItemMaxEther`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_BerryForest_EventScript_ItemFullHeal`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `ThreeIsland_BerryForest_EventScript_ItemMaxElixir`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `ThreeIsland_BerryForest_EventScript_BewareSign`)
  - Text (ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons): *"Beware of wild, BERRY-loving  POKéMON!$"*
- **Sign** (Script: `ThreeIsland_BerryForest_EventScript_WelcomeSign`)
  - Text (ThreeIsland_BerryForest_Text_WelcomeToBerryForest): *"Welcome to the BERRY FOREST  Be friendly and share BERRIES with  others and POKéMON.$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### ThreeIsland_BondBridge
**NPCs:**
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `ThreeIsland_BondBridge_EventScript_Nikki`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_WOMAN_2** (Script: `ThreeIsland_BondBridge_EventScript_Violet`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_TUBER_F** (Script: `ThreeIsland_BondBridge_EventScript_Amira`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_TUBER_F** (Script: `ThreeIsland_BondBridge_EventScript_Alexis`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_SWIMMER_F_WATER** (Script: `ThreeIsland_BondBridge_EventScript_Tisha`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ThreeIsland_BondBridge_EventScript_Joy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_LITTLE_GIRL** (Script: `ThreeIsland_BondBridge_EventScript_Meg`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_CUT_TREE** (Script: `EventScript_CutTree`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Sign** (Script: `ThreeIsland_BondBridge_EventScript_BerryForestSign`)
  - Text (ThreeIsland_BondBridge_Text_BerryForestAhead): *"BERRY FOREST AHEAD$"*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `ThreeIsland_BondBridge_EventScript_BondBridgeSign`)
  - Text (ThreeIsland_BondBridge_Text_BondBridgeSign): *"BOND BRIDGE  Please be quiet when crossing.  BERRY FOREST AHEAD$"*

---
### Route 22
#### Route22
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
**Interactables / Signs:**
- **Sign** (Script: `Route22_EventScript_LeagueGateSign`)
  - Text (Route22_Text_LeagueGateSign): *"POKéMON LEAGUE  Front Gate$"*

---
### Route 23
#### Route23
**NPCs:**
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_CascadeBadgeGuard`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_ThunderBadgeGuard`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_RainbowBadgeGuard`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_SoulBadgeGuard`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_MarshBadgeGuard`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_VolcanoBadgeGuard`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_POLICEMAN** (Script: `Route23_EventScript_EarthBadgeGuard`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Sign** (Script: `Route23_EventScript_VictoryRoadGateSign`)
  - Text (Route23_Text_VictoryRoadGateSign): *"VICTORY ROAD GATE -  POKéMON LEAGUE$"*

---
### Victory Road
#### VictoryRoad_1F
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_1F_EventScript_Rolando`)
  - Dialogue (VictoryRoad_1F_Text_RolandoPostBattle): *"Tch!  I concede, you are better than I!$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_1F_EventScript_Naomi`)
  - Dialogue (VictoryRoad_1F_Text_NaomiPostBattle): *"I never wanted to lose to anybody,  especially to a younger kid…$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_1F_EventScript_ItemRareCandy`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_1F_EventScript_ItemTM02`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
**Interactables / Signs:**
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
- **Hidden_item** (Script: `None`)
  - Text: *(No local text calls found in script)*
#### VictoryRoad_2F
**NPCs:**
- **OBJ_EVENT_GFX_SUPER_NERD** (Script: `VictoryRoad_2F_EventScript_Dawson`)
  - Dialogue (VictoryRoad_2F_Text_DawsonPostBattle): *"I can beat you when it comes to  knowledge about POKéMON!$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `VictoryRoad_2F_EventScript_Daisuke`)
  - Dialogue (VictoryRoad_2F_Text_DaisukePostBattle): *"If you get stuck, try moving some  boulders around.$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `VictoryRoad_2F_EventScript_Nelson`)
  - Dialogue (VictoryRoad_2F_Text_NelsonPostBattle): *"{RIVAL} also came through here.$"*
- **OBJ_EVENT_GFX_MAN** (Script: `VictoryRoad_2F_EventScript_Vincent`)
  - Dialogue (VictoryRoad_2F_Text_VincentPostBattle): *"You earned the right to be on  VICTORY ROAD…$"*
- **OBJ_EVENT_GFX_ROCKER** (Script: `VictoryRoad_2F_EventScript_Gregory`)
  - Dialogue (VictoryRoad_2F_Text_GregoryPostBattle): *"Many TRAINERS give up their  challenge here and go home.$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemGuardSpec`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemTM07`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemFullHeal`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_2F_EventScript_ItemTM37`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_2F_EventScript_DoubleEdgeTutor`)
  - Dialogue: *(No local text calls found in script)*
#### VictoryRoad_3F
**NPCs:**
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_3F_EventScript_George`)
  - Dialogue (VictoryRoad_3F_Text_GeorgePostBattle): *"So, it was you who beat GIOVANNI  of TEAM ROCKET?$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_3F_EventScript_Alexa`)
  - Dialogue (VictoryRoad_3F_Text_AlexaPostBattle): *"By fighting tough battles, you get  stronger.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_3F_EventScript_Colby`)
  - Dialogue (VictoryRoad_3F_Text_ColbyPostBattle): *"All TRAINERS here are headed to  the POKéMON LEAGUE.  Don't let down your guard.$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_3F_EventScript_Caroline`)
  - Dialogue (VictoryRoad_3F_Text_CarolinePostBattle): *"You showed me just how good  I was…$"*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_3F_EventScript_ItemMaxRevive`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_ITEM_BALL** (Script: `VictoryRoad_3F_EventScript_ItemTM50`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_PUSHABLE_BOULDER** (Script: `EventScript_StrengthBoulder`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `VictoryRoad_3F_EventScript_Ray`)
  - Dialogue (VictoryRoad_3F_Text_RayPostBattle): *"RAY: You've beaten us.  Greatness remains elusive…$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `VictoryRoad_3F_EventScript_Tyra`)
  - Dialogue (VictoryRoad_3F_Text_TyraPostBattle): *"TYRA: You've taught me that power  can be infinite in shape and form.$"*

---
### In-Dye-Go Plateau
#### IndigoPlateau_Exterior
**NPCs:**
- **OBJ_EVENT_GFX_BLUE** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
- **OBJ_EVENT_GFX_PROF_OAK** (Script: `0x0`)
  - Dialogue: *(No script assigned)*
#### IndigoPlateau_PokemonCenter_1F
**NPCs:**
- **OBJ_EVENT_GFX_CLERK** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_Clerk`)
  - Dialogue (Text_MayIHelpYou): *"(Global/External Text: Text_MayIHelpYou)"*
  - Dialogue (pokemart): *"(Global/External Text: pokemart)"*
  - Dialogue (Text_PleaseComeAgain): *"(Global/External Text: Text_PleaseComeAgain)"*
- **OBJ_EVENT_GFX_NURSE** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_Nurse`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_GYM_GUY** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy`)
  - Dialogue (IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice): *"Yo!  Champ in the making!  At the POKéMON LEAGUE, you will  face the ELITE FOUR all in a row.  If you lose, you have to start all  over again!  This is it!  Go for it!$"*
- **OBJ_EVENT_GFX_COOLTRAINER_F** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard`)
  - Dialogue (IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck): *"From here on, you face the  ELITE FOUR one by one.  If you win, a door opens to the  next TRAINER. Good luck!$"*
- **OBJ_EVENT_GFX_BLACKBELT** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_BlackBelt`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_PokemonJournal`)
  - Dialogue: *(No local text calls found in script)*
- **OBJ_EVENT_GFX_COOLTRAINER_M** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_CooltrainerM`)
  - Dialogue: *(No local text calls found in script)*
- **0** (Script: `IndigoPlateau_PokemonCenter_1F_EventScript_PokemonJournal`)
  - Dialogue: *(No local text calls found in script)*

---
