---
layout: default
---

# Company "C" Projects

(Note, you will be naming your own company)

Company "C" specializes in social interaction software to get users to interact in a variety of ways.  These could be communities that players move through having conversations with those nearby (think of it like a message board site like reddit, but with a spatial component), it could be a collective-construction world where users can make games or other experiences for each other, or it could even be a productivity-focused piece of software where AI's help organize to-do lists and push products to the finish line (many real-world office spaces divide up tasks by location rather than individual roles; for example whoever goes by the mail desk will box up and send out packages; this could be a virtual equivalent.) It could even just be a "cozy" game.

The company had seven development groups involved that must all work closely together.  This project is intentionally structured to feel more like a real software engineering effort than a traditional class assignment. You will be working in partially-independent teams, negotiating interfaces, dealing with incomplete or changing components, and making tradeoffs between ambition and reliability as you design one or more of your own scientific simulations and bring them to life. Part of the learning goal is to experience and manage these realities productively.


## Group Descriptions and Memberships

In all cases, your group number is the classroom table where you should sit!  There will be some open tables (as there are 21 groups but 24 tables), so some shifting of tables will be possible.  For the most critical groups (agents, worlds, and GUIs) there are two different versions of each module such that in the unlikely event that one of the modules fails to be finished, the software as a whole will still run.  These modules will be enough different from each other that having both working will add meaningful capabilities to the resulting simulations.

