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
*   **The Fig Quest:** Team Rocket has stolen **Fig** (a special Shiny dog). The species has been globally renamed to **FIG**. Clues about her whereabouts are breadcrumbed through every city, leading to a final rescue at Silph Co.
*   **The Champion: OLLIE.** The final twist! Your supportive gym guide is actually the ultimate challenge, featuring a powerhouse team.

### Danger Jones Professional Palette (Town & Badge Renames)
The cities and badges have been renamed after professional hair color shades:
*   Pallet Town -> **Clear Town** (Diluter/Shine)
*   Viridian City -> **Adrenaline City** (Neon Green) -> **ADRENALINEBADGE**
*   Pewter City -> **Pavement City** (Grey) -> **PAVEMENTBADGE**
*   Cerulean City -> **Poolside City** (Light Blue) -> **POOLSIDEBADGE**
*   Lavender Town -> **Masquerade Town** (True Purple) -> **STARRIDERBADGE** (Note: Saffron/Lavender badge swap reflects Saffron's color Yellow -> Starrider)
*   Vermilion City -> **Burnout City** (Orange) -> **BURNOUTBADGE**
*   Celadon City -> **Empire City** (Green) -> **EMPIREBADGE**
*   Fuchsia City -> **Hustler City** (Pink) -> **HUSTLERBADGE**
*   Cinnabar Island -> **Diablo Island** (Red) -> **DIABLOBADGE**
*   Saffron City -> **Starrider City** (Yellow) -> **STARRIDERBADGE**
*   Indigo Plateau -> **Libertine Plateau** (Violet)

*Note: Saffron is Starrider (Yellow) and Lavender is Masquerade (Purple). Saffron Gym gives the STARRIDERBADGE.*

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
*   **Woburn Safari Park:** The Safari Zone has been globally renamed to Woburn Safari Park.
*   **Liquid Death:** Lemonade has been replaced with Liquid Death water cans.
*   **Following Pokémon:** The first Pokémon in your party follows you in the overworld.
*   **Quest Log:** A new feature in the Start Menu that tracks your progress through a 29-step Main Story path (from Clear Town to the Elite Four and post-game Mewtwo) and side quests like "Stacey's Redundancy" and "The Rescue of Fig".
*   **Eevee Adoption Program:** To ensure a full Eevee-evolution team is possible, adoptable Eevees are offered by NPCs in almost every city Mart (Adrenaline, Pavement, Poolside, Masquerade, Burnout, Hustler, Starrider, Diablo) and the One Island Pokémon Center, in addition to the original Celadon City gift.
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
*   **Pavement City (Faris):** Team: Pidgey, Vileplume, Zapdos, Diglett, Blastoise.
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

## Custom Quests (Completed)
*   **Stacey's Active Tasks:** Stacey's ventures now require player interaction! Fix her oven with a Fire Pokémon, prove ghosts aren't scary with a Ghost Pokémon, and survive a Risk Assessment battle.
*   **Twilight Trivia Hunt:** Find 4 missing book chapters for PROF. TREE hidden across KANTO. Rewards: Rare Candies.
*   **PokeASDA Mystery Shopper:** Audit various Marts to earn a permanent **20% Staff Discount** globally.
*   **The Professional Palette:** Show the Colorist in Clear Town Pokémon that match the Danger Jones hair color palette.
*   **Eevee Adoption Program:** Adopt 10 scattered Eevees across the region to earn an **Everstone**.
*   **Birthday Party Invite:** A post-game quest to find and invite 8 hidden friends to a grand finale in Clear Town.

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

---

## Complete Quest Guide

### 1. Main Story (29 Steps)
Follow the Quest Log in the Start Menu. It will guide you from Clear Town through all 8 Gyms, the Elite Four, and the final post-game confrontation with Mewtwo in Cerulean Cave.

### 2. Stacey's Redundancy
Stacey is a blundering idiot trying to run failing businesses.
*   **Step 1: Poolside City (Berry Bakery):** Stacey brags about her electric oven. **Sabotage it** by showing her a Pokémon with a **WATER-type move**. Reward: Charcoal.
*   **Step 2: Masquerade Town (Spiritual Consulting):** Stacey is terrified of ghosts. Show her a **GHOST-type Pokémon** to prove they aren't bad for business. Reward: Spell Tag.
*   **Step 3: Diablo Island (Volcano Insurance):** Survive a **Risk Assessment battle** against Hiker Dudley to validate your low-risk profile. Reward: Lava Cookie.

### 3. The Rescue of FIG
Team Rocket has kidnapped FIG (a Shiny Rockruff species).
*   Follow clues from Zaynab and Aliyah in Clear Town.
*   **Breadcrumbs:** Find **FIG'S TREATS** on Route 2 and a **SHINY FUR CLUMP** on Route 9.
*   **Sightings:** Talk to NPCs in Pavement City, Route 3, and Burnout City for info.
*   Confront Stacey in Poolside and Masquerade Town for more clues.
*   Final Rescue: Defeat the Team Rocket boss at Silph Co. 11F in Starrider City. FIG will be returned to you by the President.

### 4. Twilight Trivia Hunt
Find 4 missing chapters of Professor Tree's favorite book series. They are now visible **item balls**:
*   **CH. 1:** Pokémon Tower 2F (Masquerade Town).
*   **CH. 2:** Game Corner (Empire City).
*   **CH. 3:** Silph Co. 11F (Starrider City).
*   **CH. 4:** Pokémon Mansion B1F (Diablo Island).
*   **Reward:** Return each chapter to Professor Tree in his lab for a **Rare Candy**.

### 5. PokeASDA Mystery Shopper
Audit the PokeASDA branches to earn a permanent **20% Staff Discount** globally.
*   Start at the Adrenaline City Mart.
*   Audit Pavement City Mart (Talk to clerk).
*   Audit Poolside City Mart (Talk to clerk).
*   **Final Report:** Talk to the Receptionist at the PokeASDA HQ (Celadon Dept Store 1F) to activate your discount.

### 6. The Professional Palette
Show the Colorist in Clear Town Pokémon that match the Danger Jones palette:
*   **Neon Green:** Show a **VICTREEBEL**.
*   **Fiery Red:** Show a **FLAREON**.
*   **Masquerade Purple:** Show a **GENGAR**.
*   **Reward:** A **Shiny Stone**.

### 7. Eevee Adoption Program
Find loving homes for all 10 scattered Eevees across the region.
*   **Locations:** Check the PokeASDA Marts in Adrenaline, Pavement, Poolside, Masquerade, Burnout, Hustler, Starrider, and Diablo. One is also in the One Island Pokémon Center.
*   **Reward:** Adopt all 10 to earn an **EVERSTONE** (handed over by the final Eevee giver).

### 8. Birthday Party Invite (Post-Game)
Once you are the Champion, 8 of your friends are hidden in cities across Kanto. Find and invite them:
1.  **CLAIRE:** Adrenaline City
2.  **STEVE:** Pavement City
3.  **FERNANDA:** Poolside City
4.  **SAM:** Masquerade Town
5.  **JOE:** Burnout City
6.  **ZAYNAB:** Empire City
7.  **ALIYAH:** Hustler City
8.  **ADITI:** Diablo Island
*   **Finale:** Once all 8 are invited, the Quest Log will direct you back to Clear Town. Interacting with the **computer in your bedroom** will trigger a "glitch" that warps you to the secret **Grand Finale party room!**
