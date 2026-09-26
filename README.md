# 🚀 Welcome to Project & Portfolio!


# Project & Portfolio 1

### Ariel Mauricio

Hello my name is [Ariel Mauricio]. I am a student from [Houston, Texas]. The purpose of this repository is to practice development using version control. This work will help me begin to build a portfolio of skills and accomplishment that can be shared in the future.

<br>

## 📢 &nbsp; Weekly Stand Up

Each week I will summarize my milestone activity and progress by writing a stand-up. A stand-up is meant to be a succinct update on how things are going. Use these prompts as a guide on what to write about:

⚙️ Overview - What I worked on this past week
<br>
🌵 Challenges - What problems did I have & how I'm addressing them
<br>
🏆 Accomplishments - What is something I "leveled up" on this week
<br>
🔮 Next Steps - What I plan to prioritize and do next

<br>

### Week 1

Overview – What did you work on this past week?

- This past week I have worked on the class files specifically the player files, also finished the cityLevel file. These were the key points. I have to know what to do on my version control I am currently working on it.

 Challenges – What obstacles did you encounter, and how are you addressing them?

- Challenges i faced were trying to figure out how to make my player and figure out how the health of the player will play a part into it also how to generate multiple cities by levels.

 Accomplishments – What is something you learned, improved, or "leveled up" on this week?
 - I learned and improved on how to properly get to the next wave on the city levels I have. 
  Next Steps – What do you plan to prioritize before your next milestone? 
  - What I am prioritizing before the next milestone is understanding my project better cause some of the work I did I honestly dont know why some of it works and the others dont. I am also going to work on the TextNarrative for the story line.
### Week 2

Overview – What did you work on this past week?
-so far I have 1 and 2 options in the menu can work currently Venture out to Scavenge the sector ruins and  Rest and bind structural wounds. The narrative of the story line is working as well.
Challenges – What obstacles did you encounter, and how are you addressing them?
- the challenges I ran into were moving single-file program structure and separating the project into standalone .h and .cpp file layers. This initially caused multi-definition and circular dependency linker errors inside the Visual Studio builder. I addressed them by completely isolating long-form screen text output processing into a separate, dedicated TextNarrator file framework.
- Accomplishments – What is something you learned, improved, or "leveled up" on this week?
-I studied input streams, rede my methods to use consistent return validations, and practice tracing variable allocations using breakpoints inside the Visual Studio debugger suite.
- Next Steps – What do you plan to prioritize before Week 3?
- I will be finishing up the last 2 options I have for the menu file.

### Week 3

- ⚙️ **Overview** – What did you work on this past week?
    This past week I worked on programing a storage for the player and a saving progress in the game as well while rewriting some of the narrative and changing some of each file to have the save mode(progressed save). Also having the levels get harder. 
- 🛠️ **Improvements** – What changes, refinements, or refactoring did you complete this week?
-The game's navigation loop to feature a dedicated Pre-Game HQ Lobby Menu using a dual-loop lifecycle model. I completely overhauled our text rendering layer by integrating a multi-file TextNarrator module using forward class declarations to prevent circular dependencies. Most importantly, I removed all legacy console stream management and replaced it with a foolproof std::stoi + try/catch validation filter powered entirely by string-parsing string extractions.
    
- 🌵 **Challenges** – What obstacles did you encounter, and how are you addressing them?
    -Handling infinite loops and execution freezes within our non-linear navigation sub-menus (such as the Level Selector and Inventory Inspect screens). If a player smashed non-numeric keys, the system would lock up or skip input sequences automatically. I addressed this by enforcing explicit input gating, changing state trackers into string lines via std::getline , and mapping distinct escape state conditions (like simulationActive = false;) inside our menu switch blocks to ensure a clean path back to the hub lobby.
