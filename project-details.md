---
layout: default
---

# Project Group Info

Each group is provided a set of class modules that it will be expected to develop, along with a suggestion for a final project that can use those modules.  Groups are named after famous computer scientists.

<h2 style="color: blue">Group 1: Stroustrup></h2>

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
| **`GraphPosition`** | A position on the Graph object, useful for implementing more complex graph algorithms. |

### Application Suggestion

A **graph generator and analyzer**.  The user would be able to specify the type of graph they want, as well as the size and any other relevant parameters (for example, width and height in a grid, or number of edges in a random graph).  The app will create the graph and be able to provide information about some key properties of the graph, such as average degree of vertices, height of its minimum spanning tree, etc.

Suggested **challenge**: I'd recommend a web interface (to allow anyone to easily create graphs), but another good option would be more advanced graph algorithms for analyses.


<h2 style="color: blue">Group 2: Ritchie></h2>

**Members**: Nitish Maindoliya, Dominik Leisinger, Rahul Baragur, Bram Hogg, and Matthew Hawkins

**Shared Interests**: Games / Productivity

**Notable Strengths**: Software Engineering, User Interfaces, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`ActionMap`**     | A map of strings to functions that can be triggered.  Can be useful in supplying user actions when building a dynamic interface |
| **`AuditedVector`** | Functionality of std::vector but in "DEBUG" mode, checks every index to ensure it is valid and in range; similar checks for iterators. |
| **`DataMap`**       | A dynamic map that can match names to arbitrary data.  The user will need to provide the type at both setting and getting the value; the object should detect of wrong types are used. |
| **`StateGrid`**     | A dynamic 2D grid where each position is one of a set of states. |
| **`StateGridPosition`** | Track a single position (and orientation?) in the state grid to manage an individual agent moving through it. |

### Application Suggestion

Suggested **challenge**: 


<h2 style="color: blue">Group 3: Hopper></h2>

**Members**: Sanya Nigam, Wendy Jiang, Owen Garcia, Riley Vernon, and Alex Bodell

**Shared Interests**: Games / Art

**Notable Strengths**: Graphics, Math, User Interfaces

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`DataTracker`**   | An object to track a series of data values over time.  Should be able to give you the mean, median, min, max, or value count at any point in time; other stats could also be helpful. |
| **`FixedPoint`**    | A simple class that can handle decimal values, but with a fixed precision; likely an integer type under the hood. |
| **`FunctionSet`**   | A container that can hold a collection of functions, all with the same signature.  All of these functions can be called simultaneously. |
| **`Circle`**        | A simple geometric shape that can identify overlaps with each other. |
| **`Surface`**       | An area that tracks a set of shapes in sectors, identifying all overlaps.  |

### Application Suggestion

Suggested **challenge**: 



<h2 style="color: blue">Group 4: Torvalds></h2>

**Members**: Chris Paul, Grant Davis, Krishna Patel, Kyle Gunger, and Rose Spangler

**Shared Interests**: Scripting Language / Data Processing

**Notable Strengths**: Algorithms, Compilers, Software Engineering

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`Assert`**        | A better version of "assert" than the one supplied by "assert.h".  Should be able to print the current value supplied variables or targeted messages |
| **`AuditedPointer`** | Template class that behaves like a raw pointer outside of "DEBUG" mode, but does extra correctness checks when debugging |
| **`BitVector`**     | Similar to an std::bistet, but allows for size changing.  Should be a drop-in replacement for std::vector<bool>, but extra functionality for bitwise operations. |
| **`IndexSet`**      | A collection of indices from another container.  This is a quick way to track subsets. |
| **`Text`**          | A string-like object that also tracks formatting of the string (such as bold, italic, colors, maybe even links) |

### Application Suggestion

Suggested **challenge**: 



<h2 style="color: blue">Group 5: Hamilton></h2>

**Members**: Max Krawec, Calen Green, Pedro Mitkiewicz, Shahaab Ali, and Muhammad Asif Masood

**Shared Interests**: Data Processing

**Notable Strengths**: Algorithms, Databases, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`CSVfile`**       | A file manager that tracks a DataGrid.  When a DataGrid is output, make sure to properly sanitize any strings.  When it is loaded, handle string vs. value types properly. |
| **`DataGrid`**      | A DataGrid should manage a 2D grid of values; the values should be either strings or doubles. The user should be able to request a row or column to manipulate. |
| **`Datum`**         | A simple data object that can be either a string or double, based on how it was last set.  Should have AsString() and AsDouble() member functions to convert if needed. |
| **`ExpressionParser`** | A tool to read in a string and convert it into a function object.  It should take an equation (as a string) and convert it to a function that takes a container as input that it uses to draw values from. For example the string "{7} + {12}" wou;d produce a function that takes a vector as an argument.  The function would take indices 7 and 12 from the vector, add them together, and return the result. |
| **`ReferenceVector`** | Similar to an std::vector, but keeps pointers under the hood.  This allows entries in the vector to all be treated like references instead of direct objects. |

