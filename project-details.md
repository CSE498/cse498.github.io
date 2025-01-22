---
layout: default
---

# Project Group Info

Each group is provided a set of class modules that it will be expected to develop, along with a suggestion for a final project that can use those modules.  Groups are named after famous computer scientists.

Note that the classes listed below for each group to implement are general specifications where you will be able to make most of the decisions yourselves about what the class should be named, which member functions you want available, how you will store data, and how to handle error conditions, as long as they meet the same high-level goal.  The application suggestions are even more general, focused on an application topic that can make use of all of the classes you are developing and ideally aligns with your group's interest.  You will have the opportunity to either flesh out the suggested project or else propose an entirely different project if you decide you do not like the suggestion.

- [Group 1: Stroustrup](#group-1)
- [Group 2: Ritchie](#group-2)
- [Group 3: Hopper](#group-3)
- [Group 4: Torvalds](#group-4)
- [Group 5: Hamilton](#group-5)
- [Group 6: Lamport](#group-6)
- [Group 7: Euler](#group-7)
- [Group 8: Turing](#group-8)
- [Group 9: Liskov](#group-9)
- [Group 10: Bellman](#group-10)

## <span id="group-1" style="color: blue">Group 1: Stroustrup</span>

**Members**:  Jerry Chen, George Faraj, Leonardo Specht, Kollin Bartz, and Tyler Pritchett

**Shared Interests**: Data Processing

**Notable Strengths**: Algorithms, Databases, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`Random`**        | A random number generator.  User should supply the range and numerical type and the object should return a uniform random value in that range. The constructor should take a random number seed.  Member functions could include `double GetDouble(double min, double max)` and `double GetInt(int min, int max)` (and perhaps variants), as well as `bool P(double probability)`, which you give the probability of "true" and it flips the appropriate weighted coin for you.  |
| **`WeightedSet`**   | Like an std::set, but each item has a numerical "weight" associated with it.  A user should be able to index into the set with a value between 0.0 and total weight of all items.  For example, if there are three items, A, B, and C, with associated weights 0.5, 3.1, and 1.5, then the total weight would be 5.1.  In that range, 0.0 to 0.5 would give you A, >0.5 through 3.6 would give you B, and >3.6 through 5.1 would give you C.  Randomly indexing in allows you to pull a weighted random value from the set.  The tricky part is making this fast even when there are many items in the set.
| **`Distribution`**  | Create or manage a discrete distribution of values that can be used to draw from whatever distribution you need (for example, a Binomial distribution). You can use `Random` and `WeightedSet` to build this class and make it quite useful  Pre-calculation of distributions can allow for fast random draws. |
| **`Graph`**         | A class to manage a collection of vertices and edges; should be useful for conducting graph algorithms.  The class should be able to load from files, save to file, access connection information, and add or remove vertices and edges. |
| **`GraphPosition`** | A position on the Graph object, useful for implementing more complex graph algorithms.  For example, it might be usable for iterating through each vertex during a graph traversal. |

### Application Suggestion

A **graph generator and analyzer**.  The user would be able to specify the type of graph they want, as well as the size and any other relevant parameters (for example, width and height in a grid, or number of edges in a random graph).  The app will create the graph and be able to provide information about some key properties of the graph, such as average degree of vertices, height of its minimum spanning tree, etc.  Distribution objects will be useful as you try to create small world networks or other graph types that have particular distributions of edges.

Suggested **challenges**: I'd recommend a web interface (to allow anyone to easily create graphs), but another good option would be more advanced graph algorithms for analyses.


## <span id="group-2" style="color: blue">Group 2: Ritchie</span>

**Members**: Nitish Maindoliya, Dominik Leisinger, Rahul Baragur, Bram Hogg, and Matthew Hawkins

**Shared Interests**: Games / Productivity

**Notable Strengths**: Software Engineering, User Interfaces, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`DataMap`**       | A dynamic map that can match names to arbitrary data.  The user will need to provide the type it was set to when getting the value; the object should detect of wrong types are used.  For example, `Set("health", 45.0)` would set a variable named "health" to a double of value 45.0.  To get it again, you would need to use `Get<double>("health")` to make sure the type is know at compile time. Get should have an `assert` that is tripped if the wrong type is specified. |
| **`StateGrid`**     | A dynamic 2D grid where each position is one of a set of pre-defined states. Each state type should have a name, a symbol, and any other information the define that state (perhaps as a DataMap). For example, if a StateGrid was used to represent a maze, you might give it two types: a "wall" with the symbol '#' and the property "Hardness" set to 20, as well as an "open" state with the symbol ' ' (space) and no properties. |
| **`StateGridPosition`** | Track a single position (and orientation?) in the state grid to manage an individual agent moving through it. |
| **`ActionMap`**     | A map of strings to functions that can be triggered.  Can be useful in supplying a list of user actions when building a dynamic interface.  It should have member function like `AddFunction(std::string name, std::function<void()> fun);` and `Trigger(std::string name);` |
| *Audited Vector* | Functionality of `std::vector` but when compiled in debug mode, checks every index to ensure it is valid and in range; similar checks for iterators.  You can make your `cse::vector` derive from `std::vector` to get started (e.g., `template <typename T, typename... Ts> class vector : public std::vector<T,Ts...> { ... }`) and then add in a helper so you know the base type `using base_t = std::vector<T,Ts...>;`. In functions that you need to simply pass a call to the base type, this is easy to do: `size_t size() const { return base_t::size(); }` |

### Application Suggestion

A **productivity dungeon** where players adventure through a dungeon, but some of the boss battles are entries from your to-do list that you must complete in order to defeat them. Alternatively, you can place actual learning challenges in the dungeon and turn it into a gamified learning experience.

Suggested **challenges**: Web interface. Add enough features in the dungeon where there are many possible things for a player to do, including collecting items and using magic.


## <span id="group-3" style="color: blue">Group 3: Hopper</span>

**Members**: Sanya Nigam, Wendy Jiang, Owen Garcia, Riley Vernon, and Alex Bodell

**Shared Interests**: Games / Art

**Notable Strengths**: Graphics, Math, User Interfaces

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`FixedPoint`**    | A simple class that can handle decimal values, but with a fixed precision; likely an integer type under the hood.  You should plan to overload all of the standard mathematical operators and set up conversions to other mathematical types. Conduct speed tests to determine if this will be a faster choice than `double` for the project. |
| **`FunctionSet`**   | A container that can hold a collection of functions, all with the same signature.  All of these functions can be called simultaneously with a single set of arguments passed in. |
| **`Circle`**        | A simple geometric shape that tracks its position and radius and can identify overlaps with other Circles. |
| **`Surface`**       | An area that tracks a set of shapes, identifying all overlaps; particularly useful as the basis for a simple physics model. Make sure it can handle shapes moving and detecting overlaps as soon as they occur. For a speedup, you can either use sectors (where a circle can only overlap with circles in the same or neighboring sectors) or a [quadtree](https://en.wikipedia.org/wiki/Quadtree).  |
| **`DataTracker`**   | An object to track a series of data values over time.  It should be able to return the mean, median, min, max, or number of values collect at any point in time; other stats could also be helpful. If you want to scale up it's capabilities, you can set template flags that specify what it should track, even to the point of saving all values. |

### Application Suggestion

A **physics-based [cellular automaton](https://en.wikipedia.org/wiki/Cellular_automaton) (CA)**.  While most CAs are on a grid with each cell having a state, your project would be on a collection of moving circles, bouncing around on the screen like rubber balls (that have a state).  When two circles collide, a set of rules will determine what happens to them before they bounce apart.  For example if the balls have the states "rock", "paper", "scissors", then the winner converts the loser to their type (i.e., if rock and paper collide, the rock becomes paper.)  States can also change with time.  For example, states might be "healthy" or "infected".  If two healthy states collide there is a chance (X%) of producing an offspring.  If a healthy circle collides with an infected one, the healthy becomes infected.  After Y seconds infected circles die.

Suggested **challenges**: Web app.  Perhaps allow users to set up rules in real time.  Or even turn this into a proper game, perhaps where a player controls one of the circles and is trying to aim for a particular outcome (e.g., making the infected cells all die out so the uninfected population can fully takeover).


## <span id="group-4" style="color: blue">Group 4: Torvalds</span>

**Members**: Chris Paul, Grant Davis, Krishna Patel, Kyle Gunger, and Rose Spangler

**Shared Interests**: Scripting Language / Data Processing

**Notable Strengths**: Algorithms, Compilers, Software Engineering

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`BitVector`**     | Similar to [`std::bitset`](https://en.cppreference.com/w/cpp/utility/bitset), but allows for size changing.  Ideally, std::vector<bool> should fill the role in the standard library, but it doesn't have the extra functionality for bitwise operations that would make having a BitVector so useful. |
| **`IndexSet`**      | A collection of indices from another container.  This is a quick way to track sets of indices, for example those that have a special property.  A simple way of implementing this functionality is simply keeping a set of indices, but faster options could be tracking ranges of indices (e.g., 106-112, 152-225) if they are clustered, or using a BitVector if they are not. |
| *Audited String* | Functionality of `std::string` but when compiled in debug mode, checks every index to ensure it is valid and in range; similar checks for iterators.  You can make your `cse::String` derive from `std::string` to get started (e.g., `class String : public std::string`). In functions that you need to simply pass a call to the base type, this is easy to do: `String & clear() noexcept { std::string::clear(); return *this; }`.  You can also add any other member functions that you think would be useful to have work on strings. |
| **`Text`**          | A string-like object that also tracks formatting of the string (such as bold, italic, colors, maybe even links).  Ideally it should come with functions like `ToHTML()` or `ToLatex()` to convert to a string in the correct format. |
| **`Assert`**        | A better version of "assert" than the one supplied by "assert.h", perhaps calling it cse_assert instead. Your new version should be able to print targeted messages as well as the current value of supplied variables.  Ideally, you should be able to have something like `cse_assert(x < 200, "Outside of Bounding Box!");` and if the assert gets triggered it should print an error like `Assert error in "filename" on line X: Outside of Bounding Box! (x = 255).` NOTE: You will need to learn about macros to make an effective assert. |

### Application Suggestion

A **rich text translation app**. Translate between a pair of formats; some to chose from include HTML, Latex, Markdown, RTF, Docx (MS Word), or ANSI.  Include warnings when formats can't translate cleanly (e.g., ANSI can't handle links)

Suggested **challenges**: Add more than two targets so that the user specifies on the command line what they want to do.  Or make your own flexible format (if you like this direction, Dr. Ofria can provide more ideas).  Or even make this a web app for doing the translation.


## <span id="group-5" style="color: blue">Group 5: Hamilton</span>

**Members**: Max Krawec, Calen Green, Pedro Mitkiewicz, Shahaab Ali, and Muhammad Asif Masood

**Shared Interests**: Data Processing

**Notable Strengths**: Algorithms, Databases, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`Datum`**         | A simple data object that can be either a string or double, based on how it was last set.  Should have `AsString()` and `AsDouble()` member functions to convert if needed, as well as `IsString()` and `IsDouble()` to check the current type.  Basic operators should be implemented as well with intuitive behavior. You should also come up with rules for how to handle edge cases (for example, if AsDouble() is called on a string that can't easily be converted to a double, should it use 0? NaN (a special double value representing "not-a-number")? Or throw an exception?).|
| **`ReferenceVector`** | Similar to an std::vector, but keeps pointers under the hood.  This allows entries in the vector to all be treated like references instead of direct objects.  You will likely need to return a [proxy class](https://stackoverflow.com/questions/994488/what-is-proxy-class-in-c) when the vector is indexed into in order to redirect appropriately. |
| **`DataGrid`**      | A DataGrid should manage a 2D grid of Datum values (strings or doubles). The user should be able to request a row or column to manipulate. Consider storing the grid as a collection of rows and then returnning a ReferenceVector when a column is requested. |
| **`CSVfile`**       | A file manager that tracks a DataGrid.  When a DataGrid is output, make sure to properly sanitize any strings.  When it is loaded, handle string vs. double types logically. |
| **`ExpressionParser`** | A tool to read in a string and convert it into a function object.  It should take an equation (as a string) and convert it to a function that takes a container as input that it uses to draw values from. For example, you might design it so that the string "{3} + {7}" would produce a function that takes a vector as an argument and adds together the contents of indices 3 and 7, returning the result. |

### Application Suggestion

A **CSV-manipulation app**.  This program would load in files in a comma-separated-values (CSV) format and allow the user to perform manipulations.  For example they might remove rows or columns, merge files, or reorder the tables. The use should be able to also write short equations (that you could process using the ExpressionParser above) to create new columns.

Suggested **challenges**: Setup scripts in order to process data in a step-by-step fashion.  Alternatively, you could make a much more powerful expression parser to all for some spreadsheet-level functionality.  Python's [Pandas](https://pandas.pydata.org/docs/user_guide/index.html) library might also provide some inspiration for many more advanced features that would be useful in a system like this.



## <span id="group-6" style="color: blue">Group 6: Lamport</span>

**Members**: Emil Rahn-Siegel, Will Crawford, Ivan Bega, Mehmet Efe Caylan, and Orhan Aydin

**Shared Interests**: Games / Data Processing / Scripting

**Notable Strengths**: Algorithms, Databases

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`ArgManager`**    | A tool to take in the "argc" and "argv" values supplied by the commend line and convert them into flags and settings.  Once option is to set up the ArgManager to load in all of the command-line options (and how many arguments each takes) before you pass in argc and argv, then options can be triggered automatically and a "--help" (often shortened to '-h') can automatically generate a list of all of the options.  More advanced versions might also handle URL query params for web application or interface with config files. |
| **`CommandLine`**   | A call for managing a command-line process.  Programmers should be able to specify a set of known commands and which functions should be called if those commands are triggered.  Such a setup would allow end users to provide traditional command-line inputs and this object automatically takes care of the routing it to the correct functionality.  Ideally it would include extra tools like history tracking and state tracking. |
| **`ErrorManager`**  | A set of tools to manage errors that occur, providing a clear message to the user (perhaps even color-coding? or appearing in a web browser). You should be able to configure the class to specify an alternative action to take when an error occurs (for example, a command-line app might want to intercept the error to use as feedback). You should also be able to have multiple levels of errors (at least separate warnings and fatal errors) |
| **`StaticString`**  | Like an std::string, but a maximum number of characters is set up front with all memory allocated at once.  Size cannot go over the static limit, but makes for fast class when manipulating many strings. |
| **`StringSet`**     | A container with a set of strings and various methods to simplify using the container.  You can choose to set this up with regular std::string objects or with StaticString, or else you can make it a template so that the programmer can decide which type to use inside of it. The container should be able to handle operations like filter (to keep only strings that meet a certain criterion), filter out (to remove strings that meet a criterion) and well as union, intersection, and difference between two different StringSets. |

### Application Suggestion

A **Word-manipulation Language**. Build a simple scripting language that allows you to load words from a word-list file and then filter those words by sequence, length, etc.  This language should be useful for creating or solving word games.  For example, if you were trying to solve a Wordle, you could filter the list to words of length 5, and that have or do not have letters and particular positions or at all in a word.  This system should also make it easy to make crossword puzzle or play games like Scrabble. You should use your CommandLine class to use this language interactively.  Note that this project is similar to a language Dr. Ofria started to make in CSE 450, but that project didn't get far.

Suggested **challenges**: Add some puzzle-specific features into the language.  For example, providing an exact result after a Wordle guess and automatically filtering the possibilities down (Or asking it what the next best word to guess would be given the current word list remaining.) For Scrabble, it could know letter scores, so if you get it available letters it could help you find the maximum scoring word.


## <span id="group-7" style="color: blue">Group 7: Euler</span>

**Members**: Anand Pinnamaneni, Bao Tran, Duong Tran, Siddhartha Bhattacharya, and Nathan Staniszewski

**Shared Interests**: Science

**Notable Strengths**: Algorithms, Math

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| *Output Log* | A simple logging system for programmers to log events of their choice; often helpful for debugging. It may have multiple levels of output, perhaps "Silent", "Normal", "Verbose", and "Debug". Consider optional time-stamps on log. |
| *Audited Array*  | Functionality of `std::array` (possibly called `cse::array`) but when compiled in debug mode, checks every index attempt to ensure it is valid and in range; similar checks for iterators.  You can define you array as `template <typename T, size_t N> struct array;` as you begin to develop it.  Unfortunately you can not derive directly from `std::array` because that class is an "[aggregate type](https://en.cppreference.com/w/cpp/language/aggregate_initialization)", which, in part, means that it cannot be inherited and keep its properties.  |
| **`DataFileManager`** | A class to manage a data file where the user may want to periodically update its status.  When an `Update()` method is called, the manager should trigger a set of stored functions to build a new row in the fole; each result from the function calls should be placed in their own columns. |
| **`Scheduler`**     | Schedules a set of processes based on a "priority" measure and returns the ID of which one should go next. The priority of a process should be proportional to how often it is scheduled. This class can be built to be probabilistic or evenly integrated. |
| **`Serializer`**    | A tool to either SAVE or LOAD values from memory.  When `serializer.Serialize(x)` is called on value `x`, it should either save or load the value based on the current mode.  When stepping through code in "save: mode, it stores everything to a stream; in load mode it would step through the same set of function (with the same `Serialize` calls) going in the same order and pulls everything out from the stream to restore state. |

### Application Suggestion

An **ecology simulator**.  A user provides a set of species and how species interact.  For example, wolves eat rabbits, but have only a small chance of finding any given rabbit.  If there are a lot of rabbits, the wolves eat well, but if there are too few the wolves have trouble finding any.  This should create traditional predator-prey oscillations, as described by [Lotka-Volterra equations](https://en.wikipedia.org/wiki/Lotka%E2%80%93Volterra_equations).  Note that you don't need to implement the equations directly, the system should produce them naturally.  While having two species is well understood, the math becomes far more complicated when you add in too many more, but natural ecologies have a huge number of species.

Suggested **challenges**: This is an obvious choice for a web app, and it would be fascinating to watch.  Connecting it in to natural studies to see if the results match would also be very useful.



## <span id="group-8" style="color: blue">Group 8: Turing</span>

**Members**: Joanna Rodriguez Zamarron, Ryon Baldwin-Williams, Kelsi Elliott, Hannah Dale, and Caden McDonald

**Shared Interests**: Productivity / Social Media

**Notable Strengths**: Software Engineering, User Interfaces, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`AnnotatedWrapper`** | A base class that provides "annotating" features to any derived class.  A simple form of annotations would be tags assocated with the class. |
| **`DynamicString`** | An intersperced mix of strings and functions.  Can convert to a regular string by calling the functions and making the results into strings.  Functions will be called again each conversion, so the string could change.  For example, it could have a time stamp in it, or be tracking the value of a variable. |
| **`RandomAccessSet`** | The std::set object is supposed to rapidly tell whether an object is a member, as well as add or remove members.  A random_access set should also keep an array back-end for when stepping through entries. |
| **`TagManager`**    | A pseudo-container to track string tags on entires and be able to quickly identify all entries associated with a particular tag. |
| **`AuditedPointer`** | Template class that behaves like a raw pointer outside of "DEBUG" mode, but does extra correctness checks when debugging.  For example once a pointer is deleted, it should not allow you to dereference it (or delete it a second time).  What a program terminates, it should check to make sure that all AuditedPointers have been deleted. You can either override C++'s `new` and `delete` or use `New()` and `Delete()` style member functions.  I also recommend a stand-along `MakeAudited` template function that works similarly to [`std::make_shared()`](https://en.cppreference.com/w/cpp/memory/shared_ptr/make_shared). |

### Application Suggestion

A **Social To-Do List**.  Many to-do lists exist online, and some can even be shared, but this would be a simple to use system for managing groups of people, perhaps planning an event or trying to complete a coding project for a CS course.  A user invites others onto the lists and then every can lay-claim to todo items.  Even better is if each todo item can be expanded into a sub-list, so that bigger projects can always be broken down into smaller pieces.  You should also be able to tag items and then search for all items with a given tag.

Suggested **challenges**: Adding security to a system like this would be valuable.  Another option would be to add an old-fashioned AI-helper that identifies todo items that are important an have sat around to long.  If you mark how long you expect items to take, it could even suggest taking a bigger item and breaking it down into a smaller list as an action you might want to do.



## <span id="group-9" style="color: blue">Group 9: Liskov</span>

**Members**: Allie Ianello, Mia Bodenhorn, Mary Holt, Grace Fitzgerald, and Owen Haiar

**Shared Interests**: Games / Productivity

**Notable Strengths**: Algorithms, Databases, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`EventQueue`**    | Track a series of events to trigger based on priority or timepoint; likely a heap data structure. |
| **`EventManager`**  | A handler for an EventQueue that can deal with repeating events (putting them back in, as appropriate) when triggered.  Can also handle clock based timings to space out when events are triggered. |
| **`Image`**         | A representation of a web image; should maintain the URL of the image, its size, and eventually able to trigger JS code to put it on the web. |
| **`TextBox`**       | Management object for a web-based text box |
| **`WebLayout`**     | A manager for web pages, including what text or images are on the page and where they should go. |

### Application Suggestion

A **Choose-Your-Own Presentation** manager.  The goal would be to create a simple web-based presentation scripting language where you indicate where text or images should go on each slide.  You should also be able to put buttons on the slides that jump you elsewhere in the slide deck.  This would allow people to easily create dynamic presentations, and people could even create simple games using the system.

Suggested **challenges**: Add extra features for real-time customization, such as entering something in a textbox (like a name or an example animal) that they system stores and can use on later slides.


## <span id="group-10" style="color: blue">Group 10: Bellman</span>

**Members**: Alex Mueller, Blake Crimmins, Amery Johnson, Devon FoxElster, and Ephraim Bennett

**Shared Interests**: Science / Social Media

**Notable Strengths**: A.I. / Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`BruteForceOptimizer`** | A tool to explore all possible combinations of a set of inputs to maximize a value function.  Should handle backtracking and bounding (if the value function is NaN, backtrack, include a second MAX value function to help bounding) |
| **`ComboManager`** | A tool to manage combinations of items from a container.  Should be able to step through them all or do branching with each included / excluded. |
| **`StaticVector`**  | Like `std::vector`, but a maximum vector size is specified in the template parameter and all memory is allocated at object creation.  Size cannot go over the static limit, but it will likely be much faster than `std::vector` in many instances. |
| **`MemoFunction`** | A function wrapper that automatically caches inputs to output -- if the same input is used a second time, it should immediately return the output rather than call the function again. |
| **`MemoryFactory`** | A simple memory manager where collections of the same type are stored to be given out as requested (more should get allocated when an existing supply is exhausted) |

### Application Suggestion

A **Citizen-Science web console**.  It can be challenging to build a citizen-science application where the data is fed back in to the central hub in a useful manner.  Pick an NP-Hard problem that you build a solver for (using the tools above) and then a website where problem instances can be placed, along with a spot for people to run it.  It should be included with the result on the site after being solved.

Suggested **challenges**: One fun challenge would be to attach the citizen-science console to a different problem, perhaps one you find online or else the projects put together by one of the other groups (groups 3 or 7 might work particularly well.)
