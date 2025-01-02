---
layout: default
---

# Project Specification Overview

Your project specification should answer the following questions:
+ What is your high-level goal for this module?
+ What key features will you make available to other modules?
+ What features will you need other modules to provide?
+ Why is this project challenging?

For each type of module, there are specific features that will be needed, and other features that will be desirable.  Once we have the initial high-level specifications for each module, we will be able to discuss as a class how those specs need to adjust for all of these modules to work together.

Projects can be **challenging** for many reasons.  For example, they could require:
+ tricky coding or use of sophisticated C++ techniques,
+ a high level of optimization to be sufficiently efficient,
+ use of an external library or tool that you need to learn,
+ substantial data juggling, or
+ coordination with several other groups.

Please make good use of the Discord to communicate with your group and coordinate with the rest of the groups in the course, as needed.  Pick challenges that will be compelling to your group, useful to other groups, and help produce an interesting final product.

There is some functionality that **ALL modules should support**:
* The ability to provide usage information about itself (likely from a series of Help functions that should return an information string)
* The ability to save and load data (Worlds and Agents would need to read/write their state to a stream; Interfaces would need to trigger this process)
* The ability to run unit-tests on individual functions/components

## Module Types

Remember that a particular system will have at least three modules: A world, one or more agent types, and one or more interface types.  In many cases that system will be a "game" if we have a player-style interface, or else a "simulation" if it is all agents with a data-collection/analysis interface.

Each type of module should have specific functionality.  Let's assume that we are working with grid-based representations for worlds.  In that case:

**World Modules** will need to manage the grid, track where agents are on it, and handle any agent-world or agent-agent interactions.  The nature of what's in the world and what interactions are allowed will be determined by each world team.  The world may specify a set of possible actions that agents can take, but the agents themselves will decide which actions they actually do take and when they take them.  Furthermore, the world module may need to respond to requests for information from interface modules, but the world itself is not responsible for displaying that information to a human user.

*Example*: If we were to make a simple Pac-Man game, the **World** module would specify where the walls are, how many agents are needed, and where those agents would start.  It would also specify where the dots are that can be consumed, power-ups, fruit, etc. and track the main agent (Pac-Man) to identify when those are eaten.  When agents collide the world has to identify the collision and the outcome; if Pac-Man collides with a ghost, Pac-Man will usually die, but if he recently ate a power-up the ghost will be sent home.  (If two ghosts collide, nothing should happen). We can also imagine a more complicated world like a dungeon-crawler game where the world has many other things to track such as more types of monsters, what agents are carrying, and what other grid positions each agent can see.

**Agent Modules** are the actual "brains" behind autonomous agents.  These modules need to be able to take in a set of possible actions from the world and decide which actions to take over time.  Each action will have a name associated with it (such as, "turn left", "go forward", or "attack") and the agent module will decide when to trigger these.  The Agent might be manually written (as will be done with the behavioral function library) or otherwise trained (as with a Genetic Programming controller).

*Example*: In the Pac-Man game, we would likely want controllers for the four ghosts.  On easy mode, these might be manually written agents that just follow a specified pattern.  On hard mode, these might be crafted (or trained) to always head toward Pac-Man or otherwise surround or intercept him.  The basic set of behaviors should be easy to customize to whichever world they are placed in.  In a more complex dungeon crawler world, there might be many additional actions (e.g., "shoot bow", "drink potion", etc) and the agent would be provided with only the limited portion of the world that they can actually sense.

**Interface Modules** should provide humans with an ability to interact with the worlds.  At a basic level, they resemble agents. However, rather than code dictating the actions, humans will use buttons, keymaps, or other interface mechanisms. For the network interface, simplicity may be key, allowing multiple users to connect with a basic interface and only limited extra features (like group chat). However, the more advanced 2D interface group should plan to implement additional features—be it enhanced graphics, instant replay capabilities, a split-screen world view, zoom functions, or even hotkeys for a series of actions. There are lots of interesting possibilities!

*Example*: In Pac-Man, the interface would need to show the entire world (as provided by the world) and allow players to steer Pac-Man, presumably with the arrow keys.  In a more complicated world, however, the interface would need to do more.  In a more intricate setting like a dungeon-crawler, the interface might need to offer functionalities like inventory checks, item equipping, and more.

**Data-Collection/Analysis Module**: This module is a specialty interface that will extract insights from the system's dynamics. Its primary function is data collection and visualization. As a game progresses, the analysis module should diligently track agent activities, world alterations, or other significant events or metrics. Beyond mere data collection, the module should also offer intuitive visualizations to help make sense of the data. This might come in the form of graphs, heat maps, or an interactive dashboard, depending on the complexity and the data type. The ultimate aim is to allow for a post-game analysis that provides insights into the behaviors of agents, the interaction dynamics within the world, and potentially, areas for optimization or adjustment.

_Example_: In the context of Pac-Man, the Analysis Module might track the routes taken by the ghosts, highlighting high-frequency paths with heatmaps. It might also document areas within the maze where Pac-Man is frequently cornered or caught. Other metrics could include the average time taken to consume all dots, the frequency of power-up consumption versus ghost confrontations, or even Pac-Man's movement patterns in relation to ghost proximity. By visualizing these metrics, players and developers can gain a clearer understanding of gameplay dynamics and strategize better for subsequent runs.

## Timeline

Please put substantial thought in to your modules this week.  During class on Monday (Sept 11) we will talk more about the Agent, World, and Interface base classes and what they might look like.  I'll also want each group to say a few words about their current plans.  By Wednesday's class (Sept 13) I want the initial specification (one to two pages) written up, answering the questions at the top of this document.

Once we have all of the feature plans and requests, we'll spend the following week fleshing out the full API and preliminary design document for each of the modules.
