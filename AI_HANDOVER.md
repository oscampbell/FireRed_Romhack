# Project Handover & AI Onboarding Guide

Welcome, AI coding assistant! This document is designed to bring you up to speed immediately on this customized Pokémon FireRed romhack. It details the project's architecture, custom systems, files of interest, build workflow, and outstanding items for future development.

---

## 🛠️ Tech Stack & Engine Base

This project is built on **FireRed Ultra**, a custom decompilation hack of Pokémon FireRed (US). Key base features include:
- Gen 3 overworld follower Pokémon system.
- Expanded bag system.
- Dynamic overworld shadows.
- Modernized battle engine.
- Integration of **Poryscript** for writing scripts.

---

## 📂 Key Directory Structure

- **`data/maps/`**: Directory containing all game maps. Inside each map folder, you will find:
  - `map.json`: Defines object events (NPCs), warps, coordinates, and signboard triggers.
  - `scripts.pory` / `scripts.inc`: Contains script event handlers.
  - `text.inc`: Stores local dialogue strings.
- **`data/scripts/`**: Global scripts, including item ball definitions (`item_ball_scripts.inc`) and debug menus.
- **`data/text/`**: Global text strings (e.g., `flavor_text.inc` for Mart/Center signs, `fame_checker.inc` for the Fame Checker).
- **`src/`**: C source code. Key files:
  - `strings.c`: Contains global string constants, including Quest Log descriptions.
  - `quest_log_system.c`: Handles Quest Log UI and step descriptions.
  - `fame_checker.c`: Fame Checker UI and sprite mappings.
- **`include/constants/`**: Header constants. Key files:
  - `flags.h`: Defines overworld visibility flags (e.g. `FLAG_HIDE_VIRIDIAN_SCHOOL_PROTEIN_BAR`).
  - `vars.h`: Defines game variables (including quest tracking variables).

---

## 📜 Custom Quest Log System & Variable Mappings

The Start Menu features a customized Quest Log tracking one main story and seven side quests. These quests are tracked using variables defined in `include/constants/vars.h` (from `0x408C` to `0x4093`):

| Variable | Name in Code | Quest Name | Progress Steps |
| :--- | :--- | :--- | :--- |
| **`0x408C`** | `VAR_QUEST_MAIN` | Main Story | `0` to `29` |
| **`0x408D`** | `VAR_QUEST_STACEY` | Stacey's Redundancy | `0` to `3` |
| **`0x408E`** | `VAR_QUEST_FIG` | The Rescue of Fig | `0` to `3` |
| **`0x408F`** | `VAR_QUEST_TWILIGHT` | Twilight Trivia Hunt | `0` to `4` |
| **`0x4090`** | `VAR_QUEST_POKEASDA` | PokeASDA Mystery Shopper | `0` to `3` |
| **`0x4091`** | `VAR_QUEST_PALETTE` | The Professional Palette | `0` to `3` |
| **`0x4092`** | `VAR_QUEST_BIRTHDAY` | Birthday Party Invite | `0` to `2` |
| **`0x4093`** | `VAR_QUEST_EEVEE` | Eevee Adoption Program | `0` to `2` |

### 🏠 Birthday Party secret warp:
When `VAR_QUEST_BIRTHDAY` reaches `2` (all 8 friends invited), interacting with the PC in the player's bedroom (`PalletTown_PlayersHouse_2F`) triggers the following script in `data/maps/PalletTown_PlayersHouse_2F/scripts.pory`:
```pory
if (var(VAR_QUEST_BIRTHDAY) == 2) {
    msgbox("SYSTEM ERROR: GLITCH IN THE MATRIX\nREBOOTING TO SECURE LOCATION...")
    closemessage
    warp(MAP_PALLET_TOWN_BIRTHDAY_PARTY_ROOM, 4, 7)
    waitstate
    releaseall
    end
}
```
This warps the player directly into the custom birthday party room map (`PalletTown_BirthdayPartyRoom`).

---

## 🛠️ Build & Compilation Workflow

### Commands
- Compile the ROM:
  ```bash
  make -j8
  ```
- Reset the build files (clean build):
  ```bash
  make clean
  ```

> [!WARNING]
> **Stale Headers gotcha**: The Makefile dependencies do not always trigger a rebuild of assembly object files (`.o`) when C header constants (such as `include/constants/flags.h`) are modified. If you add or rename a flag in `flags.h` and the build fails during linking with `undefined reference to FLAG_X`, you **must** run `make clean` and compile again to force the assembler to pick up the updated definitions.

---

## 📋 Outstanding Development Backlog

These are the main items from the playtest feedback (`bug_list.txt`) that are still unresolved:
1. **Early Cut Availability**: The game currently grants access to Cut (via Prof. Tree's Farfetch'd) before the S.S. Anne is completed. This must be delayed to avoid sequence breaking.
2. **Quest Log Flow Checks**: Verify the exact triggers for Main Story Step 3/4. The transition currently jumps from Step 2 to Step 4 after delivering the parcel in Oak's Lab.
3. **NPC Dialogue Auditing**: A large portion of named NPC text contains placeholder AI dialog. These should be extracted to a spreadsheet and rewritten to match real-life references.
4. **Duplicate NPCs**: In Masquerade Town, duplicate sprites for Amber and Diva are visible. Their visibility flags/coordinates need to be aligned.
5. **Wild Encounter Difficulty**: Balance check the level curves after Nugget Bridge. Players reported becoming over-leveled too easily.
6. **Ollie's Love Balls**: Implement custom drop items (Love Balls) containing a signature text message `"left for you by Ollie"`.
7. **Poo Bag & Protein Bar Integration**: Verify item space checks and text box closure logic when using or obtaining these items in the overworld.
