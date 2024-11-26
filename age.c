#include <stdio.h>

int main() {
    int age;

    // Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the age is within the range of younger adults (18 to 35 years)
    if (age >= 18 && age <= 35) {
        printf("You are a younger adult.\n");
    } else {
        printf("You are not a younger adult.\n");
    }

    return 0;
}
