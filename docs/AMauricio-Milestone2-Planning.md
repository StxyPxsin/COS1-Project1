> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**
→   
  AceZombies!!!
**What does your program currently do? (1–3 sentences)**   
→ My program currently can operate well everything I want it to do works. so far I have 1 and 2 options in the menu can work currently Venture out to Scavenge the sector ruins and  Rest and bind structural wounds. The narrative of the story line is working as well.

---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→   
  I am currently working on the menu options through the while loop and making sure the narrative fits it as well.
**What is NOT working or incomplete?**   
→   the incomplete portion is my menu options for the different city to go to option.
  
**What feels confusing or messy in your code?**   
→ Now its really just plugging everything in nothing really messy to me.

---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**   
→   
  Option 3
**What does this feature do?**   
→   
   Drive to the next city level border checkpoint
**Why is this feature important?**   
→   
  This is what makes the program advance to another city.
---
### Feature 2  
**Name:**   
→   
  option 4 
**What does this feature do?**   
→   
  Quit current operation completely and Exit game
**Why is this feature important?**   
→   
  This lets the user exit the game
---
  
### Feature 3 (optional)  
**Name:**   
→   
  
**What does this feature do?**   
→   
  
**Why is this feature important?**   
→   
  
---
## 🧩 System Design Updates  
  
**Will you need to create any new classes? If so, which ones?**   
→   Honestly haven't gave it a thought on new classes but ill probably add a feature that give funny jokes randomly feel like its needed.
  
**Will you modify any existing classes? How?**   
→   - Player Class: Will be modified to include a private medkits integer variable, a matching public getMedkits() inspector, and a modifyMedkits(int amount) mutation method. This upgrades the game from using generic "supplies" to a dedicated medical inventory item during combat.
    
- CityLevel Class: Will be modified to include a private baseZombieHp integer variable along with a public getBaseZombieHp() const getter. This allows the game engine to read the base health of the local Aces and scale their difficulty dynamically based on which city level is currently active.
  
**What data structures will you use (vectors, 2D vectors, etc.)?**   
→   
  A std::vector of objects (std::vector<CityLevel>) will be used to store and manage the level sequence. This standard dynamic array structure acts as the game's level database. It allows the game loop in `main.cpp` to iterate sequentially through each city level, index its narrative text dynamically, and process level transitions cleanly via an array index counter (currentLevelIndex++).
---
## 🔄 Program Flow  
  
**Describe how a user interacts with your program:**  
  
1. Program starts →   The terminal window opens and displays a stylized title card via the TextNarrator. The user is explicitly prompted to input their custom survivor name, which dynamically instantiates the Player profile object in memory.
2. User chooses →   The game prints out the narrative intro story for the current city. The user is then presented with a clear command menu (1 to Scavenge, 2 to Heal, 3 to Travel, or 4 to Exit) and types a number into the console selection prompt.
3. Program responds →   The engine processes the choice. If scavenging, it rolls a random event (loot drop or an **Ace zombie combat ambush**). If the user chooses combat actions or healing, vital statistics update instantly on-screen with descriptive feedback.
4. Loop/next step →   - If the player is still alive, the loop clears the console buffers and prints the updated dashboard view again. This menu loop loops continuously until the level's supply threshold is met, the player drops to 0 HP, or choice 4 is picked to terminate the game.

---
  
---
## 🎯 Usability Improvements  
  
How will you make your program easier to use this week?  
  
- Clearer prompts:   
→   Every input prompt will explicitly state the expected numerical range inside brackets, such as `Choose action (1-4):` . When an event occurs, dynamic tags like `[+] SUCCESS`, `[!] AMBUSH`, and `[X] ERROR` will be color-coded or structurally isolated with spacing so text blocks are easily readable.
  
- Better error handling:   
→   The engine will fully utilize a robust `getValidatedInput` data filter subroutine. If a user accidentally types text, symbols, or out-of-bounds numbers, the stream error flag is instantly reset (cin.clear()) and the bad input data buffer is cleared (cin.ignore()) to prevent immediate crash loops.
  
- Improved menu/navigation:   
→   Structural alignment markers and text separator lines (`====` and `----`) will be standardized across the `TextNarrator` file layout output. This will clearly separate the narrative storytelling sections from the operational status metrics screen layout.
  
---
## ⚠️ Potential Challenges  
  
**What do you think will be the hardest part this week?**   
→   The most difficult element will be implementing the turn-based tactical combat sub-loop cleanly within the main path. Managing changing loop contexts (transitioning smoothly from exploration choice states to turn-based zombie combat states and back) without creating convoluted conditional nests or spaghetti code logic will require careful layout organization.
  
**What is your plan if you get stuck?**   
→   If a compilation blocker or linker breakdown occurs, I will isolate the specific code layer and test the functions in an independent, minimal test file. If I cannot resolve the error, I will consult the official Microsoft Visual Studio debugger tools to trace variable states, review standard C++ documentation, or attend professor office hours.
  
---
  
## 📈 Level Up Goal  
  
**What skill are you focusing on improving this week?**   
→   I am focusing on structured state workflow control.
  
**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→   I will study input streams, rede my methods to use consistent return validations, and practice tracing variable allocations using breakpoints inside the Visual Studio debugger suite.
  
---
## 🗓️ Task Breakdown (GitHub Issues Planning)  
  
List the tasks you plan to create as GitHub Issues:  
  
- [ Refactor Player and CityLevel class headers and files to add custom asset fields (medkits, baseZombieHp).]   
- [ Upgrade the `getValidatedInput` tracking function to securely block multi-character buffer overflows.]   
- [Implement a tactical turn-based combat sub-menu loop when an Ace zombie ambush is rolled. ]   
- [Design and integrate <fstream> text storage linkages to write player metrics directly to a local scores.txt leaderboard file. ]   
  
---
  
## 🔥 Final Check  
  
Before you start coding, ask yourself:  
  
- [ yes] Do I know what I’m building this week?   
- [ yes] Do I know where to start?   
- [yes ] Did I break my work into small tasks?   
  
If yes → start coding 🚀   
If no → refine your plan first   
  
---
## 😈 Final Thought  
  
> Plan it now… or debug it later.