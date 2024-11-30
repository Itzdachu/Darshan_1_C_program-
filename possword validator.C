 #include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length, hasUpper, hasLower, hasDigit, hasSpecial;

    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);
    hasUpper = hasLower = hasDigit = hasSpecial = 0;

    if (length >= 8) {
        for (int i = 0; i < length; i++) {
            if (isupper(password[i])) {
                hasUpper = 1;
            } else if (islower(password[i])) {
                hasLower = 1;
            } else if (isdigit(password[i])) {
                hasDigit = 1;
            } else if (strchr("!@#$%^&*()-=_+,./<>?;':\"[]\{}|", password[i]) != NULL) {
                hasSpecial = 1;
            }
        }
    }

    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Strong password!\n");
    } else {
        printf("Password does not meet the criteria.\n");
        printf("Password must be at least 8 characters long and contain at least one uppercase letter, one lowercase letter, one digit, and one special character.\n");
    }
 return 0;
}
