#include <stdio.h>

// Structure to store student information
struct Student {
    char name[50];
    float grade1, grade2, grade3;
    float weightedAverage;
    char status[10];  // "Passed" or "Failed"
};

// Function to calculate weighted average and status of a student
void calculateStatus(struct Student *student, float weight1, float weight2, float weight3) {
    // Calculate the weighted average
    student->weightedAverage = ((student->grade1 * weight1) + 
                                 (student->grade2 * weight2) + 
                                 (student->grade3 * weight3)) / (weight1 + weight2 + weight3);
    
    // Check if the student passed or failed
    if (student->weightedAverage >= 50.0) {
        sprintf(student->status, "Passed");
    } else {
        sprintf(student->status, "Failed");
    }
}

// Function to validate the grade input (ensures grades are between 0 and 100)
float getValidGrade(int gradeNumber) {
    float grade;
    do {
        printf("Enter grade %d (0 - 100): ", gradeNumber);
        scanf("%f", &grade);
        if (grade < 0 || grade > 100) {
            printf("Invalid grade! Please enter a grade between 0 and 100.\n");
        }
    } while (grade < 0 || grade > 100);
    return grade;
}

int main() {
    int n;

    // Ask for number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Weights for each grade (can be adjusted as needed)
    float weight1 = 0.3;  // Weight for grade 1
    float weight2 = 0.3;  // Weight for grade 2
    float weight3 = 0.4;  // Weight for grade 3

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        
        // Input student name
        printf("Enter name: ");
        getchar();  // To clear the newline character from the buffer
        fgets(students[i].name, 50, stdin);  // Read the student name
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Remove newline character from name

        // Input grades with validation
        students[i].grade1 = getValidGrade(1);
        students[i].grade2 = getValidGrade(2);
        students[i].grade3 = getValidGrade(3);

        // Calculate weighted average and status
        calculateStatus(&students[i], weight1, weight2, weight3);
    }

    // Display results
    printf("\nStudent Results:\n");
    printf("---------------------------------------------------\n");
    printf("Name\t\tGrade 1\tGrade 2\tGrade 3\tWeighted Average\tStatus\n");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t\t%s\n", 
                students[i].name, students[i].grade1, students[i].grade2, students[i].grade3, 
                students[i].weightedAverage, students[i].status);
    }

    return 0;
}