### Application Suggestion

Suggested **challenge**: 



<h2 style="color: blue">Group 6: Lamport></h2>

**Members**: Emil Rahn-Siegel, Will Crawford, Ivan Bega, Mehmet Efe Caylan, and Orhan Aydin

**Shared Interests**: Games / Data Processing / Scripting

**Notable Strengths**: Algorithms, Databases

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`ArgManager`**    | A tool to take in the "argc" and "argv" supplied by the commend line and convert them into flags and settings.  More advanced versions might also handle URL query params or config files. |
| **`CommandLine`**   | Manage a command line process.  Users should be able to provide a command-line input and this object should be able to select which command to delegate it to.  Ideally with extra tools like history tracking and state tracking. |
| **`ErrorManager`**  | A set of tools to manage errors that occur, providing a clear message to the user (perhaps even color-coding? or appearing in a web browser) |
| **`StaticString`**  | Like an std::string, but a maximum number of characters is set up front with all memory allocated at once.  Size cannot go over the static limit, but makes for fast class. |
| **`StringSet`**     | A container with a set of strings and various methods to simplify using the container. |

### Application Suggestion

Suggested **challenge**: 



<h2 style="color: blue">Group 7: Euler></h2>

**Members**: Anand Pinnamaneni, Bao Tran, Duong Tran, Siddhartha Bhattacharya, and Nathan Staniszewski

**Shared Interests**: Science

**Notable Strengths**: Algorithms, Math

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`StaticVector`**  | Like an std::vector, but a maximum number of entries is set up front and all memory is allocated at compile time.  Size cannot go over the static limit. |
| **`AuditedArray`**  | Functionality of std::array but in "DEBUG" mode, checks every index to ensure it is valid and in range; similar checks for iterators. |
| **`DataFileManager`** | A class to manage a data file that wants to periodically update status.  When and Update() method is called, the manage should trigger a set of stored functions and use the results as the columns. |
| **`Scheduler`**     | Schedules a set of processes based on a "priority" measure.  Can be probabilisitic or fully integrated |
| **`Serializer`**    | A tool to either SAVE or LOAD values from memory.  When stepping through in save mode, it stores everything to a stream; in load mode it goes in the same order and pulls everything out from the stream. |

### Application Suggestion

Suggested **challenge**: 




<h2 style="color: blue">Group 8: Turing></h2>

**Members**: Joanna Rodriguez Zamarron, Ryon Baldwin-Williams, Kelsi Elliott, Hannah Dale, and Caden McDonald

**Shared Interests**: Productivity / Social Media

**Notable Strengths**: Software Engineering, User Interfaces, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`AnnotatedWrapper`** | A base class that provides "annotating" features to any derived class.  A simple form of annotations would be tags assocated with the class. |
| **`AuditedString`** | Functionality of std::string but in "DEBUG" mode, checks every index to ensure it is valid and in range; similar checks for iterators. |
| **`DynamicString`** | An intersperced mix of strings and functions.  Can convert to a regular string by calling the functions and making the results into strings.  Functions will be called again each conversion, so the string could change.  For example, it could have a time stamp in it, or be tracking the value of a variable. |
| **`RandomAccessSet`** | The std::set object is supposed to rapidly tell whether an object is a member, as well as add or remove members.  A random_access set should also keep an array back-end for when stepping through entries. |
| **`TagManager`**    | A pseudo-container to track string tags on entires and be able to quickly identify all entries associated with a particular tag. |

### Application Suggestion

Suggested **challenge**: 



<h2 style="color: blue">Group 9: Liskov></h2>

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

Suggested **challenge**: 



<h2 style="color: blue">Group 10: Bellman></h2>

**Members**: Alex Mueller, Blake Crimmins, Amery Johnson, Devon FoxElster, and Ephraim Bennett

**Shared Interests**: Science / Social Media

**Notable Strengths**: A.I. / Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |
| **`BruteForceOptimizer`** | A tool to explore all possible combinations of a set of inputs to maximize a value function.  Should handle backtracking and bounding (if the value function is NaN, backtrack, include a second MAX value function to help bounding) |
| **`ComboManager`** | A tool to manage combinations of items from a container.  Should be able to step through them all or do branching with each included / excluded. |
| **`OutputLog`** | A simple logging system for programmers to log events; often helpful for debugging. |
| **`MemoFunction`** | A function wrapper that automatically caches inputs to output -- if the same input is used a second time, it should immediately return the output rather than call the function again. |
| **`MemoryFactory`** | A simple memory manager where collections of the same type are stored to be given out as requested (more should get allocated when an existing supply is exhausted) |

### Application Suggestion

Suggested **challenge**: 
