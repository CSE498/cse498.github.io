---
layout: default
---

# Project and Review Guidelines
- [Project Overview](#overview)
- [Project Groups](#groups)
- [Project License](#license)
- [Project Topics](#topics)
- [Module Types](#mod_types)
- [Initial C\+\+ Class Writeups and Module Description](#class_spec)
- [Video Overview](#video_overview)
- [Company Roles](#roles)
- [Guidelines for initial peer reviews](#review-1)

## Company-specific Project Pages

- [Company A](Company-A-Project.md)
- [Company B](Company-B-Project.md)
- [Company C](Company-C-Project.md)

# <span id="overview">Project Overview</span>

The largest chunk of the work for this course will be developing C++ code, first some useful tools and then a module (ideally using those tools) for a larger class-level project.  It will be worth a total of 40 points, plus an additional 12 points associated with turning in weekly updates.  The three code check-ins will be worth 10, 10, and 20 points respectively, with the first and last requiring accompanying video presentations.

| Due Date     | Deliverable                                                                | Value                     |
| ----         | ---------                                                                  | -----                     |
| Every Friday | **Weekly updates** (1 point each)                                          | 12 points (_updates_)     |
| ~~Wed, Jan 28~~ Fri, Jan 30  | **Specs for initial C\+\+ classes** and **team agreements**                | Set project expectations  |
| Mon, Feb 16  | **Code for working C\+\+ classes** (5 pts) and **status video** (5 pts)    | 10 points (_project_)     |
| Mon, Feb 23  | **Peer reviews** (5 pts)                                                   | 5  points (_peer review_) |
| Fri, Feb 27  | **Code fixes based on peer reviews**                                       | Improved code for grading |
| Wed, Mar 25  | **Code for advanced C\+\+ classes** (5 pts) and **initial module** (5 pts) | 10 points (_project_)     |
| Wed, Apr 1   | **Peer reviews** (5 pts)                                                   | 5  points (_peer review_) |
| Mon, Apr 6   | **Code fixes based on peer reviews**                                       | Improved code for grading |
| Mon, Apr 20  | **Code for final module** (15 pts) and **project video** (5 pts)           | 20 points (_project_)     |
| Sun, Apr 26  | **Peer reviews** (5 pts)                                                   | 5  points (_peer review_) |
| Wed, Apr 29  | **Code fixes based on peer reviews**                                       | Improved code for grading |

Your project code grades will be based on three factors.  The first two of these will be weighted evenly:

## 1. Functionality

Did you develop the full set of features for your project, ensure reliability and efficiency, and provide a proper user experience?  The points for functionality will be independent of what your code looks like, only that the module you developed meets its goals.

Throughout the semester we will develop C++ classes and use them as the bases for a larger application.  You will earn points based on how well you meet each set of project goals.  We will have a series of milestones over the course to help you meet the project goals. The instructors will be in regular communication about your progress and you will be heavily involved in the setting of goals.

## 2. Code Quality

Is your code easy to understand and for other programmers to use?

While the ultimate functionality of your code is clearly important, being able to write code that is reusable, easy to understand by other programmers, and that you can be confident in its reliability is also a goal for this course.  Code quality will be judged based on:
+ **_Code Style_**: Have you consistent kept to the Google C++ style so that others know what to expect your code to look like?
+ **_Code Readability_**: Is your code easy for others to read and understand based on your maintenance of documentation, appropriate code comments, and a clean layout with short clear functions?
+ **_Code Modularity_**: Have you built useful functions and classes that are organized with a meaningful file and directory structure? 
+ **_Code Reliability Checks_**: Do you have thorough unit test coverage and effective use of in-code asserts and/or other error checking. Do you avoid undefined behaviors?
+ **_Memory Safety_**: Are you using memory correctly, and freeing it appropriately when you are done using it? Do you avoid accessing unallocated (or newly deleted) memory?

In addition to functionality and code quality, we will also be assessing your specific contributions and use this as a multiplier applied to the other points:

## 3. Individual Contribution

It is important that each group member provides a meaningful contribution to the overall group effort and to the course-level project as a whole.  Based on ratings by your teammates and your role on the team (and audited by the instructors, if needed, using progress reports, git logs, and the work agreement) you will receive a qualification for how effective of a contributor you were to the project.

+ **_Proficient Contributor_**: You have met all of the expectations and delivered your portion of the project.  You worked diligently on the project throughout the semester and were a reliable member of the team.  You will receive full points, as earned above, on this project.

+ **_Inconsistent Contributor_**: While you participated and contributed to the project, you have done so inconsistently or otherwise have failed to fully meet the group's expectations (as put forth in your project agreement). You might have missed some tasks or not been substantially involved in the discussions or implementation.  Points above will be scaled, typically by a factor between 50% and 90% of points earned.

+ **_Minimal Contributor_**: You frequently failed to actively participate in the project. Your contribution was negligible or missing, and your lack of involvement hampered the group's overall success.  You will receive between 0% and 50% of the overall project grade.

Additionally, we reserve the right to give out:

+ **_Resilient Contributor_**: You have showcased exceptional efforts, going above and beyond base expectations to ensure that your group turns in a working project. You will make up for lost points by receiving up to a 25% bonus on the points above (though not raising your full points beyond 100%).  This rating will typically be given to a student who put forth significant extra effort to make up for another group member's failure to meet expectations.

<!-- + **_Exemplary Contributor_**: You went substantially beyond project requirements, turning in code that is impressive on all levels.  You will receive the full 45 points on the project, but this qualification also recognizes the incredible effort that you put forth with an "Exemplary Contributor" award that can be added to a resume.  We are unlikely to give more than one of these per semester. -->

You will be getting regular in-class advice and feedback on your projects throughout the semester, including peer reviews from fellow students.


# <span id="groups">Project Groups</span>

You will be in a group of five people to work on a semester-long project.  Students will have the opportunity to discuss potential project ideas with each other and propose groups to the instructors.  The instructors will form groups as needed, trying to match appropriate skill combinations and interests.

Once groups are formed, members will devise a working agreement with a plan for how they will all contribute to the project and support one another.  Here is an [example agreement](example_agreement.html).


# <span id="license">Project License</span>

To simplify working together and allowing all students in the course to be able to use the code we develop after the course is over, all communal code will be created under the [MIT Public License](https://en.wikipedia.org/wiki/MIT_License).  This license allows others to use the provided code however they want as long as they include the Copyright notice with it.  Once you contribute to the project, make sure to add your own name to the license.

# <span id="topics">Project Topics</span>

Initially, each group will be assigned a set of **C\+\+ classes** to develop, one per student in that group. While each student should take the lead on one of the classes, they should help in the development of all of them.  Indeed, some of the classes may be fairly easy to get an initial version working, and others will require more of the skills that you will develop over the course of the semester.

Some example classes include:
- Debugging tools, such as an audited vector where you can set a DEBUG flag and it will automatically check for indexing out of range and other errors (but if DEBUG is not set, it compiles without any of the tests, so there is no speed loss).
- Specialty data structures, such as a bi-directional map where you can search by either the key OR the value to get the other, or a graph object where entries can be connected to arbitrary other entries.
- Mathematical tools such [fixed-point numbers](https://en.wikipedia.org/wiki/Fixed-point_arithmetic), to supplement the floating-point numbers that we normally use, or "big integers" that can handle arbitrarily large values.
- Efficiency boosters, such as function objects that will automatically perform [memoization](https://en.wikipedia.org/wiki/Memoization) on functions that are passed into them.
- And lots of other helpful tools, such as formatted strings (that track bold, italic, colors, etc) or a random number generator that allows you to easily produce different types of random values, as needed.

While developing these classes, you will also be designing a module for a **large software project**.  To provide a real-world experience, sets of 7 to 8 groups (which we will call "companies") will collaboratively produce a single, over-arching software framework.  Each group will work on a single module to come together into a larger, agent-based system.  Each component you build will serve as a piece of a larger puzzle.  Sets of modules will interact through an API that company collectively establishes, allowing for some very different executables, depending on which modules are used. By the end of our course, our goal is for each company to have a functioning system where each module, be it a world, an agent, or an interface, seamlessly integrates with the others.

What might these larger agent-based systems be?  You will work with your classmates and the instructors to decide, but some example possibilities include:
- A traffic simulator where worlds consist of roads and traffic controllers, while agents are individuals trying to reach their destination.  Interfaces may allow users to set rules for the traffic controllers or alter road availability to identify their effects on flow patterns.
- An ecology simulator, where agents are organisms of various species that interact in a variety of manners (such as predators and prey) and worlds determine terrain and resource availability.  An interface may track statistics from the world to indicate ecology health.
- A world that builds a procedurally generated dungeon with agents that are orcs, trolls, dragons, or other types of dungeon dwellers.  An interface might allow a player to move a character through the dungeon 
- An AI testing arena with progressively harder challenges using realist physics and AI agents that try to defeat those challenges.  Humans can try those challenges too through the interface.
- A social game world where users can explore a collaborative world, talking to each other, building their own structures, and scripting bots (agents) to travel around and perform tasks.

# <span id="mod_types">Module Types</span>

Each company will be building modules that will plug together into full systems.  Each system will include a subset of the modules with at least three different types: A **world module**, one or more **agent modules**, and one or more **interface modules**.  Some systems will have user interfaces that behave more like agents (for example, a game or a social system), while others will focus on data collection and analysis with an overview interface (for example, a scientific simulation).

Each type of module should have specific functionality:

**World Modules** will need to track all of the areas, objects, and agents within that World, as well as handle any interactions between them and any changes that need to happen over time.  The nature of what's in the World and what interactions/events should occur will be determined by each World team.  The World may specify a set of possible actions that agents can take, but the agents themselves will decide which of those actions they actually do take and when they take them.  Furthermore, the World module may need to respond to requests for information from interface modules, but the World itself is not responsible for displaying that information to a human user.

*Example*: If we were to make a simple Pac-Man game, the **World** module would specify where the walls are, how many agents are needed, and the locations where those agents would start.  As agents move around, the World must determine what should happen.  For example, no agents should be allowed to move through walls.  When agents collide, the World has to identify the collision and determine the outcome; if Pac-Man collides with a ghost, Pac-Man will usually die, but if he recently ate a power-up, the ghost will be sent home.  (If two ghosts collide, nothing should happen). They must also track the locations of the dots are that can be consumed, power-ups, fruit, etc. and track the main agent (Pac-Man) to identify when those consumables are eaten and removing them.

We can also imagine a more complicated game World like a dungeon-crawler game where the World has many other things to track such as multiple types of monsters, a range of items (that can be part of an agent's inventory), environmental effects, and what other locations each agent can see; at the same time it should facilitate appropriate agent-agent interactions (such as fighting or trading) and agent-world interactions (such as opening a chest, searching for a secret door, or falling into a trap).  Similarly a World could be a realistic simulation, such as a stock-market where the World must allow agents to interact to be able to buy and sell, stocks, bonds, commodities, etc., as well as to collect data in order to be able to make informed decisions.

**Agent Modules** are the actual "brains" behind autonomous agents.  These modules need to be able to request a set of possible actions from the World and decide which of those actions to take at each time step.  Each action will have a name associated with it (such as, "turn left", "go forward", or "attack") and the agent module will decide when to trigger these.  The Agent behaviors might be hard coded, scripted, or fully AI controlled.

*Example*: In the Pac-Man game, we would likely want Agent controllers for the four ghosts.  On easy mode, these might be manually written Agents that follow a simple set of rules, as was done in the original arcade game.  On hard mode, these might be AI-agent modules that were trained to always head toward Pac-Man or otherwise surround or intercept him.  The basic set of Agent behaviors should be easy to customize to whichever World they are placed in.  In a more complex dungeon crawler World, there might be many additional actions (e.g., "shoot bow", "drink potion", etc) and the agent would be provided with only the limited portion of the World that they can actually sense (i.e., they might not be given the option to shoot a bow if they do not have a bow; if they are given the option nothing should happen if they pick it when they don't have a bow and they should be notified that their action failed).

**Interface Modules** should provide humans with an ability to interact with the World, either directly or indirectly.  Some basic Interfaces may use a similar API to the Agents. In such a case, rather than code dictating the actions of the associated Agent, humans will be able to use on-screen buttons, keymaps, or other carefully crafted Interface mechanisms with useful visual feedback. Many other types of Interfaces are possible.  For example, a network Interface, simplicity may be key, allowing multiple users to connect with a basic Interface and only limited extra features (like group chat).  A similar functionality can be provided with a single database that each World draws from in order to have many different instances of a World interacting (albeit slower than with a proper network Interface.) Some interfaces will be even more indirect, merely focused on collecting and analyzing data (see below)

*Example*: In Pac-Man, the Interface would need to show the entire World (as provided by the World) and allow players to steer Pac-Man, presumably with the arrow keys.  In a more complicated World, however, the Interface would need to do more.  In a more intricate setting like a dungeon-crawler, the Interface might need to offer functionalities like inventory checks, item equipping, and more.

**Data-Collection/Analysis Module**: These modules are specialty Interfaces that will extract insights from the system's dynamics. Their primary function is data collection and visualization. As a World progresses over time, the analysis module should diligently track agent activities, World alterations, or other significant events or metrics. Beyond mere data collection, the modules should also offer intuitive visualizations to help make sense of the data.  These might come in the form of graphs, heat maps, or an interactive dashboard, depending on the complexity and the data type. The ultimate aim is to allow for a post-run analysis that provides insights into the behaviors of agents, the interaction dynamics within the World, and potentially, areas for optimization or adjustment.  In a simulation, this type of Interface will allow a use to disentangle what actually happened during the simulation, perhaps identifying informative dynamics.  In a game, this analyses can be used to fine-tune the game, identifying where players got stuck, what obstacles where overcome too easily, and how long each level takes to play through.  Even in a social interaction system, these analyses can log interactions and be used to record data for later (perhaps to-do lists or other records.)

_Example_: In the context of Pac-Man, the Analysis Module might track the routes taken by the ghosts, highlighting high-frequency paths with heatmaps. It might also document areas within the maze where Pac-Man is most frequently caught. Other metrics could include the average time taken to consume all dots, the frequency of power-up consumption versus ghost confrontations, or even Pac-Man's movement patterns in relation to ghost proximity. By visualizing these metrics, players and developers can gain a clearer understanding of gameplay dynamics and strategize better for subsequent runs.


# <span id="class_spec">Write-up for Initial C\+\+ Class Development and Module Ideas</span>
### Due: Jan ~~28~~ 30, 2026

For each of the five C\+\+ classes that your group will be developing, you should include in your writeup:

1) A **class description**, including what its goals are, and what its high-level functionality should look like.  This does not need to perfectly match the description you were given, but it should be in the same general spirit unless you confirm any changes with the instructors ahead of time.

2) A list of **similar classes** in the standard library that you should be familiar with or use to inform the functionality you will be developing.

3) A list of **key functions** that you plan to implement.  This does not need to be an exhaustive list, but it should give a strong indication of how the class should be used.

4) A set of **error conditions** that you will be responsive to.  For each, indicate if its source was (1) *programmer error*, such as invalid arguments to a function, which should be caught by an assert, (2) a potentially *recoverable error*, such as a resource limitation, which should trigger an exception, or (3) a *user error*, such as invalid input, which needs to simply return a special condition for the programmer to respond to (note: these can usually be handled with exceptions as well if you prefer.)

5) Any **expected challenges** that you will be facing, an especially any extra topics you need to learn about.  This information will help me make sure to cover topics early in the course or else provide your group with extra guidance on the project.

6) A list of any **other group's C++ classes** that you think you may want to coordinate with (e.g., to have a compatible interface).

You can make some refinements to these specifications later, but will need to consult with the instructors before making wholesale changes.

In addition to the write-ups for your five C\+\+ classes, you should also include a paragraph about your **vision for the main module** that you will develop.  This description can be fairly high-level at this point, but will provide a concrete starting point to work with the other groups in your company on the bigger picture.

You will hand these in to your GitHub repository (full details coming soon).

# <span id="video_overview">Video Overview</span>
### Due: Feb ~~16~~ 18, 2026

Your group needs to submit a video overview describing what your five C\+\+ classess do and how they might be used.

Requirements:
* Everyone must describe the work that they contributed in the video.
* Videos must be about 10 minutes in length.
* Videos must be scripted. The script and link to the video (hosted on MSU MediaSpace or similar) must be placed in your groups' "specific content" folder. Please note that the script doesn't need to be followed to the word. The purpose of the script is to ensure that thought and preparation about the video's content is made prior to the recording.



# <span id="roles">Company Roles</span>

In order to improve communication at each company, we are going to have have the Integration Lead for each team have a officer role for the company that highlights an area of integration that they will coordinate.

The seven officer roles we suggest are:

| Role | Integration goals |
| ---- | ----------------- |
| Product Design Officer   | Coordinate the high-level ideas for the software being produced, adjusting goals as the semester progresses. |
| API Officer              | Record API decisions for module coordination |
| Data Management Officer  | Record data type decisions to facilitate the API; for example, classes like `Location` or stats for agents, items, or grid cells |
| Serialization Officer    | Ensure consistent serialization techniques and that saving and loading work correctly |
| Integration Officer      | Ensures that integration tests exist and are included in automated testing |
| Documentation Officer    | Organizes documentation created by individual teams in to a consistent and accessible structure |
| Build System Officer     | Works with teams to make sure the build system uses the correct options to compile all of the modules |

Most of the work will be performed by the individual teams, but these officers will ensure that the decisions made across groups are recorded, and that the entire project functions correctly when all of the modules come together.

# <span id="review-1">Rubric for initial code reviews (Round 1)</span>

Below are the topics that the C++ classes should be reviewed on during the first round of reviews.

### Class Design
- **Informative identifiers**.  Are names of variables, functions, types, etc, clear and helpful for a reader to understand the code.  For example, if you need to track the number of students in a class, good variable names might be `num_students` or `student_count`, whereas you don't want something too short to be confusing (like `N` or `num_s`) or too verbose that it's annoying (like `total_number_of_students_in_class`).
- **Avoids "magic numbers"**.  Similar to above, you should use constant variables with informative names instead of arbitrary numbers throughout your code, and instead set constants.  For example, I have a virtual CPU class with 6 virtual registers, but rather than using "6" throughout, I set `static constexpr size_t NUM_REGS = 6;` at the top of the class to make it clearer what the 6 refers to (and, in this case so that I can change it easily if needed.) Note that if the meaning of the numbers is obvious from context, it may not be an issue, such as initializing a reference count to 1 in a constructor, or an accumulator to zero.
- **Intuitive and functional interface**. Does the class expose only the necessary functionality, and is it easy to use correctly while hard to misuse? Are member variables private?  Is there an obvious function to use for common tasks, with relevant default arguments for parameters? Are any of the functions misleading, like potentially confusing uses of operator overloading?  (Feel free to provide suggestions on how to improve the interface for better usability)
- **Informative comments**. Do comments help someone new to the code understand it more rapidly?  Did the coder properly avoid redundant or obvious comments that clutter the code (e.g., `++x; // increments x`).  In general, comments should focus on _why_ code is helpful, rather than belabor _what_ that code does (though with complex code, the latter is useful too.)
- **Consistent style**. Are style choices (like naming schemes, brace placement, etc) used in a consistent and informative manner throughout the code?  Is there consistency in how different naming conventions are used? (e.g., `camelCase`, `snake_case`, `ALL_CAPS`, or `PascalCase`, or prefixes and suffixes, like `m_` at the beginning of a member variable.).
- **Visual appearance**. Is the code easy to scan through and visually well structured with good use of whitespace, indentation, and line breaks?  Do there appear to be consistent limits on line widths?

### Implementation
- **No warnings during compilation.**  Does the code compile with the `-Wall` and `-Wextra` flags without producing warnings?  One option is to add `-Werror` to your list of options, which turns all warnings into errors and thus halts compilation when one occurs.
- **Proper uses of namespaces**.  Is all code within `namespace cse498 { ... }` ?  Does the code avoid the generic `using namespace std` as well as avoiding any namespace pollution in header files that will spread to users of those files.
- **Adheres to the C++ standard**.  Does the code avoid undefined behavior?  If possible, make sure the code compiles and runs properly on different compilers and different platforms.
- **Appropriate Modularity**. Are common procedures grouped into useful helper functions? Are helper classes used where needed?  Is unnecessary code duplication avoided?
- **Uses modern C++ constructs**.  Where appropriate, does the code use range-based for loops, `std::optional`, `std::expected`, or other modern C++ techniques?  (In the future we will also look for proper use of templates, move semantics, lambdas, and `constexpr`, but only once we cover those topics).
- **Uses standard library algorithms**.   Does the code avoid extraneous loops when equivalent functionality exists in the standard library?  For example, `std::fill` will fill a vector, `std::remove_if` will remove elements from a container based on a condition, or `std::is_sorted` will tell you if the values in a container are in order.  See https://en.cppreference.com/w/cpp/algorithm for a full list (it's LONG, but well worth being familiar with).
- **Pointer handling.**  Is memory management done carefully, with either smart pointers (`std::unique_ptr`, `std::shared_ptr`) or, only if needed, careful use of raw pointers with `new` and `delete`?
- **`const` correctness**.  Are member functions `const` if they don't change the state of the class?  Are parameters (especially reference parameters) marked `const` if they don't change inside the function?

### Testing and Error Checking
- **Unit testing.**  Are unit tests present for all public member functions (including constructors) and well organized?  Do they trigger cases that will exercise most private portions of the class' code?
- **Edge cases.** Does testing cover most edge cases, as possible?  For example, for pointers, does it test null pointers (if they are allowed)?  Does it test for empty containers being used?  Does it test for 0 or other boundary conditions on parameters?
- **Assertions**.  Are `assert` statements used properly throughout the code to enforce invariants and ensure a valid state?  (for example, checking that valid arguments are passed into functions.) Note that asserts should be used only to identify conditions that should never occur in properly working code; if code is expected to recover, error handling must be performed.
- **Error handling.** Are error conditions that can occur during correct execution (such as resource limitations, files not available, or division by zero) checked for and reported back with `std::expected`, other return conditions, or some other technique like exceptions (if your group is comfortable with the speed hit)?

In the future we will also be considering code optimization as a component of the reviews.  If you see serious optimization issues at this point, however, you should still make sure to identify them.

<!--
# <span id="review-2">Rubric for Code Reviews of Advanced C++ Classes (Round 2)</span>

During this second round of code reviews, you will have a more specific assignment for what aspects of the target code you need to review.

The five areas where review needs to be done are:
1. **Code Design**
2. **Implementation Quality**
3. **Testing and Error Checking**
4. **Use of Advanced C++ Features** (e.g., templates, lambdas, constexpr, value semantics, etc.)
5. **Code Optimization and Flexibility.**

**Items 1 through 3** are the same as the first review round (see above!), but this time we will have higher expectations.  If you do not find any issue with a particular topic area, you should comment in your writeup about what you believe the developers did particularly well with their code.

For **Item 4**, you should comment on how well the developers incorporated some of the more advanced course topics into their code.  While not every advanced topic needs to be represented, at least two (done very well) or three newer techniques should be there.

For **Item 5**, you should identify ways that the code under review could be better optimized or be made more flexible (ideally without being made too much more complex).

## Writing your Reviews

For these reviews, you should look at the appropriate pull request and comment on the specific areas that you are assigned.  Any review comments that you can place directly on the code, that's where it should go (note that code that has not changed will not be able to be commented on in place).  All other comments (and review summaries) should be placed in a general review comment.

Keep a tab on the comments and please engage with any questions or comments the developers have, as appropriate, especially if clarifications are requested.

For your specific review assignments, go [here](reviews2.html)

# <span id="review-3">Rubric for Code Reviews of Final Applications (Round 3)</span>
### Due: April 28th, 2025

During this final round of code reviews, you will again have a more specific assignment for what aspects of the target code you need to review.  This time, however, we are testing code that produces an actual application, not just a C\+\+ library, so we need to be doing more thorough testing considering how the application is likely to be used.

The five areas where review needs to be done are:
1. **Code Design**: Is the code designed in a logical and intuitive manner that allows others to easily understand it?  Feel free to refer to the list of specific topics in the round 1 reviews, but you should also consider other subjective areas, identifying any point that you may be confused in your own attempt to understand the code.  Please try to provide suggestions for how to fix any problems.
2. **Implementation Quality**: Is the code written to be safe, efficient, and flexible? Feel free to refer to the specific topics in round 1, but you should more generally be looking for any places where implementation may currently be problematic, inefficient, or likely to have problems in the future as new added features cause other issues to arise.
3. **Testing and Error Checking**: Has sufficient testing been performed to verify the reliability of the current state of the code?  This should include both internal testing (e.g., asserts *that are avoided*, exceptions *that are caught* in the app, or returning of error codes / optional *that are checked*) and external testing (e.g., unit tests including thorough checking of edge cases as well as actual alpha testing of the app itself.)  In particular, make sure that bad user input is caught and handled properly; if you can cause the app to crash (as opposed to it reporting a coherent error), that is a problem to report.
4. **Use of Modern C++**: Have the authors of the app made good use of modern featured in C++, such as appropriate use of templates, use of concepts, use of std::optional, use of \[\[attributes\]\], etc.? Not all code will be expected to use every technique, but it is still helpful to point out where more modern techniques improve the code quality and the experience of the authors.
5. **User Experience**: Is the app easy to use with an intuitive interface? Most of this course has focused on good code development practices, but applications are built for end users and user experience ia a critical quality that always needs to be considered.  Are app features easy to find?  Are the most common use cases placed in intuitive places?  Is the application useful and does it meet its intended goal?  Make suggestions on how the user experience can be improved overall.

## Writing your Reviews

For these reviews, you should look at the appropriate pull request and comment on the specific areas that you are assigned.  Any review comments that you can place directly on the code, that's where it should go.  All other comments (and review summaries) should be placed in a general review comment.  Your final review should be done as a proper GitHub review and should include a checklist of the biggest points that you believe are most in need of fixing.

Keep a tab on the comments and please engage with any questions or comments the developers have, as appropriate, especially if clarifications are requested.

For your specific review assignments, go [here](reviews3.html)

**NOTE**: All feedback is expected to be constructive and helpful.  You should identify helpful improvements or places to refactor, but never denigrate the code or its authors.  Constructive criticism is fine, but should be frames positively; any needlessly hurtful comments will result in points deducted from the review.

-->
