---
layout: default
---

# Project Group Info

Each group is provided a set of class modules that it will be expected to develop, along with a suggestion for a final project that can use those modules.  Groups are named after famous computer scientists.

## Group 1: Stroustrup

**Members:**:  Jerry Chen, George Faraj, Leonardo Specht, Kollin Bartz, and Tyler Pritchett

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


## Group 2: Ritchie

**Members:**:  

**Shared Interests**: Games / Productivity

**Notable Strengths**: Software Engineering, User Interfaces, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 


## Group 3: Hopper

**Members:**:  

**Shared Interests**: Games / Art

**Notable Strengths**: Graphics, Math, User Interfaces

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 



## Group 4: Torvalds

**Members:**:  

**Shared Interests**: Scripting Language / Data Processing

**Notable Strengths**: Algorithms, Compilers, Software Engineering

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 



## Group 5: Hamilton

**Members:**:  

**Shared Interests**: Data Processing

**Notable Strengths**: Algorithms, Databases, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 



## Group 6: Lamport

**Members:**:  

**Shared Interests**: Games / Data Processing / Scripting

**Notable Strengths**: Algorithms, Databases

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 



## Group 7: Euler

**Members:**:  

**Shared Interests**: Science

**Notable Strengths**: Algorithms, Math

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`StaticVector`**  | Like an std::vector, but a maximum number of entries is set up front and all memory is allocated at compile time.  Size cannot go over the static limit. |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 




## Group 8: Turing

**Members:**:  

**Shared Interests**: Productivity / Social Media

**Notable Strengths**: Software Engineering, User Interfaces, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 



## Group 9: Liskov

**Shared Interests**: Games / Productivity

**Notable Strengths**: Algorithms, Databases, Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 



## Group 10: Bellman

**Shared Interests**: Science / Social Media

**Notable Strengths**: A.I. / Web Development

### Classes to Build

| Class               | Description |
| ------------------- | ----------- |
| **`class`**  | Desc. |

### Application Suggestion

Suggested **challenge**: 
