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

**Group 16**, _Data Collection and Analysis_: This group should develop tools to collect information appropriate to the games being made by the company.  For example, you may log all agent actions in order to be able to replay a scene or a whole game.  You might also track where players are spending their time in order to provide feedback to game designers -- perhaps there are spot where players stay longer than expected because they are more challenging or confusing than they are supposed to be.  Come up with a full set of data to track and work with the other groups to make sure you can provide useful feedback.

_Members_: Aneesh Joshi, Daniel Gao, Nathan Charters, John Rouse, and Tyler Murray

**Group 17**, _GUI Interface_: You may choose any standard C\+\+ GUI package (such as Qt, WxWidgets, FLTK (Fast Light Toolkit), GTK / gtkmm, SFML, or many others) to develop an interface to the other modules that will allow a user to play the game.  The Interface should mostly use the Agent API, since a player should mostly be treated like any other agent, though the GUI may need to collect some additional information to provide a proper display for the user.  You may also need to implement a "god mode" to allow world editing or viewing beyond the player characters range.

_Members_: Anagha Jammalamadaka, Kiana May, Hugh Mark Sanchez, Sitara Baxendale, and Deni Tepic

**Group 18**, _Web Interface_: Similar to the GUI Interface above, but you should use Emscripten along with more tradition web tools (JavaScript, HTML5, and associated packages) to build a user interface module for the games.  As with the GUI above, this Interface should mostly use the Agent API, since a player should mostly be treated like any other agent, though the GUI may need to collect some additional information to provide a proper display for the user.  You may also need to implement a "god mode" to allow world editing or viewing beyond the player characters range.

_Members_: Pinhe Du, Tung Xuan Hoang, Feichi Cai, Lance Motowski, and Alexander Elkins


## Group C++ Classes

Each group has five members and five C\+\+ classes that you need to write.  Each group member should take the lead on on one of the classes, but you should make sure that all five turn out to be solid as they will be critical for your group and potentially other groups in your company.

### Group 1: _AI Agents_

**`AnnotationSet`** - An annotation set is a collection of tags or other string-based annotations associated with an object.  It provides a simple way of tracking arbitrary data, allowing AI agents to maintain a memory about other agents, items, or places that they have encountered.  It should interact closely with the `TagManager` (see next).

FeatureVector
TagManager
MemoryFactory
RobinHoodMap

### Group 2: _Classic Agents_

ActionMap
BehaviorTree
WorldPath
PathAnalyzer
MemoFunction

### Group 14: _Interactive World_

ExpressionParser
DataMap
FunctionSet
Scheduler
EventQueue (PriorityQueue?)

### Group 15: _Generative World_

Random
WeightedSet
DataFileManager
StateGrid
StateGridPosition

### Group 16: _Data Collection and Analysis_

DataLog
ActionLog
ReplayDriver
Timer
OutputManager

### Group 17: _GUI Interface_

ImageAsset
ImageGrid
Menu
Text
ErrorManager

### Group 18: _Web Interface_

WebImage
WebTextbox
WebButton
WebCanvas
WebLayout

### Alternative Classes

If you believe that one of the following C\+\+ classes would be more useful than the classes assigned to your group, check with the instructor advising your group, but we are likely to support you shifting over to it.