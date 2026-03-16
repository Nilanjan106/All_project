#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3];
    int i;
    float totalMarks = 0.0, averageMarks;

    // Input student details
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // to read a string with spaces
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        totalMarks += students[i].marks;
    }

    // Calculate average marks
    averageMarks = totalMarks / 3;

    // Print student records
    printf("\nStudent Records:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, Roll: %d, Marks: %.2f\n", i + 1, students[i].name, students[i].roll, students[i].marks);
    }

    // Print average marks
    printf("\nAverage Marks: %.2f\n", averageMarks);

    return 0;
}

