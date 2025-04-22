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


## 3. Individual Contribution (A multiplier applied to the other points)

It is important that each group member provides a meaningful contribution to the overall group effort and to the course-level project as a whole.  Based on ratings by your teammates and your role on the team (and audited by the instructors, if needed, using progress reports, git logs, and the work agreement) you will receive a qualification for how effective of a contributor you were to the project.

+ **_Proficient Contributor_**: You have met all of the expectations and delivered your portion of the project.  You worked diligently on the project throughout the semester and were a reliable member of the team.  You will receive full points, as earned above, on this project.

+ **_Inconsistent Contributor_**: While you participated and contributed to the project, you have done so inconsistently or otherwise have failed to fully meet the group's expectations (as put forth in your project agreement). You might have missed some tasks or not been substantially involved in the discussions or implementation.  Points above will be scaled, typically by a factor between 50% and 90% of points earned.

+ **_Minimal Contributor_**: You frequently failed to actively participate in the project. Your contribution was negligible or missing, and your lack of involvement hampered the group's overall success.  You will receive between 0% and 50% of the overall project grade.

Additionally, we have two other categories that will be given out quite sparingly.

+ **_Resilient Contributor_**: You have showcased exceptional efforts, going above and beyond base expectations to enure that your group turns in a working project. You will make up for lost points by receiving up to a 25% bonus on the points above (though not raising your full points beyond 100%).  This rating will typically be given to a student who put forth significant extra effort to make up for another group member's failure to meet expectations.

+ **_Exemplary Contributor_**: You went substantially beyond project requirements, turning in code that is impressive on all levels.  You will receive the full 45 points on the project, but this qualification also recognizes the incredible effort that you put forth with an "Exemplary Contributor" award that can be added to a resume.  We are unlikely to give more than one of these per semester.


# Project Groups

You will be in a group of five people to work on a semester-long project.  Students will have the opportunity to discuss potential project ideas with each other and propose groups to the instructors.  The instructors will form groups as needed, trying to match appropriate skill combinations and interests.

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

# Write-up for Initial Class Development
### Due: Jan 29, 2025

For each of the assigned classes, you should include in your writeup:

1) A **class description**, including what it's goals are, and what it's high-level functionality should look like.  This does not need to perfectly match the description you were given, but it should be in the same general spirit unless you confirm any changes with the instructors ahead of time.

2) A list of **similar classes** in the standard library that you should be familiar with or use to inform the functionality you will be developing.

3) A list of **key functions** that you plan to implement.  This does not need to be an exhaustive list, but it should give a strong indication of how the the class should be used.

4) A set of **error conditions** that you will be responsive to.  For each, indicate if it's source was (1) *programmer error*, such as invalid arguments to a function, which should be caught by an assert, (2) a potentially *recoverable error*, such as a resource limitation, which should trigger an exception, or (3) a *user error*, such as invalid input, which needs to simply return a special condition for the programmer to respond to (note: these can usually be handled with exceptions as well if you prefer.)

5) Any **expected challenges** that you will be facing, an especially any extra topics you need to learn about.  This information will help me make sure to cover topics early in the course or else provide your group with extra guidance on the project.

6) A list of any **other class projects** from other groups that you think you may want to use, either in the development of your own classes or in your final application.

# <span id="review-1">Rubric for initial code reviews (Round 1)</span>

### Design
- **Informative identifiers**.  Are names of variables, functions, types, etc, clear and helpful for a reader to understand the code.  For example, if you need to track the number of students in a class, good variable names might be `num_students` or `student_count`, whereas you don't want something too short to be confusing (like `N` or `num_s`) or too verbose that it's annoying (like `total_number_of_students_in_class`).
- **Avoids "magic numbers"**.  Similar to above, you should use constant variables with informative names instead of arbitrary numbers throughout your code, and instead set constants.  For example, I have a virtual CPU class with 6 virtual registers, but rather than using "6" throughout, I set `static constexpr size_t NUM_REGS = 6;` at the top of the class to make it clearer what the 6 refers to (and, in this case so that I can change it if needed.)
- **Intuitive and functional interface**. Does the class expose only the necessary functionality, and is it easy to use correctly while hard to misuse? Are member variables private?  Is there an obvious function to use for common tasks, with relevant default arguments for parameters? Are any of the functions misleading, like potentially confusing uses of operator overloading?  (Feel free to provide suggestions on how to improve the interface for better usability)
- **Informative comments**. Do comments help someone new to the code understand it more rapidly?  Did the coder properly avoid redundant or obvious comments that clutter the code (e.g., `++x; // increments x`).  In general, comments should focus on _why_ code is helpful, rather than belabor _what_ that code does (though with complex code, the latter is useful too.)
- **Consistent style**. Are style choices (like naming schemes, brace placement, etc) used in a consistent and informative manner throughout the code?  Is there consistency in how different naming conventions are used? (e.g., `camelCase`, `snake_case`, `ALL_CAPS`, or `PascalCase`, or prefixes and suffixes, like `m_` at the beginning of a member variable.).
- **Visual appearance**. Is the code easy to scan through and visually well structured with good use of whitespace, indentation, and line breaks?  Do there appear to be consistent limits on line widths?

