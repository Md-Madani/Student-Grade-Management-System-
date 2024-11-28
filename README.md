The Student Grade Management System is a simple C program designed to manage student information, including the collection of grades, calculation of weighted averages, and determination of whether the student has passed or failed. The program also validates the input to ensure that grades are within a valid range and uses weighted grades to calculate the student's average based on the importance of each grade.

Program Overview:
1. The program will allow users to input the number of students.
2. For each student, the program will take their name and grades as input.
3. It will calculate the average grade and check whether the student has passed or failed based on a passing grade threshold (e.g., 50%).

Features of the Project:

1. Student Information Management:

The program allows you to input and store details for multiple students.
Each student has a name and three grades for which the program calculates an average.

2. Input Validation:

The program validates that the grades entered are within a valid range (0 to 100). If a user enters an invalid grade (e.g., a grade less than 0 or greater than 100), it will prompt them to re-enter the grade until it's valid.

3. Weighted Average Calculation:

Instead of just calculating a simple average, the program calculates a weighted average. Each grade has a specific weight that determines how much influence it has on the overall average.

4. Pass/Fail Determination:

After calculating the weighted average, the program checks whether the student has passed or failed.
If the weighted average is 50% or higher, the student is marked as "Passed." Otherwise, the student is marked as "Failed."
This pass/fail status is displayed alongside the student’s name and grades.

5. Formatted Output:

Once all the data has been entered and processed, the program displays a summary of each student, including their name, individual grades, weighted average, and pass/fail status, all in a structured and easy-to-read table format.
