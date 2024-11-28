#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abc";
    char str2[] = "abd";

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("String 1 is smaller than String 2\n");
    else
        printf("String 1 is greater than String 2\n");

    return 0;
}
