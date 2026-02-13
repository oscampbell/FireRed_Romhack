# Pokémon FireRed and LeafGreen Ultra (Customized for Shukti)

This is a personalized version of **FireRed Ultra**, built as a special gift for Shukti's birthday.

> **IMPORTANT:** Much of the custom dialogue currently in the game contains **AI-generated placeholder content**. A "fine-tooth comb" review of all dialogue is required to ensure it perfectly matches the intended tone and personal references.

> **Note:** Some features implemented were to test feasibility; nothing is final.

---

## World & Story
The Kanto region has been transformed into a world that reflects Shukti's life, career as a professional colorist, and her favorite media.

### Core Story Changes
*   **The Rival: STACEY** (Shukti's old boss). She's portrayed as "very stupid," making constant jokes about redundancies and poor business strategy.
    *   **Ventures:** Stacey attempts to launch failing businesses across the region, including a "Berry Bakery" in Poolside City and "Spiritual Consulting" in Masquerade Town.
*   **The Professor: PROFESSOR TREE.** A "mad old professor" who is also a massive **Twilight** fan (Team Edward).
*   **Investigator Daisy:** A Business Practices Investigator stationed in Stacey's house, looking into her fraud allegations and shady business ethics.
*   **The Fig Quest:** Team Rocket has stolen **Fig** (a special Shiny dog/Rockruff). Clues about her whereabouts are breadcrumbed through every city, leading to a final rescue at Silph Co.
*   **The Champion: OLLIE.** The final twist! Your supportive gym guide is actually the ultimate challenge, featuring a powerhouse team.

### Danger Jones Professional Palette (Town Renames)
The cities have been renamed after professional hair color shades:
*   Pallet Town -> **Clear Town** (Diluter/Shine)
*   Viridian City -> **Adrenaline City** (Neon Green)
*   Pewter City -> **Pavement City** (Grey)
*   Cerulean City -> **Poolside City** (Light Blue)
*   Lavender Town -> **Masquerade Town** (True Purple)
*   Vermilion City -> **Burnout City** (Orange)
*   Celadon City -> **Empire City** (Green)
*   Fuchsia City -> **Hustler City** (Pink)
*   Cinnabar Island -> **Diablo Island** (Red)
*   Saffron City -> **Starrider City** (Yellow)
*   Indigo Plateau -> **Libertine Plateau** (Violet)

---

## Gameplay Features

### Visual Overhaul
*   **Stacey (Rival):** Now uses the **Agatha (Elite Four)** sprite for both overworld and battle, making her look like a grumpy old lady. She has a female battle profile and music.
*   **Ollie (Champion/Guide):** Now uses the **Steven Stone** sprite globally for a "cool" professional look.
*   **Bowie (Pug):** Houndoom has been globally renamed to **Bowie**. He can be found as a legendary encounter in the Poolside Gym.

### Customization & Items
*   **Custom Starters:** Morpeko, Eevee, and Alolan Raichu (all with buffed "Ultra" base stats).
*   **The All-Starters Quest:** Professor Tree gives you the remaining two starters at the Poolside and Hustler City Pokémon Centers.
*   **Twilight Boxed Set:** The classic parcel quest is now a delivery of a Special Edition Twilight Set.
*   **PokeASDA:** All Marts have been globally rebranded.
*   **Liquid Death:** Lemonade has been replaced with Liquid Death water cans.
*   **Following Pokémon:** The first Pokémon in your party follows you in the overworld.
*   **Starting Resources:** Starting money increased to **¥35,000**. Evolution stones are scattered around Clear Town for early Eevee forms.

### Professional Consultants (Reflavored NPCs)
*   **Brand Manager:** The Name Rater (Masquerade Town) now performs "brand audits" to ensure names fit the professional palette.
*   **Style Consultant:** The Move Deleter (Hustler City) now "trims" and "cuts" out-of-fashion moves.
*   **Adrenaline Business School:** The trainer school now teaches Stacey mandatory lessons on business logic.

### Completable Pokédex
*   **No Trading Required:** Trade evolutions now trigger via **Level-up (Lv. 36)** or using the relevant **Evolution Item**.
*   **Version Merged:** All LeafGreen exclusives and starters are findable in the wild in this version.

---

## Technical Integration
*   **Poryscript:** Installed and integrated into the `Makefile`. `.pory` files in map directories automatically compile to `.inc`.
*   **Debug NPC (The Pro's Choice):** A Mew sprite located in the **Player's Bedroom** and **every Pokémon Center**.
    *   **GIVEMON:** Level 100 Mew.
    *   **ITEMS:** Bicycle, Fly (HM02), Max Repels, Running Shoes.
    *   **FLAGS:** Unlock Pokedex, All Badges, and Fly locations.
    *   **WARP:** Teleport to any City or major landmark.
*   **Automated Intro:** Selecting "New Game" bypasses the Oak speech and places you directly in the bedroom with your identity (SHUKTI/Female) already set.

---

## Battle Data

### Modified Gym Leader Teams
*   **Pavement City (Faris):** Bird Team (Pidgey, Hoothoot, Spearow, Pidgeotto).
*   **Poolside City (Bryony):** Mixed Team (Jigglypuff, Jynx, Mr. Mime, Poliwhirl, Flareon, Vileplume).
*   **Empire City (David):** Bodybuilder Team (Arcanine, Magikarp, Dragonair, Mr. Mime, Haunter, Machamp).
*   **Adrenaline City (Zaynab & Aliyah):** Endgame Team (Venusaur, Arcanine, Lapras, Tyranitar, Metagross, Salamence).
*   **Elite Four Member 3 (Jacquie):** Tech-inept Team (Underleveled Ice-types).

---

## Development Progress

### Zone Checklist
| Zone | Completed | QC | Tested |
| :--- | :---: | :---: | :---: |
| Clear Town | [x] | [ ] | [ ] |
| Adrenaline City | [ ] | [ ] | [ ] |
| Pavement City | [ ] | [ ] | [ ] |
| Poolside City | [ ] | [ ] | [ ] |
| Masquerade Town | [ ] | [ ] | [ ] |
| Burnout City | [ ] | [ ] | [ ] |
| Empire City | [ ] | [ ] | [ ] |
| Hustler City | [ ] | [ ] | [ ] |
| Starrider City | [ ] | [ ] | [ ] |
| Diablo Island | [ ] | [ ] | [ ] |
| Libertine Plateau | [ ] | [ ] | [ ] |
| Sevii Islands | [ ] | [ ] | [ ] |

### To-Do List
*   [ ] **Rename remaining Gym Leaders:** Koga (Hustler City) and Blaine (Diablo Island).
*   [ ] **NPC Personalization:** Modify remaining NPCs to represent real-life friends and family.
*   [ ] **Dialogue Audit:** Fine-tooth comb all AI placeholder text.
*   [ ] **Visuals:** Custom Title Screen and custom Player Sprite.

---

## Diversity & Personalization
Research has been conducted to increase the representation of people of color (POC) within the game's NPC and Trainer population.

### Current Progress
*   **Sprite Repository:** A collection of **145 trainer sprites** has been gathered in `graphics/diverse_sprites/`. This includes GBA-style ports of modern POC characters such as **Nessa**, **Raihan**, **Olivia**, **Grant**, and **Lenora**.
*   **Source Identification:** The **Unova (Gen 5)** and **Alola (Gen 7)** regions have been identified as the best official sources for diverse character bases.

### Recommended Tools
For creating exact representations of real-life friends and family:
*   **Doll Divine Pokémon Trainer Creator:** [Online Customizer](https://www.dolldivine.com/pokemon-trainer-creator.php) (Best for detailed character design).
*   **Jordan Bunke’s Top Down Sprite Maker:** [Download](https://jordanbunke.itch.io/top-down-sprite-maker) (Best for authentic Gen 3 overworld pixel art).

### Next Steps
1.  **Selection:** Review the PNGs in `graphics/diverse_sprites/` and identify candidates for specific NPCs (e.g., Zaynab, Aliyah, and family members).
2.  **Creation:** Use the recommended tools to design custom characters where pre-existing sprites are insufficient.
3.  **Technical Implementation:** 
    *   Resize selected images to 64x64 (Battle) or 16x32 (Overworld).
    *   Index the color palettes to the 16-color GBA standard.
    *   Update `src/data/trainers.party` and `map.json` files to point to new custom assets.
