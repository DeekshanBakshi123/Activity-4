# COMP1005 2026 Lab Activity 04

## Introduction

In this activity, you will write a program, write a rationale describing how you wrote your program, and review other students' code and rationale. Read the whole of this document before starting this activity.

This activity provides an opportunity to write code and practise using functions, variables, operators, formatted output, conditionals and loops. Writing the accompanying rationale will also help you explain and justify your programming decisions, an important skill when reviewing, debugging, and maintaining code. Peer assessment is included to help you develop skills that are important for both academic study and professional software development. Writing code is only part of being a programmer. You also need to be able to read code written by others, explain your own design decisions, and provide constructive feedback.

Although this activity is formative and does **not** contribute directly to your final mark, completing it is compulsory and will help you develop the skills needed for later assessed coursework and examinations. Students who actively engage with formative activities generally gain a stronger understanding of the material and are better prepared for future summative assessments.

## Deliverables and Deadlines

There are **two** submission deadlines, one for your code and rationale, and one for your peer assessment. The following table summaries the deliverables, where these should be submitted, how long it should take you to complete each deliverable, the release date, and the submission deadline.

| Deliverable | Submitted<br>Where | Completion<br>Time | Released | Submission<br>Deadline |
| ---------- | :---------: | :------------: | :------------: | :------------: |
| task1.c | projects.cs.nott.ac.uk | 1.5 hours | Tuesday 13/10/26 12:00 | Friday 16/10/26 15:00 |
| RATIONALE_task1.txt | projects.cs.nott.ac.uk | 20 minutes | Tuesday 13/10/26 12:00 | Friday 16/10/26 15:00 |
| AI_USAGE.txt | projects.cs.nott.ac.uk | 5 minutes | Tuesday 13/10/26 12:00 | Friday 16/10/26 15:00 |
| Peer assessment | ox.cs.nott.ac.uk | 30 minutes | TBC | TBC |

This activity has been designed to be completed within the normal study time allocated for the module. To support an inclusive learning environment, all students are provided with additional time which is incorporated in to the release and submission deadlines. This inclusive extra time is intended to accommodate the different ways students learn, plan, and engage with assessments. As this additional time is already built into the activity schedule, individual extensions to the submission deadlines will **not** be granted.

## Grading

Your final mark for this activity is based on two components:

* **70%** from the assessment of your code
* **30%** from peer assessment of your code and rationale

To receive the full range of marks, you must:

* submit a completed program
* submit a rationale explaining your solution
* participate in the peer assessment process by reviewing the work assigned to you

To ensure all parts of the activity are completed, the following mark caps apply:

* **no rationale submitted**: your final mark will be based solely on the assessment of your code and will be **capped at 50%** and you will not be able to participate in the peer assessment
* **rationale and code submitted, but peer assessment not completed**: your final mark will be based solely on the assessment of your code and will be **capped at 50%**
* **code, rationale, and peer assessment all completed**: your final mark will be calculated using both the code assessment and peer assessment components, with **no cap** applied

## Feedback

Final scores and feedback will be published on the COMP1005 moodle page usually within a week of the submission deadline. You will receive a detailed individual report on moodle showing a breakdown of how your final grade was calculated. Your report will also include the comments provided on your code and rationale from the peer assessment stage. If you want further individual feedback, please come and see one of your lecturers or teaching assistants in your computing labs or during your lecturer module office hours.

## Academic Integrity

