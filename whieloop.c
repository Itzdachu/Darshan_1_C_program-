#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        sum += i;
        i++;
    } while (i <= n);

    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
