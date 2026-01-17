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

Projects can be *challenging* for many reasons.  For example, they could require:
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

Each company will be building modules that will plug together into full systems.  Each system will include a subset of the modules with at least three different types: A **world module**, one or more **agent modules**, and one or more **interface modules**.  Some systems will have user interfaces that behave more like agents (for example, a game or a social system), while others will focus on data collection and analysis with an overview interface (for example, a scientific simulation).

Each type of module should have specific functionality:

**World Modules** will need to track all of the areas, objects, and agents within that World, as well as handle any interactions between them and any changes that need to happen over time.  The nature of what's in the World and what interactions/events should occur will be determined by each World team.  The World may specify a set of possible actions that agents can take, but the agents themselves will decide which of those actions they actually do take and when they take them.  Furthermore, the World module may need to respond to requests for information from interface modules, but the World itself is not responsible for displaying that information to a human user.

*Example*: If we were to make a simple Pac-Man game, the **World** module would specify where the walls are, how many agents are needed, and the locations where those agents would start.  As agents move around, the World must determine what should happen.  For example, no agents should be allowed to move through walls.  When agents collide, the World has to identify the collision and determine the outcome; if Pac-Man collides with a ghost, Pac-Man will usually die, but if he recently ate a power-up, the ghost will be sent home.  (If two ghosts collide, nothing should happen). They must also track the locations of the dots are that can be consumed, power-ups, fruit, etc. and track the main agent (Pac-Man) to identify when those consumables are eaten and removing them.

We can also imagine a more complicated game World like a dungeon-crawler game where the World has many other things to track such as multiple types of monsters, a range of items (that can be part of an agent's inventory), environmental effects, and what other locations each agent can see; at the same time it should facilitate appropriate agent-agent interactions (such as fighting or trading) and agent-world interactions (such as opening a chest, searching for a secret door, or falling into a trap).  Similarly a World could be a realistic simulation, such as a stock-market where the World must allow agents to interact to be able to buy and sell, stocks, bonds, commodities, etc., as well as to collect data in order to be able to make informed decisions.

**Agent Modules** are the actual "brains" behind autonomous agents.  These modules need to be able to request a set of possible actions from the World and decide which of those actions to take at each time step.  Each action will have a name associated with it (such as, "turn left", "go forward", or "attack") and the agent module will decide when to trigger these.  The Agent behaviors might be hard coded, scripted, or fully AI controlled.

*Example*: In the Pac-Man game, we would likely want Agent controllers for the four ghosts.  On easy mode, these might be manually written Agents that follow a simple set of rules, as was done in the original arcade game.  On hard mode, these might be AI-agent modules that were trained to always head toward Pac-Man or otherwise surround or intercept him.  The basic set of Agent behaviors should be easy to customize to whichever World they are placed in.  In a more complex dungeon crawler World, there might be many additional actions (e.g., "shoot bow", "drink potion", etc) and the agent would be provided with only the limited portion of the World that they can actually sense (i.e., they might not be given the option to shoot a bow if they do not have a bow; if they are given the option nothing should happen if they pick it when they don't have a bow and they should be notified that their action failed).

**Interface Modules** should provide humans with an ability to interact with the World, either directly or indirectly.  Some basic Interfaces may use a similar API to the Agents. In such a case, rather than code dictating the actions of the associated Agent, humans will be able to use on-screen buttons, keymaps, or other carefully crafted Interface mechanisms with useful visual feedback. Many other types of Interfaces are possible.  For example, a network Interface, simplicity may be key, allowing multiple users to connect with a basic Interface and only limited extra features (like group chat).  A similar functionality can be provided with a single database that each World draws from in order to have many different instances of a World interacting (albeit slower that with a proper network Interface.) Some interfaces will be even more indirect, merely focused on collecting and analyzing data (see below)

*Example*: In Pac-Man, the Interface would need to show the entire World (as provided by the World) and allow players to steer Pac-Man, presumably with the arrow keys.  In a more complicated World, however, the Interface would need to do more.  In a more intricate setting like a dungeon-crawler, the Interface might need to offer functionalities like inventory checks, item equipping, and more.

**Data-Collection/Analysis Module**: These modules are specialty Interfaces that will extract insights from the system's dynamics. Its primary function is data collection and visualization. As a game progresses, the analysis module should diligently track agent activities, World alterations, or other significant events or metrics. Beyond mere data collection, the module should also offer intuitive visualizations to help make sense of the data. This might come in the form of graphs, heat maps, or an interactive dashboard, depending on the complexity and the data type. The ultimate aim is to allow for a post-game analysis that provides insights into the behaviors of agents, the interaction dynamics within the World, and potentially, areas for optimization or adjustment.

_Example_: In the context of Pac-Man, the Analysis Module might track the routes taken by the ghosts, highlighting high-frequency paths with heatmaps. It might also document areas within the maze where Pac-Man is frequently cornered or caught. Other metrics could include the average time taken to consume all dots, the frequency of power-up consumption versus ghost confrontations, or even Pac-Man's movement patterns in relation to ghost proximity. By visualizing these metrics, players and developers can gain a clearer understanding of gameplay dynamics and strategize better for subsequent runs.

## Timeline

Please put substantial thought in to your modules this week.  During class on Monday (Sept 11) we will talk more about the Agent, World, and Interface base classes and what they might look like.  I'll also want each group to say a few words about their current plans.  By Wednesday's class (Sept 13) I want the initial specification (one to two pages) written up, answering the questions at the top of this document.

Once we have all of the feature plans and requests, we'll spend the following week fleshing out the full API and preliminary design document for each of the modules.