This activity is individual work i.e. *must be your own work* and follow the [University academic integrity and misconduct guidance](https://www.nottingham.ac.uk/studentservices/servicedetails/appeals-complaints-and-conduct/academic-misconduct.aspx) and [policy on academic misconduct](https://www.nottingham.ac.uk/qualitymanual/assessment-awards-and-deg-classification/pol-academic-misconduct.aspx).

You must update the `AI_USAGE.txt` file to reflect your use of AI when completing this activity otherwise you will receive zero for this activity. Use of AI tools must follow the [COMP1005 AI Usage Policy](https://moodle.nottingham.ac.uk/pluginfile.php/13223873/mod_resource/content/1/COMP1005_AI_Usage_Policy.pdf). If you did **not** use AI when completing this activity, please just write *I did not use AI* in `AI_USAGE.txt`. If you did use AI when completing this activity, you must update the `AI_USAGE.txt` file with a brief summary of how you used AI. Remember, some uses of AI are not permitted e.g. using AI to generate assignment code or to bypass problem-solving. You should review the [COMP1005 AI Usage Policy](https://moodle.nottingham.ac.uk/pluginfile.php/13223873/mod_resource/content/1/COMP1005_AI_Usage_Policy.pdf) to make sure you are using AI appropriately.

## Task 1

### Overview

**Pascal's triangle** (see [here](https://en.wikipedia.org/wiki/Pascal%27s_triangle) and [here](http://www.mathsisfun.com/pascals-triangle.html)) is an interesting pattern of numbers named after the French mathematical Blaise Pascal. Your task is to write a program to calculate and print out Pascal's triangle.

Your C source file for this task *must* be named `task1.c` and placed in the top-level directory of your git project for this coursework.

### Details

Your program should calculate Pascal's triangle for a given number of rows specified by the user and print out the triangle in the format described below. There are many ways to calculate the triangle (see the links in the [Overview](#overview) above for a starting point).

You are free to choose whichever method you want to implement your program with the following restrictions:

* you must *calculate* the values in the triangle, rather than e.g. store them in a precomputed lookup table
* your implementation must contain a correctly declared `main` function
* you are not allowed to use global variables

Your program should allow the user to specify the number of rows to print as a command line argument when your program is run. That is, if the user wants to print out the first **5** rows of Pascal's triangle, they will type:

```bash
$ ./task1 5
```

Your program should only allow users to specify integer values between *1* and *100* inclusive for the number of rows to print. If any other value for the number of rows is specified by the user (or no value at all), then your program should print an error message and return a *non-zero* exit value. If a valid value is specified, your program should print Pascal's triangle for the specified number of rows and return an exit value of *zero* (i.e. success).

Your program should output the rows of Pascal's triangle to `stdout` in *reverse order*. Here is an example output:

```bash
$ ./task1 5
1 4 6 4 1
1 3 3 1
1 2 1
1 1
1
```

## Writing Your Code

This activity is designed to help you practise using functions, variables, operators, formatted output, conditionals, loops, and command line arguments. Focus on producing code that is both correct and easy to understand.

### Start by Understanding the Problem

Before writing any code, make sure you understand:

* what input the program receives
* what output the program must produce
* what should happen when invalid input is provided
* the restrictions given in the specification

It can be helpful to sketch a few examples of the required output before designing your solution.

### Plan Your Solution

Think about how the task can be divided into smaller, manageable parts.

For example:

* obtaining and validating the number of rows
* calculating values in Pascal's triangle
* printing the triangle
* handling errors

Breaking a problem into smaller pieces often leads to cleaner code.

### Use Functions Effectively

Each function should have a clear responsibility.

Good functions are usually:

* focused on a single task
* easy to understand
* reusable
* named clearly

Avoid putting all of your program logic inside `main`.

One possible way of implementing this task is to write *three* functions (in addition to `main`). The first function takes the number of rows `n` input by the user as an argument and calculates and outputs the values in each row of the triangle using two nested loops. The outer loop iterates over the rows i.e. `i = [n, 0]`, and the inner loop iterates over the range `j = [0, i]`. In the inner loop, a second function which calculates `C(i, j)` (the possible combinations of `i` objects from a set of `j` objects) is called repeatedly. This second function uses the standard equation to calculate `C(i, j)`, calling a third function several times to calculate the factorial of a given number i.e. this third function takes a number `x` as an argument and returns `x!`. Be careful with integer overflow, as calculating factorials of even small numbers will produce numbers which may be too big to store in an `int` type.

The above approach will work for values of `n` up to `20`. For values of `n` larger than `20`, you will need to take a different approach. *Hint*: the pipeline will link your code with [GMP](https://gmplib.org/) and you can use this library in your code to handle large numbers.

### Choose Appropriate Data Types

Select data types that match the values you are working with.

Consider:

* the range of values that may be generated
* whether decimal values are required
* whether integer overflow could occur

If you are calculating large values, think carefully about the limitations of standard integer types.

### Validate User Input Carefully

Your program should check that:

* the correct number of command line arguments has been provided
* the user entered an integer value
* the value is between 1 and 100 inclusive

Remember that invalid input should produce an error message and a non-zero return value.

### Use Conditionals and Loops Clearly

Conditionals should make decisions easy to follow.

Loops should:

* have clear start and end conditions
* avoid unnecessary complexity
* be properly indented
* use meaningful loop variable names where appropriate

If you use nested loops, consider adding comments to explain their purpose.

### Make Your Output Match the Specification

Many programs produce the correct values but lose marks because the output format is incorrect.

Before submitting, check that:

* rows are printed in reverse order
* spacing is consistent
* invalid input produces an error message
* valid input produces the expected output

### Compile and Test Frequently

Compile regularly while developing your program.

Aim to eliminate:

* compilation errors
* compiler warnings.

Test your program using a variety of inputs, including:

* valid values such as `1`, `5`, `20`, and `100`;
* missing arguments;
* negative values;
* values outside the permitted range
* non-numeric input

### Write Code for Other Humans

Your code will be reviewed by other students during the peer assessment stage.

Write your code as though someone else will need to understand it without your help. Use meaningful names, consistent formatting, sensible function decomposition, and comments where they improve readability.

## Writing Your Program Rationale

Along with your `task1.c` file, submit a rationale (**approximately 200-300 words**) explaining how you designed and implemented your solution.

Your rationale should focus on the C programming concepts used in your solution, rather than describing the history or mathematics of Pascal's triangle.

### Your rationale should explain

- **Program Design**
  - how your program is structured
  - how the program processes the command line argument
  - how invalid user input is detected and handled

- **Functions**
  - what functions you created
  - the purpose of each function
  - how information is passed between functions using arguments and return values
  - why you chose to divide your solution into these functions

- **Variables, Data Types and Operators**
  - what variables you used and what they represent
  - why you selected particular data types
  - how operators and expressions are used to calculate values in Pascal's triangle

- **Conditionals and Loops**
  - how your program uses conditional statements
  - how loops are used to generate and display the rows of the triangle
  - how nested loops contribute to the solution, if applicable

- **Calculation Method**
  - briefly explain the method your program uses to calculate the values in Pascal's triangle
  - if you used helper functions or external libraries, explain their role

### Referring to Your Code

If you refer to specific parts of your program, include the relevant **line number(s)**.

For example:

> Lines 10-20 validate the command line argument and ensure the user has entered a number between 1 and 100.

> The nested loops on lines 35-45 generate and print the rows of Pascal's triangle.

Including line numbers makes it easier for the marker and peer reviewers to identify the code you are discussing.

### Good Practice

- Write in your own words
- Refer to specific parts of your program and include line numbers where appropriate
- Use correct programming terminology such as *function*, *parameter*, *argument*, *return value*, *conditional*, *loop*, *iteration*, *variable*, and *expression*
- Explain why you made particular implementation choices
- Keep your explanation concise and focused on how your code works
- Do **not** paste large sections of code into the rationale

### What We Are Looking For

A strong rationale demonstrates that you understand:

- how command line arguments work
- how input validation is performed
- how functions, arguments, and return values work together
- how conditionals and loops control program behaviour
- how your chosen algorithm calculates Pascal's triangle
- how the different parts of your program work together to solve the task