**Group 5**, _AI Agents_: This group will develop agents that travel through a social-focused World, interacting with it while displaying some capacity for learning or meaningful interaction.  You may use any AI techniques that you choose, as long as they are in C\+\+ and can be used in Emscripten (most C\+\+ can be compiled this way without any problem.) Any training code may run natively if you export trained policies in a portable format. Options include [neural networks](https://en.wikipedia.org/wiki/Neural_network_(machine_learning)), [goal-oriented action planning (GOAP)](https://medium.com/@vedantchaudhari/goal-oriented-action-planning-34035ed40d0b), [genetic programming](https://en.wikipedia.org/wiki/Genetic_programming), or many other techniques.

_Members_: David Kaczanowski, Sachin Karatha, Shashank Sai Papani, Ahmed Ezaz Hamid Labib, and Shamar Dotson

**Group 6**, _Classic Agents_: This group will develop a set of agents with pre-defined behaviors that will be useful in the range of social worlds that are targeted by the company.  Individual agents should be capable of one or more behaviors, with well-defined triggers to shift between them.  For example, a agent might be sent to "explore" behavior until it finds something a user is looking for, then shift to the "obtain" behavior before bringing the item back to the user.  Agents might also build a structure, as requested by the user.  The specific behaviors needed should depend on the types of Worlds the agents need to interact in.

_Members_: Dillan Kowalski, Joshua Thomas, Arnav Deol, Matthew Vazquez, and Bryent Shepherd


**Group 7**, _Dynamic World_: This world could be a simple one (likely grid based) where agents have the ability to make permanent changes, either through regular "gameplay" or direct construction mechanisms.  You may choose to implement permissions on sections of the world, so they can be built by one agent, but interacted with by other agents in a collective world-building experience.  You should provide a large range of possible elements in the world, and perhaps "tags" that can go on items to give them specific abilities.  For example, if you decide that the world should be a Sims-style city, agents might be able to build houses, with doors that can close (and maybe lock), add multiple levels to buildings, and perhaps even have appliances in kitchens that allow them to make food.  You have a lot of flexibility as to the type of world you would like to make.

_Members_: Dmitry Starodubtsev, John Korreck, Sehaj Gupta, Logan Langmeyer, and Myles Spencer-Walker

**Group 8**, _Interaction-Heavy Simulation World_: This world should be one whose primary complexity arises from the number and diversity of interactions between agents and between agents and the environment.  In this World, agents should be able to perform many different kinds of actions, react to the actions of others, and trigger chains of consequences that propagate through the system over time (such as using resources.) Possible simulation types might include an office building (with workers getting tasks completed), a university (with classrooms, recreation areas, etc), or even a cozy game setting a la Stardew Valley.

_Members_: Benjamin Forbes, John Masterman, Truong Phan, George Almeida, and Jose Hernandez

**Group 9**, _Database_: A key component of building any social system is having multiple human players being able to interact in something close to real time.  In the case of an action game, this would need to be done through fast network communications, but more lazy social interaction can be done through databases that store all of the key information and can get updated in parallel by any of the users.  You will be building this database module to help store information in the game (such as in message boards) as well as letting players interact in real time (such a setup can be quite responsive).

_Members_: Yashvasin Sai Reddy Siddavarapu, Krist Veseli, Mitchell McAuley, Andrew Shilman, and Ian Wettlaufer

**Group 23**, _Data Analytics_: This group should develop tools to collect information appropriate to the software being made by the company.  For example, you may log all agent actions in order to be able to replay a scene.  You might also track where users are spending their time in order to analyze which areas of a World are the most interesting or some people are getting stuck.  You can also provide timing information to help optimize the rest of the system for performance.  Come up with a full set of data to track and work with the other groups to make sure you can provide useful feedback.

_Members_: Lauren Phillips, Collin Massmann, Muhammad Chohan, Meghan Carter, Ismail Abdi

**Group 24**, _Web Interface_: You should use Emscripten along with more traditional web tools (JavaScript, HTML5, and associated packages) to build a user interface module.  This module should interface to the rest of the system mostly through the Agent API (since a user is just another agent), but may need to collect some additional information for proper display.  You may use some packages already designed to work with Emscripten (such as SDL, which also has good video tutorials on YouTube).  This Interface should be tailored to the needs of the system, allowing users to control configuration settings, agent behaviors, or anything else that would likely be useful.

_Members_: Sadwal Patel, Prijam Khanal, Naod Ghebredngl, Abigail MacKersie, Tess Gonda


## Group C++ Classes

Each group has five members and five C\+\+ classes that you need to write.  Each group member should take the lead on on one of the classes, but you should work together to make sure that all five turn out to be solid as they will be critical for your group and potentially other groups in your company.

You will design all of the details for these classes, and may change the name or the emphasis; given a good argument, you can even substitute a whole different class that you believe will be more useful to you.  You will come up with unit tests and a small demo program so other groups can use your code comfortably and safely.


### Group 5: _AI Agents_

**`AnnotationSet`** - An annotation set is a collection of tags or other string-based annotations associated with an object.  It provides a simple way of tracking arbitrary data, allowing AI agents to maintain a memory about other agents, items, or places that they have encountered.  It should support adding and removing arbitrary tags and interact closely with the `TagManager` (see next).

**`TagManager`** - A tag tracker so that works with `AnnotationSet` so that objects with a given tag can be identified rapidly, as well as combinations of tags.  For example, you should be able to search for objects with tag A and tag B, but not tag C.  Think about the best interfaces for the class and how found objects should be reported back (we recommend by a unique id to avoid lifetime issues, but you could also do this by reference or by pointer.)

**`FeatureVector`** - A feature vector is a pre-defined set of qualities that are measured for an object.  For example, you might have a vector of 20 different features and be able to find the ones that maximize or minimize specific combinations of these features.  Note that for speed you can ensure that features are always at a given index and the same set of feature always exists for a given set of FeatureVectors.

**`RobinHoodMap`** - This is a type of hash table that uses open addressing and is much faster than the standard library's [`std::unordered_map`](https://en.cppreference.com/w/cpp/container/unordered_map.html), though it does suffer from iterator invalidation if new entires are added to the container.  You should implement a core set of map features so in order to take advantage of the speed here -- it is likely a much better alternative whenever you need a map.

**`FunctionSet`** - A container that can hold a collection of functions, all with the exact same signature.  These functions can all be called with a single set of arguments passed in to the FunctionSet; each stored function should be called, one at a time.

### Group 6: _Classic Agents_

**`BehaviorTree`** - A structured way to build complex agents with decision-making from small reusable pieces. Implement a tree of nodes that are “ticked” each decision step and return one of three statuses: Success (1), Failure (0), or Running (-1). Provide core composite nodes such as "sequence" (run children in order until one fails), "select" (run children until one succeeds), of decorator nodes such as "invert" or "continually repeat". Leaf nodes should be either external states (to be read) or actions (to perform and return running/success/failure). The tree should support a simple memory map for passing information between nodes, and include tools for introspection (e.g., printing the currently active path, node tick counts, or a debug view of state transitions).

**`WorldPath`** - A series of points that track the movement of an agent through a world.  These should rapidly be able to give the user information about the path, such as its length, whether it crosses back on itself and perhaps additional calculated information such as the furthest two points apart.  These will be useful in carrying out an agent's behavior (for example, laying out a path for it to follow.)

**`PathGenerator`** - This class should be able to take information from a simulated World (or at least the known portions of it) and generate `WorldPath` objects with particular qualities, such as the shortest path, a patrol path, a path from A to B that stays away from C, etc.  Come up with a set of path types that you believe will be useful.

**`ActionMap`** - A map of strings to functions.  A function can be triggered by providing its name and arguments (if any).  Can be useful in supplying a list of user actions when building a dynamic interface.  It should have member function like `AddFunction(std::string name, std::function<void()> fun);` and `Trigger(std::string name);`

**`MemoryFactory`** - A simple memory manager (specifically, a [fixed-size pool allocator](https://en.wikipedia.org/wiki/Memory_pool)) where collections of the same type are stored to be given out as requested (more should get allocated when an existing supply is exhausted).  When a new object of the factory type is created, the factory should provide the memory for it.  When an object is deleted, the factory should reclaim the memory to be handed out again.  Since object sizes are fixed in C++, this provides a much faster way of allocating object if you know you are going to need to do frequent allocations and freeing of memory, especially for classes where speed is of the essence, such as an AI Agent.

### Group 7: _Dynamic World_

**`ExpressionParser`** - A tool to read in a text string that contains an expression and convert it into a function object that takes a container as input that it uses to draw values from. For example, you might design it so that it takes a `std::map<std::string, double>`.  If you give it the string "`value * scale + offset`", it would generate a function that operates on the map, looking up the keys "`value`", "`scale`", and "`offset`", and then returning the numerical result implied by the expression.  You could even have it use a `std::vector<double>` where an expression might look like the string "`{3} + {7}`", where it would produce a function that takes a vector as an argument and adds together the contents of indices 3 and 7, returning the result.

**`DataMap`** - A dynamic map that can match names to arbitrary types of data.  The user will need to provide the type it is set (if it isn't clear) AND that same type when getting the value; the object should detect of wrong types are used, typically by throwing an assert.  For example, `Set("health", 45.0)` would set a variable named "health" to a double of value 45.0.  To get it again, you would need to use `Get<double>("health")` to make sure the type is know at compile time. Get should have an `assert` that is tripped if the wrong type is specified.

**`StateGrid`** - A dynamic 2D grid where each position is one of a set of pre-defined states. Each state type should have a name, a symbol, and any other information the define that state (perhaps as a DataMap). For example, if a StateGrid was used to represent a maze, you might give it two types: a "wall" with the symbol '#' and the property "Hardness" set to 20, as well as an "open" state with the symbol ' ' (space) and no properties.

**`StateGridPosition`** - Track a single position (and orientation?) in the state grid to manage an individual agent moving through it.  Should be able to compare with other `StateGridPosition`'s in useful ways.

**`Scheduler`** - Schedules a set of processes based on a "priority" measure and returns the ID of which one should go next. The priority of a process should be proportional to how often it is scheduled. This class can be built to be probabilistic or evenly integrated.


### Group 8: _Interaction-Heavy Simulation World_

**`Random`** - A random number generator.  User should supply the range (and perhaps a numerical type) and the object should return a uniform random value in that range. The constructor should take an optional random number seed, defaulting to a value based on time.  Member functions could include `double GetDouble(double min, double max)` and `double GetInt(int min, int max)` (and perhaps variants), as well as `bool P(double probability)`, which you give the probability of "true" and it flips the appropriate weighted coin for you.  I recommend using a faster and better random number generator than those found in the standard library, such as a [Xoshiro](https://en.wikipedia.org/wiki/Xorshift#xoshiro) variant.

**`WeightedSet`** - Like an [`std::set`](https://en.cppreference.com/w/cpp/container/set), but each item has a numerical "weight" associated with it.  A user should be able to index into the set with a value between 0.0 and total weight of all items.  For example, if there are three items, A, B, and C, with associated weights 0.5, 3.1, and 1.5, then the total weight would be 5.1.  In that range, 0.0 to 0.5 would give you A, >0.5 through 3.6 would give you B, and >3.6 through 5.1 would give you C.  Randomly indexing in allows you to pull a weighted random value from the set.  The tricky part is making this fast even when there are many items in the set.  Some tree-based data structures will be especially effective.

**`DataFileManager`** - A class to manage a data file where the user may want to periodically update its status.  When an `Update()` method is called, the manager should trigger a set of stored functions to build a new row in the file; each result from the function calls should be placed in their own columns.

**`EventQueue` (or `PriorityQueue`?)** - Track a series of events to trigger based on priority or time point; you should likely use a heap data structure to track which event is next.  A user of the class should be able to request the timing of the next event (peeking at it without removing it), as well and pop the event out of the queue. If two events have the same timing, you should have a consistent method of breaking ties (perhaps by first added or by using secondary value)

**`MemoFunction`** - A function wrapper that automatically caches inputs to output -- if the same input is used a second time, it should immediately return the output rather than call the function again.  Start by making MemoFunction handle a single input, but for a harder challenge you can set it up to handle functions with multiple parameters.  You could also add an eviction policy if you want to limit the number of values stored (typically you would remove the oldest stored values, but you may also want to remove values due to collisions in the hash table.)

### Group 9: _Database_

**`Datum`** - A simple value that can be read or written to as multiple types (typically either [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string) or `double`.)  It should have an `std::variant` under the hood (to always store values in the type they were provided), but easily convert as needed.  So if you run `AsString()` on a `Datum` it will either print the string it was saved as or else run `std::to_string` on the underlying double, without need for the programmer to know which it is.  Basic operators should be implemented as well with intuitive behavior. You should also come up with rules for how to handle edge cases (for example, if `AsDouble()` is called on a string that can't easily be converted to a double, should it use 0? NaN (a special double value representing "not-a-number")? Or throw an exception?).

**`DataGrid`** - A DataGrid should manage a 2D grid of Datum values (strings or doubles). The user should be able to request a row or column to manipulate. Consider storing the grid as a collection of rows and then returning a ReferenceVector when a column is requested.

**`Serializer`** - A class that will convert other classes into a string form (to be saved in a database) and also be able to take that string and covert it back into the original class.  For simple classes (and those in the standard library that your company is using) you should have function to handle them build into the Serializer.  For more complex classes made by your company, you should expect that class to build a serialize functions to assist with this process.  Sometimes the serializations you do will need to be recursive.  For example, you might serialize an array by first encoding its size, and then encoding that many instances of the type that the array contains.  If you don't want to build this from scratch, you are welcome to use existing libraries as long as they work with Emscripten (in most cases though, these might be more complicated than you really need).

**`StringCompressor`** - A tool to take a string an compress it into a smaller form to save memory.  This class will often be used with the serializer for large objects in order to minimize their size for storage and messaging.

**`StringDiff`** - Another form of compression, the StringDiff tool will be able to encode just the differences between two string, allowing simple "updates" to be stored when only a small part of a larger sequence is changed.

### Group 23: _Data Analytics_

**`DataLog`** - An object to track a series of data values over time.  It should be able to return the mean, median, min, max, or number of values collected at any point in time; other stats could also be helpful. If you want to scale up it's capabilities, you can set template flags that specify what it should track, even to the point of saving all values.

**`ActionLog`** - An object to track the moves made by all active agents in the current World.  It should track perfect timings between moves (to the extent that specific timings are important)

**`ReplayDriver`** -An object to take control over all agents in a world and read in an `ActionLog` to full reply everything that occurred during a previous run of the program.

**`Timer`** - A tool to make precise timing measurements.  It should be told when to start and stop, but also be giving a name for the timing so that it can track multiple different times and compare them as needed.

**`OutputManager`** - A simple logging system for programmers to log events of their choice; often helpful for debugging. It may have multiple levels of output, perhaps "Silent", "Normal", "Verbose", and "Debug". Consider optional time-stamps on log.











**`Point`** A point in 2D geometric space, with an X and Y coordinate.  This class should have many different functionalities for working with pairs of points, including standard mathematical operations, rotations, scaling, dot products, etc., depending on what will be useful for projects in your company.

**`Circle`** - A simple geometric shape that tracks its position and radius and can identify overlaps with other Circles or if a given Point lies inside of the circle.  You should make sure that it has a set of functionality that will be useful for projects in your company.

**`Box`** - Similar to `Circle`, this will define a simple geometric rectangle that tracks its position and dimensions and can identify overlaps with other shapes or if a given Point lies inside of it.  You should make sure that it has a set of functionality that will be useful for projects in your company.

**`Surface`** - An area that tracks a set of shapes, identifying all overlaps; particularly useful as the basis for a simple physics model. Make sure it can handle shapes moving and detecting overlaps as soon as they occur. For a speedup, you can either use sectors (where a circle can only overlap with circles in the same or neighboring sectors) or a more sophisticated [quadtree](https://en.wikipedia.org/wiki/Quadtree).


### Group 24: _Web Interface_

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

**`Distribution`** - Create or manage a discrete distribution of values that can be used to draw a random value from whatever distribution you need (for example, a Binomial distribution). Pre-calculation of distributions can allow for fast random draws.

**`DynamicString`** - An interspersed mix of [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string)s and functions (presumably stored using [`std::function`](https://en.cppreference.com/w/cpp/utility/functional/function)).  It should have a `ToString()` function that will append each of these together, calling the functions and making the results into strings.  Functions will be called each time conversions occur, so the string can dynamically change over time.  For example, if a string has a time stamp in it, the current time would be printed.  Or you could track the current value of a variable: `DynamicString str("x = ", x);`.

**`ErrorManager`** - A set of tools to manage errors that occur, providing a clear message to the user based on saved functions that the programmer can override.  For example, in a terminal, it should print the errors to the screen (perhaps even in color), while in your GUI it might pop up a message on the screen.  You could have it more versatile so that if the program is compiled to the web it might either pop up an alert or write to the web console. You could also make the class configurable to specify an alternative action to take when an error occurs (for example, a command-line app might want to intercept the error to use as feedback). You should also be able to have multiple levels of errors (at least separate "warnings" from "fatal errors", but you may want other levels of severity, debug messages, or something else.)

**`FixedPoint`** - A simple class that can handle decimal values, but with a fixed precision; likely an integer type under the hood.  You should plan to overload all of the standard mathematical operators and set up conversions to other mathematical types. Conduct speed tests to determine if this will be a faster choice than `double` for the project.

**`ImageManager`** - An object that handles image assets by name, pre-loading them (if needed) and displaying them on the screen as requested.

**`ImageGrid`** - A grid of images (presumably from the `ImageManager`) that can be displayed as a unit.  Simplifies the drawing a World background for the users.  Typically agents and items would be layered on top of this `ImageGrid`.

**`IndexSet`** - A collection of indices from another container.  This is a quick way to track sets of indices, for example those that have a special property.  A simple way of implementing this functionality is simply keeping a set of indices, but faster options could be tracking ranges of indices (e.g., 106-112, 152-225) if they are clustered, or using a bit vector if they are not.

**`MemoryFactory`** - A simple memory manager (specifically, a [fixed-size pool allocator](https://en.wikipedia.org/wiki/Memory_pool)) where collections of the same type are stored to be given out as requested (more should get allocated when an existing supply is exhausted).  When a new object of the factory type is created, the factory should provide the memory for it.  When an object is deleted, the factory should reclaim the memory to be handed out again.  Since object sizes are fixed in C++, this provides a much faster way of allocating object if you know you are going to need to do frequent allocations and freeing of memory, especially for classes where speed is of the essence, such as an AI Agent.

**`StaticString`** - Like an [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string), but a maximum number of characters is set up front with all memory allocated at once.  Size cannot go over the static limit, but makes for fast class when manipulating many strings.

**`StaticVector`** - Like [`std::vector`](https://en.cppreference.com/w/cpp/container/vector), but a maximum vector size is specified in the template parameter and all memory is allocated at object creation.  Size cannot go over the static limit, but it will likely be much faster than `std::vector` in many instances.

**`StringSet`** - A container with a set of strings and various methods to simplify using the container.  You can choose to set this up with regular [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string) objects or with StaticString, or else you can make it a template so that the programmer can decide which type to use inside of it. The container should be able to handle operations like filter (to keep only strings that meet a certain criterion), filter out (to remove strings that meet a criterion) and well as union, intersection, and difference between two different StringSets.









