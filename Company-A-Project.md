# Company "A" Projects

Company "A" specializes in computer games with seven development groups involved.  You will get to decide many of the details of the games as well as the name of your company, following the rules below.

## Group Descriptions and Memberships

In all cases, your group number is the classroom table where you should sit!  There will be some open tables (there are 21 groups but 24 tables), so some shifting of tables will be possible.  For the most critical groups (agents, worlds, and GUIs) there are two different versions of each module such that in the unlikely event that one of the modules fails to be finished, the software as a whole will still run.  These modules will be enough different from each other that having both working will add meaningful capabilities to the resulting games.

**Group 1**, _AI Agents_: This group will develop agents that travel through a game world, interacting with it while displaying some capacity for learning.  You may use any standard AI techniques that you choose, as long as they are in C\+\+ and can be used in Emscripten (most C\+\+ can be compiled this way without any problem.) Options include [neural networks](https://en.wikipedia.org/wiki/Neural_network_(machine_learning)), [goal-oriented action planning (GOAP)](https://medium.com/@vedantchaudhari/goal-oriented-action-planning-34035ed40d0b), [genetic programming](https://en.wikipedia.org/wiki/Genetic_programming), or many other techniques.

_Members_: Arnav Enaganti, Arya Amiri, Jordan Sebagh, Mayank Gudi, and Eddie Lim

**Group 2**, _Classic Agents_: This group will develop a set of agents with pre-defined behaviors that will be useful in the range of games that are targeted by the company.  Individual agents should be capable of one or more behaviors, with will defined triggers to shift between them.  For example, a standard monster might use the "explore" behavior until it sees a player, then shift to the "chase" behavior.  If it's health drops low, it might shift to the "flee" behavior.  The group should implement either a large set of simpler behaviors (to control a variety of NPC types) or else a smaller number of more sophisticated behaviors.

_Members_: Logan Rimarcik, Ty Maksimowski, Luke Antone, Henry Finfrock, and Jacob Bettinger

**Group 14**, _Interactive World_: This world should have a sophisticated structure that allows for a wide range of interaction types between agents and the world, agents and the player, or agents and each other.  For example, if you choose to make an RPG-style game world, then possible interaction types might be a detailed magic system, items that can combine with each other, a sophisticated trading system, skills that allow different actions in different circumstances, worlds that change over time or through agent actions (e.g., growing crops), or anything else of the like; you should decide what you want to make work and optimize to be efficient.

_Members_: Ho Wang Ho, Riley Moorman, Curtis Lunn, Henry Yang, and Caleb Shin

**Group 15**, _Generative World_: This world should be one that algorithmically generates as the player explorers it, similar to many rogue-like games.  You may decide on the type of game world (for example, it could be a generative dungeon, generative terrain, or generative platformer-levels), but should make sure that the generation techniques that you use create interesting and playable game elements, with appropriate rising difficulty to make the game fun.

_Members_: Abigail Franzmeier, Rachel Loren, Joey Hyun, Paul Bui, and Zhixiang Miao

**Group 16**, _Data Collection and Analysis_: This group should develop tools to collect information appropriate to the games being made by the company.  For example, you may log all agent actions in order to be able to replay a scene or a whole game.  You might also track where players are spending their time in order to provide feedback to game designers -- perhaps there are spot where players stay longer than expected because they are more challenging or confusing than they are supposed to be.  You can also provide timing information to help optimize the rest of the game for performance.  Come up with a full set of data to track and work with the other groups to make sure you can provide useful feedback.

_Members_: Aneesh Joshi, Daniel Gao, Nathan Charters, John Rouse, and Tyler Murray

**Group 17**, _GUI Interface_: You may choose any standard C\+\+ GUI package (such as Qt, WxWidgets, FLTK (Fast Light Toolkit), GTK / gtkmm, SFML, or many others) to develop an interface to the other modules that will allow a user to play the game.  The Interface should mostly use the Agent API, since a player should mostly be treated like any other agent, though the GUI may need to collect some additional information to provide a proper display for the user.  You may also need to implement a "god mode" to allow world editing or viewing beyond the player characters range.

_Members_: Anagha Jammalamadaka, Kiana May, Hugh Mark Sanchez, Sitara Baxendale, and Deni Tepic

**Group 18**, _Web Interface_: Similar to the GUI Interface above, but you should use Emscripten along with more tradition web tools (JavaScript, HTML5, and associated packages) to build a user interface module for the games.  As with the GUI above, this Interface should mostly use the Agent API, since a player should mostly be treated like any other agent, though the GUI may need to collect some additional information to provide a proper display for the user.  You may also need to implement a "god mode" to allow world editing or viewing beyond the player characters range.

_Members_: Pinhe Du, Tung Xuan Hoang, Feichi Cai, Lance Motowski, and Alexander Elkins


## Group C++ Classes

Each group has five members and five C\+\+ classes that you need to write.  Each group member should take the lead on on one of the classes, but you should make sure that all five turn out to be solid as they will be critical for your group and potentially other groups in your company.

You will design all of the details for these classes, an may change the name or the emphasis, even substituting a whole different class that you believe will be more useful to you.

### Group 1: _AI Agents_

**`AnnotationSet`** - An annotation set is a collection of tags or other string-based annotations associated with an object.  It provides a simple way of tracking arbitrary data, allowing AI agents to maintain a memory about other agents, items, or places that they have encountered.  It should interact closely with the `TagManager` (see next).

**`TagManager`** - A tag tracker so that works with `AnnotationSet` so that objects with a given tag can be identified rapidly, as well as combinations of tags.  For example, you should be able to search for objects with tag A and tag B, but not tag C.  Think about the best interfaces for the class and how found object should be reported back (by an id?  by reference?  by pointer?)

**`FeatureVector`** - A feature vector is a pre-defined set of qualities that are measured for an object.  For example, you might have a vector of 20 different features and be able to find the ones that maximize or minimize specific combinations of these features.  Note that for speed you can ensure that features are always at a given index and the same set of feature always exists for a given set of FeatureVectors.

**`MemoryFactory`** - A simple memory manager where collections of the same type are stored to be given out as requested (more should get allocated when an existing supply is exhausted).  When a new object of the factory type is created, the factory should provide the memory for it.  When an object is deleted, the factory should reclaim the memory to be handed out again.  Since object sizes are fixed in C++, this provides a much faster way of allocating object if you know you are going to need to do frequent allocations and freeing of memory, especially for classes where speed is of the essence, such as an AI Agent.

**`RobinHoodMap`** - This is a type of hash table that is much faster than the standard library's `std::unordered_map`.  You should implement a core set of map features so in order to take advantage of the speed here -- it is likely a much better alternative whenever you need a map.


### Group 2: _Classic Agents_

**`ActionMap`** - A map of strings to functions.  A function can be triggered by providing its name and arguments (if any).  Can be useful in supplying a list of user actions when building a dynamic interface.  It should have member function like `AddFunction(std::string name, std::function<void()> fun);` and `Trigger(std::string name);`

**`BehaviorTree`** - 

**`WorldPath`** - A series of points that track the movement of an agent through a world.  These should rapidly be able to give the user information about the path, such as its length, whether it crosses back on itself and perhaps additional calculated information such as the furthest two points apart.  These will be every useful in carrying out an agent's behavior (for example, laying out a path for it to follow.)

**`PathGenerator`** - This class should be able to take information from a game World (or at least the known portions of it) and generate `WorldPath` objects with particular qualities, such as the shortest path, a patrol path, a path from A to B that stays away from C, etc.  Come up with a set of path types that you believe will be useful.

**`MemoFunction`** - A function wrapper that automatically caches inputs to output -- if the same input is used a second time, it should immediately return the output rather than call the function again.  Start by making MemoFunction handle a single input, but for a harder challenge you can set it up to handle functions with multiple parameters.  You could also add an eviction policy if you want to limit the number of values stored (typically you would remove the oldest stored values, but you may also want to remove values due to collisions in the hash table.)


### Group 14: _Interactive World_

**`ExpressionParser`** - A tool to read in a text string and convert it into a function object.  It should take an equation (as a string) and convert it to a function that takes a container as input that it uses to draw values from. For example, you might design it so that it takes a `std::map<std::string, double>`.  If you give it the string "value * scale + offset", it would generate a function that operates on the map, looking up the keys "value", "scape", and "offset", and then returning the numerical result implied by the expression.  You could even have it use a `std::vector<double>` where an expression might look like the string "{3} + {7}", where it would produce a function that takes a vector as an argument and adds together the contents of indices 3 and 7, returning the result.

**`DataMap`** - A dynamic map that can match names to arbitrary types of data.  The user will need to provide the type it is set (if it isn't clear) AND that same type when getting the value; the object should detect of wrong types are used, typically by throwing an assert.  For example, `Set("health", 45.0)` would set a variable named "health" to a double of value 45.0.  To get it again, you would need to use `Get<double>("health")` to make sure the type is know at compile time. Get should have an `assert` that is tripped if the wrong type is specified.

**`FunctionSet`** - A container that can hold a collection of functions, all with the exact same signature.  These functions can all be called with a single set of arguments passed in to the FunctionSet; each stored function should be called, one at a time.

**`Scheduler`** - Schedules a set of processes based on a "priority" measure and returns the ID of which one should go next. The priority of a process should be proportional to how often it is scheduled. This class can be built to be probabilistic or evenly integrated.

**`EventQueue` (or `PriorityQueue`?)** - Track a series of events to trigger based on priority or time point; you should likely use a heap data structure to track which event is next.  A user of the class should be able to request the timing of the next event (peeking at it without removing it), as well and pop the event out of the queue. If two events have the same timing, you should have a consistent method of breaking ties (perhaps by first added or by using secondary value)


### Group 15: _Generative World_

**`Random`** - A random number generator.  User should supply the range (and perhaps a numerical type) and the object should return a uniform random value in that range. The constructor should take an optional random number seed, defaulting to a value based on time.  Member functions could include `double GetDouble(double min, double max)` and `double GetInt(int min, int max)` (and perhaps variants), as well as `bool P(double probability)`, which you give the probability of "true" and it flips the appropriate weighted coin for you.  I recommend using a faster and better random number generator than those found in the standard library, such as a [Xoshiro](https://en.wikipedia.org/wiki/Xorshift#xoshiro) variant.

**`WeightedSet`** - Like an [`std::set`](https://en.cppreference.com/w/cpp/container/set), but each item has a numerical "weight" associated with it.  A user should be able to index into the set with a value between 0.0 and total weight of all items.  For example, if there are three items, A, B, and C, with associated weights 0.5, 3.1, and 1.5, then the total weight would be 5.1.  In that range, 0.0 to 0.5 would give you A, >0.5 through 3.6 would give you B, and >3.6 through 5.1 would give you C.  Randomly indexing in allows you to pull a weighted random value from the set.  The tricky part is making this fast even when there are many items in the set.  Some tree-based data structures will be especially effective.

**`DataFileManager`** - A class to manage a data file where the user may want to periodically update its status.  When an `Update()` method is called, the manager should trigger a set of stored functions to build a new row in the file; each result from the function calls should be placed in their own columns.

**`StateGrid`** - A dynamic 2D grid where each position is one of a set of pre-defined states. Each state type should have a name, a symbol, and any other information the define that state (perhaps as a DataMap). For example, if a StateGrid was used to represent a maze, you might give it two types: a "wall" with the symbol '#' and the property "Hardness" set to 20, as well as an "open" state with the symbol ' ' (space) and no properties.

**`StateGridPosition`** - Track a single position (and orientation?) in the state grid to manage an individual agent moving through it.  Should be able to compare with other `StateGridPosition`'s in useful ways.


### Group 16: _Data Collection and Analysis_

**`DataLog`** - An object to track a series of data values over time.  It should be able to return the mean, median, min, max, or number of values collected at any point in time; other stats could also be helpful. If you want to scale up it's capabilities, you can set template flags that specify what it should track, even to the point of saving all values.

**`ActionLog`** - An object to track the moves made by all active agents in the current World.  It should track perfect timings between moves (to the extent that specific timing are important)

**`ReplayDriver`** -An object to take control over all agents in a world and read in an `ActionLog` to full reply everything that occurred during a previous run of the program.

**`Timer`** - A tool to make precise timing measurements.  It should be told when to start and stop, but also be giving a name for the timing so that it can track multiple different times and compare them as needed.

**`OutputManager`** - A simple logging system for programmers to log events of their choice; often helpful for debugging. It may have multiple levels of output, perhaps "Silent", "Normal", "Verbose", and "Debug". Consider optional time-stamps on log.

### Group 17: _GUI Interface_

_Note_: Depending on the GUI library that you choose, some of the options below may already be provided to you.  If so, you may either create a better version, substitute them out for one of the alternative classes listed below, or suggestion your own alternative that you believe would be useful for your goals.

**`ImageManager`** - An object that handles image assets by name, pre-loading them (if needed) and displaying them on the screen as requested.

**`ImageGrid`** - A grid of images (presumably from the `ImageManager`) that can be displayed as a unit.  Simplifies the drawing a World background for the users.  Typically agents and items would be layered on top of this `ImageGrid`.

**`Menu`** - A set of options that can be modified as needed in code.  These options should be able to be provided through the GUI to a user, and when one is chosen it should be associated 

**`Text`** - A form of string that also tracks text properties, such as font, color, boldness, size, etc.

**`ErrorManager`** - A set of tools to manage errors that occur, providing a clear message to the user based on saved functions that the programmer can override.  For example, in a terminal, it should print the errors to the screen (perhaps even in color), while in your GUI it might pop up a message on the screen.  You could have it more versatile so that if the program is compiled to the web it might either pop up an alert or write to the web console. You could also make the class configurable to specify an alternative action to take when an error occurs (for example, a command-line app might want to intercept the error to use as feedback). You should also be able to have multiple levels of errors (at least separate "warnings" from "fatal errors", but you may want other levels of severity, debug messages, or something else.)


### Group 18: _Web Interface_

**`WebImage`** - A class to manage an HTML image from your C\+\+ code.  It should simplify image usage in the program, handling asset loading and allowing a programmer to select size, position, alt text, etc, through C\+\+ functions.

**`WebTextbox`** - A class to manage an HTML text block from your C\+\+ code, including font and format information.

**`WebButton`** - A web button that will call a designated function when clicked.  You should have some control over the button properties (size, coloring, ability to disable, etc) depending on what you believe will be most useful.

**`WebCanvas`** - A class to manage an HTML5 canvas object, allowing more dynamic drawing to the screen.

**`WebLayout`** - A class to manage the layout of other web objects on the screen, directly interfacing with the HTML DOM.

### Alternative Classes

If you believe that one of the following C\+\+ classes would be more useful than the classes assigned to your group, check with the instructor advising your group, but we are likely to support you shifting over to it.

**`Assert`** - Traditionally, asserts are done with C\+\+ macros, so this coding will require you to learn more about the pre-processor or more modern C\+\+ techniques.  The idea would be to have an assert-style function that checks the first argument.  If it resolves to `true`, everything is fine, but if it resolved to `false` a internal error must have occurred in the code.  You can allow it to take additional arguments, for example to print extra debugging information for you, and you can have it specially work in different interfaces (such as a GUI package or on the web.) The key here is that if the program is compiled with an NDEBUG (no debug) flag, the asserts should not be checked at all, thus not costing any additional execution time.

**`AuditedPointer`** - Audited classes are similar to asserts, but with extra bookkeeping that occurs only in debug mode.  In the case of an audited pointer, this means it makes sure that the pointer is properly allocated before you, properly deleted before the end of the program, and never used again after it is deleted.

**`AuditedArray`**, **`AuditedString`**, and **`AuditedVector`** - These audited classes will track to make sure that you never index out of bounds and that when you use iterators, you keep track of version numbers (again in debug mode only) so that if the underlying object has changed, the iterator is invalidated and you are given an error.

**`ComboManager`** - When you are looking for all combinations of _k_ items in a set of _n_ items, this class will help you step through all of them quickly and in a sensible order.

**`Datum`** - A simple value that can be read or written to as multiple types (typically either `std::string` or `double`.)  It should have an `std::variant` under the hood (to always store values in the type they were provided), but easily convert as needed.  So if you run `AsString()` on a `Datum` it will either print the string it was saved as or else run `std::to_string` on the underlying double, without need for the programmer to know which it is.  Basic operators should be implemented as well with intuitive behavior. You should also come up with rules for how to handle edge cases (for example, if `AsDouble()` is called on a string that can't easily be converted to a double, should it use 0? NaN (a special double value representing "not-a-number")? Or throw an exception?).

**`DataGrid`** - A DataGrid should manage a 2D grid of Datum values (strings or doubles). The user should be able to request a row or column to manipulate. Consider storing the grid as a collection of rows and then returning a ReferenceVector when a column is requested.

**`Distribution`** - Create or manage a discrete distribution of values that can be used to draw a random value from whatever distribution you need (for example, a Binomial distribution). Pre-calculation of distributions can allow for fast random draws.

**`DynamicString`** - An interspersed mix of [`std::string`s](https://en.cppreference.com/w/cpp/string/basic_string) and functions (presumably stored using [`std::function`](https://en.cppreference.com/w/cpp/utility/functional/function)).  It should have a `ToString()` function that will append each of these together, calling the functions and making the results into strings.  Functions will be called each time conversions occur, so the string can dynamically change over time.  For example, if a string has a time stamp in it, the current time would be printed.  Or you could track the current value of a variable: `DynamicString str("x = ", x);`.

**`FixedPoint`** - A simple class that can handle decimal values, but with a fixed precision; likely an integer type under the hood.  You should plan to overload all of the standard mathematical operators and set up conversions to other mathematical types. Conduct speed tests to determine if this will be a faster choice than `double` for the project.

**`IndexSet`** - A collection of indices from another container.  This is a quick way to track sets of indices, for example those that have a special property.  A simple way of implementing this functionality is simply keeping a set of indices, but faster options could be tracking ranges of indices (e.g., 106-112, 152-225) if they are clustered, or using a bit vector if they are not.

**`StaticString`** - Like an [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string), but a maximum number of characters is set up front with all memory allocated at once.  Size cannot go over the static limit, but makes for fast class when manipulating many strings.

**`StaticVector`** - Like [`std::vector`](https://en.cppreference.com/w/cpp/container/vector), but a maximum vector size is specified in the template parameter and all memory is allocated at object creation.  Size cannot go over the static limit, but it will likely be much faster than `std::vector` in many instances.

**`StringSet`** - A container with a set of strings and various methods to simplify using the container.  You can choose to set this up with regular `std::string` objects or with StaticString, or else you can make it a template so that the programmer can decide which type to use inside of it. The container should be able to handle operations like filter (to keep only strings that meet a certain criterion), filter out (to remove strings that meet a criterion) and well as union, intersection, and difference between two different StringSets.