#include <stdio.h>

int main() {
    // Declare and initialize a 2x3 matrix
    int matrix[2][3] = {
        {1, 2, 3},  // First row
        {4, 5, 6}   // Second row
    };

    // Accessing and printing elements of the matrix
    printf("Elements of the 2x3 matrix:\n");

    // Loop through the rows
    for (int i = 0; i < 2; i++) {
        // Loop through the columns
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);  // Print each element
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
