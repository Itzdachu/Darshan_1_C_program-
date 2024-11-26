#include <stdio.h>

int main() {
    int marks;

    // Input marks from user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Outer if statement: Check if the student has passed or failed
    if (marks >= 50) {
        printf("You have passed.\n");

        // Nested if statement: Check the grade
        if (marks >= 85) {
            printf("Grade: A\n");
        } else if (marks >= 70) {
            printf("Grade: B\n");
        } else {
            printf("Grade: C\n");
        }
    } else {
        printf("You have failed.\n");
    }

    return 0;
}