- 🏆 **Accomplishments** – What is something you learned, improved, or "leveled up" on this week?
	-This week I learned/improved on: Implementing persistent data serialization systems using the standard C++ file stream <fstream> library framework. I successfully leveled up my understanding of file input/output patterns by converting dynamic runtime memory object allocations directly into persistent file data structures (savegame.txt), and learned how to mathematically recalculate those values upon data restoration so the player profile scales cleanly.
🔮 **Next Steps** – What do you plan to complete before Week 4?.
- Expanding the turn-based combat sub-system by introducing dynamic random encounter tables and item durability modifiers. I will also construct a comprehensive automated build test script to systematically trace edge-case inputs across every game loop frame, ensuring complete stability before our final grading presentation window opens.
### Week 4

My final stand up...
-This past week, I completely finalized the body of **AceZombies Survival**, transitioning it from a modular prototype into a feature-complete text-based strategy game. I successfully wrapped the entire game loop inside a session manager to allow replay ability, integrated a tactical pre-game lobby, connected the mid-mission escape commands, and ensured all end-game win/loss screens accurately trigger under any termination boundary. 
-Before final submission, I polished several critical system layers to maximize stability and software quality: Retired Ancient Console Input Hacks: Replaced all fragile legacy tracking code (std::cin.clear() and std::cin.ignore()) with a rigorous, lecture-compliant std::stoi + try/catch validation filter** driven by std::getline. *Fixed Dynamic UI Dashboard Meters: Refactored `TextNarrator.cpp` to dynamically read current city parameters, fixing a layout bug where target metrics displayed hardcoded string boundaries (e.g., changing fixed 2/0 weapon trackers to dynamic 2/2 outputs based on the active city layer).  Mid-Fight Medical Implementation:  Added a crucial third combat stance action (3. Use Field Trauma Medkit) allowing players to heal dynamically during turn-based sub-loops instead of restricting items solely to macro-exploration screens. Granular Level-Specific Extraction Failure Logs: Tied clear narrative reasons to extraction bottlenecks, preventing the system from cross-blending different city logs when gate constraints were failed.

Challenges – What obstacles did you face, and how did you overcome them?
The most significant obstacle encountered during wrap-up was a series of compilation crashes and logic freezes caused by **bracket nesting offsets and invalid casting statements** inside `main.cpp`. Misplaced braces accidentally locked multi-layered menus into Option 1's local scope, while using un-templated static_cast(...) arrays caused the compiler to lose track of vector sizes. 

I systematically overcame these anomalies using the  Visual Studio Debugger:
1. I isolated scope properties by tracking variable lifecycles across active breakpoints.
2. I refactored the logic tree to completely separate conditional blocks.
3. I enforced clean brace formatting and updated code lines to use robust integer conversions like `static_cast<int>(levels.size()).



## 📚 Biggest Takeaway – Looking back, what was the most valuable thing you learned during this course?
My biggest takeaway from this course was mastering **Separation of Concerns and Defensive Programming**. Learning how to properly isolate presentation code (`TextNarrator`), narrative metadata (`CityLevel`), character state metrics (`Player`), and core loop logic (`main.cpp`) using clean `.h` and `.cpp` file management completely changed how I think about programming. 

Additionally, learning how to safely capture human console inputs as raw string lines *before* converting them inside guarded try/catch conditions taught me how to write highly stable, crash-proof logic trees that hold up under unpredictable user behavior.

## 🔮 Future Development – If you continued this project after the course, what would you build or improve next?
If I expand AceZombies beyond this course sequence, my next priorities would focus on these structural features:
1. Item Durability & Real Ammo Caps: Introduce weapon degradation trackers where blades can break or guns jam if not maintained via safehouse scraps.
2. Encapsulated Class State Save Systems: Upgrade our <fstream> save-state engine to pass encrypted data streams or structural JSON configurations, preventing users from altering character metrics by manually rewriting savegame.txt.
3. Dynamic Squad Management:  Expand the companion system so that characters like Marshal Davis or Sarah Connor join your active party as persistent player entities with unique stats, rather than serving as static storyline text references.
