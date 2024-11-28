#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 12, y = 25;
    printf("Maximum: %d\n", max(x, y));
    return 0;
}
