# Shukti's Romhack - Custom Changes & Feature Log

This document lists all the custom changes, renames, and structural updates implemented in this customized version of **Pokémon FireRed Ultra**.

---

## 🎨 Renames & Flavor Updates

### 1. Cities & Badges (Danger Jones Hair Dye Palette)
All major cities and badges have been renamed to represent professional hair color shades:
- Pallet Town -> **Clear Town** (Diluter/Shine)
- Viridian City -> **Adrenaline City** (Neon Green) -> **ADRENALINEBADGE**
- Pewter City -> **Pavement City** (Grey) -> **PAVEMENTBADGE**
- Cerulean City -> **Poolside City** (Light Blue) -> **POOLSIDEBADGE**
- Lavender Town -> **Masquerade Town** (True Purple) -> **STARRIDERBADGE**
- Vermilion City -> **Burnout City** (Orange) -> **BURNOUTBADGE**
- Celadon City -> **Empire City** (Green) -> **EMPIREBADGE**
- Fuchsia City -> **Hustler City** (Pink) -> **HUSTLERBADGE**
- Saffron City -> **Starrider City** (Yellow) -> **STARRIDERBADGE**
- Cinnabar Island -> **Diablo Island** (Red) -> **DIABLOBADGE**
- Indigo Plateau -> **Libertine Plateau** (Violet)
- Safari Zone -> **Woburn Safari Park**

### 2. Custom Names & Media
- **Starters**: Starters Morpeko, Eevee, and Alolan Raichu have significantly buffed base stats (Morpeko BST 525, Eevee BST 470, Alolan Raichu BST 590).
- **Mart Rebranding**: All Pokémon Marts have been globally renamed to **PokeASDA**.
- **Liquid Death**: Lemonade has been replaced with the canned water brand **Liquid Death**.
- **Houndoom -> Bowie**: The Houndoom species is globally renamed to **Bowie** (representing Shukti's pet pug).
- **Rockruff -> FIG**: The Rockruff species is globally renamed to **FIG**.
- **TV Broadcasts**: Every television interaction in Kanto yields the text: `"Heated rivalry is on!"`

---

## 👥 Character Directory & Custom Homes

A comprehensive list of custom NPCs, their shared homes, partners, and in-game locations:

| Character Name | Partner | Location / House | Role / Lore |
| :--- | :--- | :--- | :--- |
| **FARIS** | Bryony | Pavement House 2 | Pavement Gym Leader (Bird enthusiast) |
| **BRYONY** | Faris | Pavement House 2 | Poolside Gym Leader |
| **HRISHI** | - | Burnout City | Burnout Gym Leader |
| **DAVID** | Claire | Celadon Condo 1F | Empire Gym Leader (Bodybuilder Bruno sprite) |
| **MILAN** | - | Hustler City | Hustler Gym Leader |
| **DIVA** | - | Starrider City | Starrider Gym Leader |
| **DEVANG** | Pat | Diablo Lab Lounge | Diablo Gym Leader |
| **ZAYNAB** | Connor | Adrenaline City | Adrenaline Gym Leader |
| **ALIYAH** | - | Hustler City | Adrenaline Gym Leader (Double battle) |
| **NIKY** | Gary | Player's House 1F | Protagonist's Mother |
| **GARY** | Niky | Player's House 1F | Protagonist's Stepdad |
| **CHRIS** | Ellie | Adrenaline House | Outdoors Expert |
| **ELLIE** | Chris | Adrenaline House | Hockey Match Host |
| **JOHN** | Carolyn | Pavement House 1 | Gym Scout |
| **CAROLYN** | John | Pavement House 1 | Researcher |
| **STEVE** | Fernanda | Cerulean House 1 | Party Guest |
| **FERNANDA** | Steve | Cerulean House 1 | Party Guest / Eevee Giver |
| **BRANDON** | Hannah | Cerulean House 2 | Gym Enthusiast |
| **HANNAH** | Brandon | Cerulean House 2 | FIG Sighting Witness |
| **DAN** | Liv | Vermilion House 1 | Builder / Developer |
| **LIV** | Dan | Vermilion House 1 | Kidnapping Witness |
| **CLAIRE** | David | Celadon Condo 1F | Party Guest |
| **ASHLEY** | Matt | Celadon House 1 | Strength Enthusiast |
| **MATT** | Ashley | Celadon House 1 | Scared FIG Witness |
| **JANHVI** | Justin | Saffron House | Ninja Apprentice |
| **JUSTIN** | Janhvi | Saffron House | Media Action Junkie |
| **PAT** | Devang | Diablo Lab Lounge | Island Retreatist |
| **ADITI** | Kethan | Diablo Lab Research | Party Guest |
| **KETHAN** | Aditi | Diablo Lab Research | Bird Researcher |
| **DAISY** | - | Stacey's House | Business Practices Investigator |
| **BILLIE & PUDDIN** | - | Empire City Gym | Gym Cats (inside David's gym) |

---

## 🎮 Gameplay Features & Logic

- **Automated Intro & Name Selection**: Oak's introductory speech is skipped entirely. You start directly in the bedroom with the name **SHUKTI** and female gender pre-assigned.
- **Global EXP Share**: Experience is automatically shared with your entire party from the start of the game, no item or switch required.
- **Poo Bag**: A custom level-reducing item received from Faris (decreases a Pokémon's level by 1).
- **Protein Bar**: A custom level-increasing item received from David (acts as a super Rare Candy).
- **Completable Pokédex**: Evolution trade requirements are removed. Trade evolutions now trigger at Level 36 or via standard item usage.
- **Version Merges**: LeafGreen exclusives and starters have been distributed in the wild so all Pokémon can be caught in a single playthrough.
- **Alolan Tourism Board**: Alolan forms are adoptable from representatives across Kanto and Sevii:
  - Route 2 (House): **Alolan Meowth** (Lv. 10)
  - Poolside City (House 3): **Alolan Vulpix** (Lv. 15)
  - Burnout City (House 2): **Alolan Sandshrew** (Lv. 20)
  - Route 11 (East Gate 2F): **Alolan Diglett** (Lv. 25)
  - Route 18 (East Gate 2F): **Alolan Grimer** (Lv. 30)
  - Diablo Island (Lab Lounge): **Alolan Geodude** (Lv. 35) & **Alolan Exeggutor** (Lv. 40)
  - Diablo Island (Lab Research): **Alolan Marowak** (Lv. 44)
  - Seven Island (House Room 1): **Alolan Rattata** (Lv. 12)
- **Consultants & Dialogues**:
  - Name Rater is renamed to **Brand Manager** and performs "brand audits".
  - Move Deleter is renamed to **Style Consultant** and "trims" out-of-fashion moves.
  - Dialogues feature custom humor and options (like the `YES / FUCK OFF!` menu choice).
- **Ollie's Development Suite**: A secret dev room is hidden in the Empire City Condominiums (3F).
- **Debug Mew NPC**: A Mew sprite named "The Pro's Choice" is placed in every Pokémon Center and the player's bedroom. It can give you a level 100 Mew, key items, flight paths, badges, or warp you to any city.
