# Company "A" Projects

Company "A" specializes in computer games with seven development groups involved.  You will get to decide the details of the games as well as the name of your company, following the rules below.

## Group Descriptions and Memberships

In all cases, your group number is the classroom table where you should sit!  There will be some open tables (there are 21 groups but 24 tables), so some shifting of tables will be possible.

**Group 1**, _AI Agents_: This group will develop agents that travel through a game world, interacting with it while displaying some capacity for learning.  You may use any standard AI techniques that you choose, as long as they are in C\+\+ and can be used in Emscripten (most C\+\+ can be compiled this way without any problem.) Options include [neural networks](https://en.wikipedia.org/wiki/Neural_network_(machine_learning)), [goal-oriented action planning (GOAP)](https://medium.com/@vedantchaudhari/goal-oriented-action-planning-34035ed40d0b), [genetic programming](https://en.wikipedia.org/wiki/Genetic_programming), or many other techniques.

_Members_: Arnav Enaganti, Arya Amiri, Jordan Sebagh, Mayank Gudi, and Eddie Lim

**Group 2**, _Classic Agents_:

_Members_: Logan Rimarcik, Ty Maksimowski, Luke Antone, Henry Finfrock, and Jacob Bettinger

**Group 14**, _Interactive World_:

_Members_: Ho Wang Ho, Riley Moorman, Curtis Lunn, Henry Yang, and Caleb Shin

**Group 15**, _Generative World_:

_Members_: Abigail Franzmeier, Rachel Loren, Joey Hyun, Paul Bui, and Zhixiang Miao

**Group 16**, _Data Collection and Analysis_:

_Members_: Aneesh Joshi, Daniel Gao, Nathan Charters, John Rouse, and Tyler Murray

**Group 17**, _GUI Interface_:

_Members_: Anagha Jammalamadaka, Kiana May, Hugh Mark Sanchez, Sitara Baxendale, and Deni Tepic

**Group 18**, _Web Interface_:

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