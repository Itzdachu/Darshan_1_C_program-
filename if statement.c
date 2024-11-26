#include <stdio.h>

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num > 0) {
        printf("The number is positive.\n");
    }

    // Check if the number is negative
    if (num < 0) {
        printf("The number is negative.\n");
    }

    // If the number is neither positive nor negative, it must be zero
    if (num == 0) {
        printf("The number is zero.\n");
    }

    return 0;
}