### Implementation
- **No warnings during compilation.**  Does the code compile with the `-Wall` and `-Wextra` flags without producing warnings?  One option is to add `-Werror` to your list of options, which turns all warnings into errors and thus halts compilation when one occurs.
- **Proper uses of namespaces**.  Is all code within `namespace cse { ... }` ?  Does the code avoid the generic `using namespace std` as well as avoiding ALL namespace pollution in header files that will spread to users of those files.
- **Adheres to the C++ standard**.  Does the code avoid undefined behavior?  If possible, make sure the code compiles and runs properly on different compilers and different platforms.
- **Appropriate Modularity**. Are common procedures grouped into useful helper functions? Are helper classes used where needed?  Is unnecessary code duplication avoided?
- **Uses modern C++ constructs**.  Where applicable, does the code use range-based for loops, `std::optional`, or other modern C++ techniques?  (In the future we will also look for proper use of templates, move semantics, lambdas, and `constexpr`, but only once we cover those topics).
- **Uses standard library algorithms**.   Does the code avoid extraneous loops when equivalent functionality exists in the standard library?  For example, `std::fill` will fill a vector, `std::remove_if` will remove elements from a container based on a condition, or `std::is_sorted` will tell you if the values in a container are in order.  See https://en.cppreference.com/w/cpp/algorithm for a full list (it's LONG, but well worth being familiar with).
- **Pointer handling.**  Is memory management done carefully, with either smart pointers (`std::unique_ptr`, `std::shared_ptr`) or, only if needed, careful use of raw pointers with `new` and `delete`?
- **`const` correctness**.  Are member functions to `const` if they don't change the state of the class?  Are parameters (especially reference parameters) marked `const` if they don't change inside the function?

### Testing and Error Checking
- **Unit testing.**  Are unit tests present for all public member functions (including constructors) and well organized?  Do they trigger cases that will exercise most private portions of the class' code?
- **Edge cases.** Does testing cover most edge cases, as possible?  For example, for pointers, does it test null pointers (if they are allowed)?  Does it test for empty containers being used?  Does it test for 0 or other boundary conditions on parameters?
- **Assertions**.  Are `assert` statements used properly throughout the code to enforce invariants and ensure a valid state?  (for example, checking that valid arguments are passed into functions.) Note that asserts should be used only to identify conditions that should never occur in properly working code; if code is expected to recover, error handling must be performed.
- **Error handling.** Are error conditions that can occur during correct execution (such as resource limitations, files not available, or division by zero) checked for and reported back with either exceptions, return conditions, or some other technique?

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

During this final round of code reviews, you will again have a more specific assignment for what aspects of the target code you need to review.  This time, however, we are testing code that produces an actual application, not just a C\+\+ library, so we need to be doing more thorough testing considering how the application is likely to be used.

The five areas where review needs to be done are:
1. **Code Design**: Is the code designed in a logical and intuitive manner that allows others to easily understand it?  Feel free to refer to the list of specific topics in the round 1 reviews, but you should also consider other subjective areas, identifying any point that you may be confused in your own attempt to understand the code.  Please try to provide suggestions for how to fix any problems.
2. **Implementation Quality**: Is the code written to be safe, efficient, and flexible? Feel free to refer to the specific topics in round 1, but you should more generally be looking for any places where implementation may currently be problematic, inefficient, or likely to have problems in the future as new added features cause other issues to arise.
3. **Testing and Error Checking**: Has sufficient testing been performed to verify the reliability of the current state of the code?  This should include both internal testing (e.g., asserts *that are avoided*, exceptions *that are caught* in the app, or returning of error codes / optional *that are checked*) and external testing (e.g., unit tests including thorough checking of edge cases as well as actual alpha testing of the app itself.)  In particular, make sure that bad user input is caught and handled properly; if you can cause the app to crash (as opposed to it reporting a coherent error), that is a problem to report.
4. **Use of Modern C++**: Have the authors of the app made good use of modern featured in C++, such as appropriate use of templates, use of concepts, use of std::optional, use of \[\[attributes\]\], etc.? Not all code will be expected to use every technique, but it is still helpful to point out where more modern techniques improve the code quality and the experience of the authors.
5. **User Experience**: Is the app easy to use with an intuitive interface? Most of this course has focused on good code development practices, but most applications are built for end users and user experience ia a critical quality that always needs to be considered.  Are app features easy to find?  Are the most common use cases placed in intuitive places?  Make suggestions on how the user experience can be improved overall.

## Writing your Reviews

For these reviews, you should look at the appropriate pull request and comment on the specific areas that you are assigned.  Any review comments that you can place directly on the code, that's where it should go.  All other comments (and review summaries) should be placed in a general review comment.  Your final review should be done as a proper GitHub review and should include a checklist of the biggest points that you believe are most in need of fixing.

Keep a tab on the comments and please engage with any questions or comments the developers have, as appropriate, especially if clarifications are requested.

For your specific review assignments, go [here](reviews3.html)

**NOTE**: All feedback is expected to be constructive and helpful.  You should identify helpful improvements or places to refactor, but never denigrate the code or its authors.  Constructive criticism is fine, but should be frames positively; any needlessly hurtful comments will result in points deducted from the review.
