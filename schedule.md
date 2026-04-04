---
layout: default
---


# Schedule

This course is divided up into five units, covering a range of C\+\+ topics.  Before each class session, students will be expected to either watch a video (typically under 60 minutes) or read a blog post for in-class discussion.  The course will meet twice a week (Mondays and Wednesday, 3 pm to 4:50pm in STEM 2202); in addition to the discussion of material from the videos (which may include elaboration on content), classes will consist of live-coding demonstrations, live code reviews, quizzes, time for students to try out coding techniques, or time for the project groups to work together.

## Unit I: C++ Fundamentals

| Date     | Discussion Topic                    |
|:--------:|-------------------------------------|
| **Week 1** | | |
| 1/12/26  | **A review of 232 and 335**         |
| 1/14/26  | **Tools: Compiler Features and Static Analysis** |
|          | *Watch:* [31 nooby C++ habits you need to ditch](https://www.youtube.com/watch?v=i_wDa2AS_8w) (16 min) |
|          | *Watch*: [Software Development with C++: clang-format](https://www.youtube.com/watch?v=YNv_g6ceL0w) (9 min) |
|          | *Watch*: [Software Development with C++: Compiler Optimization Levels](https://www.youtube.com/watch?v=Gwvn8ruzXT8) (13 min) |
| **Week 2** | |
| 1/19/26   | **NO CLASS** (MLK Day) |
| 1/21/26   | **C++ Core Guidelines** |
|           | *Watch:* [10 Core Guidelines You Need to Start Using Now](https://www.youtube.com/watch?v=XkDEzfpdcSg) (first 54 min + optional Q&A session) |
|           | <b style="color: green">Out:</b> Project Group Assignments |
|           | <b style="color: blue">Quiz:</b> 1a                        |
| **Week 3** | |
| 1/26/26  | **C++ Terminology and Basic Concepts** |
|          | *Watch:* [Never free memory yourself! Do this instead (in modern C++)](https://www.youtube.com/watch?v=eHcdTytDZrI) (first 14 min, though watch the end if you need a smart pointer refresher) |
|          | *Watch:* [Why is there Undefined Behavior in C++?](https://www.youtube.com/watch?v=3weyREkE4HA) (4 min) |
|          | *Watch:* [L-Values vs. R-Values](https://www.youtube.com/watch?v=fbYknr-HPYE&t=258s) (4:18 to 12:42; 8 min) |
|          | *Read:* [When should static_cast, dynamic_cast, const_cast, and reinterpret_cast be used?](https://stackoverflow.com/questions/332030/when-should-static-cast-dynamic-cast-const-cast-and-reinterpret-cast-be-used) (first answer is best, but later answers provide examples)
|          | *Read:* [Using the C++23 std::expected type](https://mariusbancila.ro/blog/2022/08/17/using-the-cpp23-expected-type/) |  <!-- ALT: (https://omkaracharekar.hashnode.dev/a-guide-to-c-casting-staticcast-reinterpretcast-dynamiccast-and-constcast and https://leimao.github.io/blog/CPP-Casts/) -->
|          | [Slides From Lecture](https://docs.google.com/presentation/d/1zV6XCD9zPMr14c1OwFp1_EhLnIcHQMeKPblaVtIqxY4/edit?usp=sharing) |
| 1/28/26  | **Compiling C++ into WebAssembly with Emscripten** |
|          | *Install* and *Read Tutorial:* [Getting Started with Emscripten](https://emscripten.org/docs/getting_started/index.html) |
|          | *Optional:* [Using WebAssembly and C++ to Make a Simple Game](https://www.youtube.com/watch?v=N248809vu5g) (72 min) |
|          | <b style="color: blue">Quiz:</b> 1b                                               |
|          | <b style="color: red">Due:</b> Team agreements ([sample](example_agreement.html)) |
|          | <b style="color: red">Due FRIDAY Jan 30:</b> Specs for initial C++ classes and module proposal  |
|          | [Git Slides From Lecture](https://drive.google.com/file/d/1J7xteMg8rMKdP2nHLHK2APBU7ULQKmmN/view?usp=sharing) |

## Unit II: Writing Reliable Code

| Date     | Discussion Topic                    |
|:--------:|-------------------------------------|
| **Week 4** | |
| 2/2/26   | **Avoiding Undefined Behavior** <!--- <br> *Watch:* [Back To Basics: Undefined Behavior](https://www.youtube.com/watch?v=NpL9YnxnOqM) (62 min) -->  |
|          | *Watch:* [Undefined Behavior in C++: What Every Programmer Should Know and Fear](https://www.youtube.com/watch?v=k9N8OrhrSZw) (33 min) |
|          | [Lecture Slides](https://docs.google.com/presentation/d/1j3fYQxW0OhRYp3jv1NZVfekfuUpECvUWXp3zPkL53KQ/edit?usp=sharing) |
|          | [Lecture Slides [Halting problem]](https://drive.google.com/file/d/1dBJ5B1KyOBUE1tdp7_oxMQT4QdhY8FhF/view?usp=sharing) |
| 2/4/26   | **Tools: Setting up Testing Frameworks** |
|          |*Read over:* [Catch 2 - Tutorial](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#top) |
|          |*Read over:* [Unit vs. Integration Testing](https://circleci.com/blog/unit-testing-vs-integration-testing/) |
|          | <b style="color: blue">Quiz:</b> 2a |
|          | <b style="color: red">Milestone:</b> Initial working C\+\+ classes |
|          | [Lecture Slides [Software Testing]](https://drive.google.com/file/d/1nc32ZaRU4MQbbIqplNQPJofe27BHXBAJ/view?usp=sharing) |
| **Week 5** | |
| 2/9/26  | **Debugging your code** <!--- <br> *Watch:* [Back To Basics: Debugging Techniques](https://www.youtube.com/watch?v=M7fV-eQwxrY) (65 min) --> |
|          | *Watch:* [Lessons from 20 years of Debugging C++ Code](https://www.youtube.com/watch?v=QjZnzrhiJ2g) (only need the first 45 min) |
|          | *Watch:* [Constexpr and Static Assert](https://www.youtube.com/watch?v=ncQkEgGxKQo) (7 min) |
|          | Lecture Slides: [Debugging / compile-time work](https://docs.google.com/presentation/d/1G_7e2chtwvZzAfu5sUkd6R70WkAwe3x6tkgSgaIgBHQ/edit?usp=sharing) |
|          | <b style="color: blue">Quiz:</b> 1c |
|          | [Lecture Slides [Non-conventional Testing Techniques]](https://drive.google.com/file/d/12D7He6Jp2I_Hf6i6tHUhwzRNVPnTywqe/view?usp=sharing) |
| 2/11/26  | **Memory Management** + **Casting** <!--- <br> *Watch:* [C++ Memory Management Part 1: Pointer Primer, new, delete, macros](https://www.youtube.com/watch?v=DuJxoTzrCLY) (14 min) <br> *Watch:* [C++ Memory Management Part 2: Modern Pointers, shared, unique](https://www.youtube.com/watch?v=u_FEZDfBPk8) (23 min) --> |
|          | *Watch:* [Smart Pointers in C++](https://www.youtube.com/watch?v=e2LMAgoqY_k) (25 min) |
|          | <b style="color: blue">Quiz:</b> 2b |
|          | <b style="color: red">Milestone:</b> Test suite, class asserts |
|          | [Lecture Slides [Memory Safety]](https://drive.google.com/file/d/1QPE-x7cIW8naTkZp5R1EY9XktooYz54f/view?usp=sharing) |

## Unit III: Writing Generic Code

| Date     | Discussion Topic                    |
|:--------:|-------------------------------------|
| **Week 6** | |
| 2/16/26  | **Template Rules** |
|          | *Watch:* [Templates Introduction](https://www.youtube.com/watch?v=S2OFJe73fxA) (11 min) |
|          | *Watch:* [Template Functions](https://www.youtube.com/watch?v=ITeJbESNH7A) (14 min) |
|          | *Watch:* [Multiple Template Parameters & Non-Object Parameters](https://www.youtube.com/watch?v=3ndFf7ZnT5I) (8 min) |
|          | <b style="color: red">Due:</b> Fully functional C\+\+ classes (5 pts) |
|          | <b style="color: green">Out:</b> Code review assignments and rubrics |
| 2/18/26  | **Template Specialization and Variadic templates** |
|          | *Watch:* [Template Specialization](https://www.youtube.com/watch?v=Ci8xCDgYwuQ) (10 min) |
|          | *Watch:* [Variadic Templates and Function Arguments](https://www.youtube.com/watch?v=irFkMavpL9A) (15 min) |
|          | <b style="color: blue">Quiz:</b> 3a |
|          | <b style="color: red">Due:</b> [Video Overview](https://cse498.github.io/projects.html#video_overview) (5 pts) |
| **Week 7** | |
| 2/23/26 | **Status Discussions** (*Normal class time AND optional 5-7pm for additional team discussions*) |
|         | <b style="color: red">Due:</b> Code Reviews |
| 2/25/26 | **Status Discussions** (*Normal class time AND optional 5-7pm for additional team discussions*) |
|         | <b style="color: red">Milestone:</b> Full specs for Modules (including APIs and C\+\+ class improvements) |
|         | <b style="color: blue">Quiz:</b> 3b |
| 2/27/26 | <b style="color: red">Due:</b> Code fixes based on peer reviews |
| **SPRING BREAK!** | (no class this week) |
| **Week 8** | | |
| 3/9/26  | **Lambdas** |
|         |  *Watch:* [Lambda Part I](https://www.youtube.com/watch?v=qpgJvl3To3M) (15 min)  |
|         |  *Watch:* [Lambda Part II](https://www.youtube.com/watch?v=R1bwTAarnz4) (20 min)  |
|         |  *Watch:* [Lambda Part III](https://www.youtube.com/watch?v=W18BxzS42dc) (optional: 8 min)  |
|         | [Lecture Slides [Lambdas]](https://drive.google.com/file/d/1VrP1lx58422Dr5xT3DBQRir1ik8cYFJu/view?usp=sharing) |
| 3/11/26 | **Ranges and Views** <!--- <br> *Watch:* [Effective Ranges: A Tutorial for Using C++2x Ranges](https://www.youtube.com/watch?v=QoaVRQvA6hI) (63 min) --> |
|         |  *Watch:* [C++ Ranges](https://youtu.be/Q434UHWRzI0?si=wuSTFT6z7oNWluy7&t=2267) (Only need to watch starting from 37:47 if you remember iterators and algorithms; 23 minutes)  |
|         |  [In-Class Code](https://godbolt.org/z/5v686Wd1b) |
|         |  [More Examples Range Code](https://godbolt.org/z/M31Gv5naY) |
|         | <b style="color: red">Milestone:</b> Initial working modules and improved C\+\+ classes; Integrate additional template functionality. |

## Unit IV: Writing Efficient Code

| Date     | Discussion Topic                    |
|:--------:|-------------------------------------|
| **Week 9** | |
| 3/16/26 | **Compile-time execution** <!--- <br> *Watch:* [Introduction to `constexpr`](https://www.youtube.com/watch?v=Ia0MizHPLUA) (11 min) --> |
|         |  *Watch:* [Why constexpr Matters](https://youtu.be/QZxfyGmpanM?si=UL5mAc-6ENhmp51Z) (6 minutes)  |
|         |  *Watch:* [More constexpr Math!](https://youtu.be/reWnel5uLS4?si=xhzPssGc2g6raILO) (9 minutes)  |
|         |  *Watch:* [How To Use `constexpr` In C++23](https://youtu.be/MUOAovwQbFA?si=rucbG2mISRWFV1Uq&t=720) (Can start at 12:00 and stop at 35:30, but you are welcome to watch the whole video; 24 minutes)  |
|         |  [In-Class Code](https://godbolt.org/z/8Wer3rKP8) |
|         |  [More Examples constexpr Code](https://godbolt.org/z/MEj7EvjaT) |
|         |  [Lecture Slides [constexpr]](https://docs.google.com/presentation/d/1t7efF1TDAnkZ63IedG6m0srK1RCAffmz2x6KcDdTQIE/edit?usp=sharing) |
|         |  [Lecture Slides [Software Testing (Part II)]](https://drive.google.com/file/d/1Qp1ELf_1BTpbkuyb_vvplT2JWKu3J5jA/view?usp=sharing) |
|         | <b style="color: red">Milestone:</b> Integrate lambdas into project. |
| 3/18/26 | **Value semantics** <!--- <br> *Watch:* [Back to Basics: Cpp Value Semantics](https://www.youtube.com/watch?v=G9MxNwUoSt0) (48 min) --> |
|         |  *Watch:* [Re-inventing move semantics in modern C++ in 13 minutes](https://www.youtube.com/watch?v=kqQ90R0_GFI) (optional: 13 minutes)  |
|         |  *Watch:* [Back to Basics: Rvalues and Move Semantics in C++](https://www.youtube.com/watch?v=i_Z_o9T2fNE) (59 minutes)  |
|         |  [In-Class Code](https://godbolt.org/z/f11359q7Y) |
|         |  [Lecture Slides [Value and move semantics]](https://drive.google.com/file/d/1lRAw_ccH89lGMV93n95NlzWCMTBn7-vN/view?usp=sharing) |
|         |<b style="color: blue">Quiz:</b> 4a |
| **Week 10** | |
| 3/23/26 | **Measuring Efficiency** + **Profiling Code** |
|         | *Watch:* [BENCHMARKING in C++](https://www.youtube.com/watch?v=YG4jexlSAjc) (15 min) |
|         | *Watch:* [Intro to Profiling](https://www.youtube.com/watch?v=YbYV8rRo9_A) (25 min)  |
|         |  [Lecture Slides [Edsger W. Dijkstra and Structured Programming]](https://drive.google.com/file/d/1aptM8sYIttXV6dtOG80oOYsXMB6yZq9v/view?usp=sharing) |
|         | <b style="color: red">Milestone:</b> Integrate compile-time operations OR value semantics into project. |
| 3/25/26 | **Deep Dive: Implementing `std::string`** |
|         | *Watch:* [The strange details of std::string at Facebook](https://www.youtube.com/watch?v=kPR8h4-qZdk) (31 min) |
|         |  [Lecture Slides [Optimisation - Branch Prediction]](https://drive.google.com/file/d/1qN1nW18Nxu7xxXxpqbDDYCeyVKin288K/view?usp=sharing) |
|         | <b style="color: red">Due:</b> Code for improved C\+\+ classes (5 pts) + initial working module (5 pts) classes |
|         | <b style="color: blue">Quiz:</b> 4b |
|         | <b style="color: green">Out:</b> Code review assignments and rubrics |

## Unit V: Advanced Topics and Wrap-up

| Date     | Discussion Topic                    |
|:--------:|-------------------------------------|
| **Week 11** | |
| 3/30/26  | **Using AI with C\+\+** |
|          | *Watch:* [Best Practices for AI Tool Use in C\+\+](https://www.youtube.com/watch?v=xCuRUjxT5L8) (62 min) |
|         |  [Lecture Slides [Technical debt and other challenges]](https://drive.google.com/file/d/1mpN_tm_8_DlFtoVZczRlom-Bl9iWCJ2-/view?usp=sharing) |
|          | <b style="color: red">Milestone:</b> Integration tests for full software system |
| 4/1/26   | **Concepts** |
|          | *Watch:* [Back to Basics: Concepts in C++](https://www.youtube.com/watch?v=jzwqTi7n-rg) (61 min; watch at least first 38 min) |
|          |  [Lecture Slides [A sneak peak into modern

LLMs]](https://drive.google.com/file/d/1oljzWZYBdzuK-ymqYCshWYPQFcipNAzc/view?usp=sharing) |
|          | <b style="color: blue">Quiz:</b> 5a | 
|          | <b style="color: red">Due:</b> Code Reviews |
| **Week 12** | |
| 4/6/26   | **Concurrency** |
|          | *Watch:* [Back to Basics: Concurrency](https://www.youtube.com/watch?v=8rEGu20Uw4g) - at least until 44:30; through `std::atomic` |
|          | <b style="color: red">Milestone:</b> Alpha version of full software system complete. |
| 4/8/26   | **Attributes** and **User-defined Literals** |
|          | *Watch:* [Attributes](https://www.youtube.com/watch?v=BpulWncdn9Y) (13 min) |
|          | *Watch:* [User Defined Literals // How to invent custom literal values](https://www.youtube.com/watch?v=_AbAjeTAYvE) (11 min) |
|          | <b style="color: blue">Quiz:</b> 5b |
| **Week 13** | |
| 4/13/26  | **Deep Dive: Sorting** <!--- <br> *Watch:* [Sorting Algorithms: Speed Is Found In The Minds of People](https://www.youtube.com/watch?v=FJJTYQYB1JQ) (75 min + optional questions) --> |
|          | <b style="color: red">Milestone:</b> Efficiency analyses with bottleneck identification |
| 4/15/26  | **Understanding Code Licenses** <!--- <br> *Watch:* [Free and Open Source software licenses explained](https://www.youtube.com/watch?v=UMIG4KnM8xw) (15 min) --> |
| **Week 14** | |
| 4/20/26  | **Catchup** or **Special Topics** |
|          | <b style="color: red">Due:</b> Code for final module (15 pts) + project video (5 pts) |
|          | <b style="color: green">Out:</b> Code review assignments and rubrics |
| 4/22/26  | **Newer features in C++** <!--- <br> *Watch:* [C++23: An Overview of Almost All New and Updated Features](https://www.youtube.com/watch?v=Cttb8vMuq-Y) (60 min) <br> *Optional:* [C++26 Preview - The Smaller Features](https://www.youtube.com/watch?v=xmqkRcAslw8) (62 min) --> |
| **Week 15** | (Finals Week) |
| <b style="color: #700000">Sun</b> 4/26/26 | <b style="color: red">Due:</b> Peer reviews of Final Projects! |
| 4/29/26  | **Project Demonstrations and Final Quiz Redos**                |
|          | Wednesday, April 29th, 3pm-5pm                                 |
|          | <b style="color: blue">Quiz:</b> redos                         |
|          | <b style="color: red">Due:</b> Code fixes before final grading |
