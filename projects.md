---
layout: default
---

# Project Overview

The largest chunk of the work for this course will be developing a set of C++ modules that you will use for a larger semester project.  It will be worth a total of 45 points, plus an additional 12 points associated with turning in weekly updates.  [Here](project-details.html) are the project details for each group.

Your final grade on the project will be based on three factors:

## 1. Functionality (25 points)

Throughout the semester we will develop C++ code modules and refine a set of goals for your overall project.  You will earn points based on how well you meet these goals or demonstrate a deep understanding of why the goals cannot be fully met.  We will have a series of milestones over the course of the semester involving building modules that you will use in the final project. The instructors will be in regular communication about your progress and you will be heavily involved in the setting of goals.  Progress checkpoints toward functionality will be worth a total of 10 points, and the overall state of the project at the end of the course will be worth an additional 15.

## 2. Code Quality (20 points)

While the ultimate functionality of your code is clearly important, being able to write code that is reliable, reusable and easy to understand by other programmers is also a high level goal for this course.  Code quality will be judged based on:
+ **_Code Style_**: Have you chosen a style that is informative?  Are you consistent in your style?
+ **_Code Readability_**: Is your code easy for others to read and understand based on your maintenance of documentation, code comments, and a clean layout with short clear functions?
+ **_Code Modularity_**: Have you built useful functions and classes that are organized with a meaningful file and directory structure? 
+ **_Code Reliability_** Do you have thorough unit test coverage and effective use of in-code asserts and/or other error checking. Do you avoid undefined behaviors?

You will be getting regular in-class advice and feedback on these topics throughout the semester, including peer reviews from fellow students.  A total of up to 10 points will be awarded during development and up to an additional 10 for the final product.


## 3. Individual Contribution (A multiple applied to the other points)

It is important that each group member provides a meaningful contribution to the overall group effort and to the course-level project as a whole.  Based on ratings by your teammates and your role on the team (and audited by the instructors, if needed, using progress reports, git logs, and the work agreement) you will receive a qualification for how effective of a contributor you were to the project.

+ **_Proficient Contributor_**: You have met all of the expectations and delivered your portion of the project.  You worked diligently on the project throughout the semester and were a reliable member of the team.  You will receive full points, as earned above, on this project.

+ **_Inconsistent Contributor_**: While you participated and contributed to the project, you have done so inconsistently or otherwise have failed to fully meet the group's expectations (as put forth in your project agreement). You might have missed some tasks or not been substantially involved in the discussions or implementation.  Points above will be scaled, typically by a factor between 50% and 90% of points earned.

+ **_Minimal Contributor_**: You frequently failed to actively participate in the project. Your contribution was negligible or missing, and your lack of involvement hampered the group's overall success.  You will receive between 0% and 50% of the overall project grade.

Additionally, we have two other categories that will be given out quite sparingly.

+ **_Resilient Contributor_**: You have showcased exceptional efforts, going above and beyond base expectations to enure that your group turns in a working project. You will make up for lost points by receiving up to a 25% bonus on the points above (though not raising your full points beyond 100%).  This rating will typically be given to a student who put forth significant extra effort to make up for another group member's failure to meet expectations.

+ **_Exemplary Contributor_**: You went substantially beyond project requirements, turning in code that is impressive on all levels.  You will receive the full 45 points on the project, but this qualification also recognizes the incredible effort that you put forth with an "Exemplary Contributor" award that can be added to a resume.  We are unlikely to give more than one of these per semester.


# Project Groups

You will be in a group of three to five people to work on a semester-long project.  Students will have the opportunity to discuss potential project ideas with each other and propose groups to the instructors.  The instructors will form groups as needed, trying to match appropriate skill combinations and interests.

Once groups are formed, members will devise a working agreement with a plan for how they will all contribute to the project and support one another.  Here is an [example agreement](example_agreement.html).


# Project License

To simplify working together and allowing all students in the course to be able to use the code we develop after the course is over, all communal code will be created under the [MIT Public License](https://en.wikipedia.org/wiki/MIT_License).  This license allow others to use the provided code however they want as long as they include the Copyright notice with it.  Once you contribute to the project, make sure to add your own name to the license.

# Project Topics

Each group will be assigned a number of modules to develop proportional to the number of students in that group. While each student should plan to take the lead on at least one of the modules, they should participate in the development of all of them.  Indeed, some of the modules will be fairly easy to get an initial version working, and other will require more of the skills that you will develop over the course of the semester. That said, all of the modules are expected to illustrate strong C++ coding technique.

Some example modules include:
* Debugging tools, such as an audited vector where you can set a DEBUG flag and it will automatically check for indexing out of range and other errors (but if DEBUG is not set, it compiles without any of the tests, so there is no speed loss).
* Specialty data structures, such as a bi-directional map where you can search by either the key OR the value to get the other, or a graph object where entries can be connected to arbitrary other entries.
* Mathematical tools such [fixed-point numbers](https://en.wikipedia.org/wiki/Fixed-point_arithmetic), to supplement the floating-point numbers that we normally use, or "big integers" that can handle arbitrarily large values.
* Efficiency boosters, such as function objects that will automatically perform [memoization](https://en.wikipedia.org/wiki/Memoization) on functions that are passed into them.
* And lots of other helpful tools, such as formatted strings (that track bold, italic, colors, etc) or a random number generator that allows you to easily produce different types of random values, as needed.

# Write-up for Initial Class Development (Due: Jan 29, 2025)

For each of the assigned classes, you should include in your writeup:

1) A **class description**, including what it's goals are, and what it's high-level functionality should look like.  This does not need to perfectly match the description you were given, but it should be in the same general spirit unless you confirm any changes with the instructors ahead of time.

2) A list of **similar classes** in the standard library that you should be familiar with or use to inform the functionality you will be developing.

3) A list of **key functions** that you plan to implement.  This does not need to be an exhaustive list, but it should give a strong indication of how the the class should be used.

4) A set of **error conditions** that you will be responsive to.  For each, indicate if it's source was (1) *programmer error*, such as invalid arguments to a function, which should be caught by an assert, (2) a potentially *recoverable error*, such as a resource limitation, which should trigger an exception, or (3) a *user error*, such as invalid input, which needs to simply return a special condition for the programmer to respond to (note: these can usually be handled with exceptions as well if you prefer.)

5) Any **expected challenges** that you will be facing, an especially any extra topics you need to learn about.  This information will help me make sure to cover topics early in the course or else provide your group with extra guidance on the project.

6) A list of any **other class projects** from other groups that you think you may want to use, either in the development of your own classes or in your final application.
