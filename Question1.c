#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter password: ");
    scanf("%s", password);

    int length = strlen(password);

    
    if (length < 8) {
        printf("Password is less than 8 characters\n");
        return 0;
    }

    
    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (password[i] == '!' || password[i] == '@' ||
                 password[i] == '#' || password[i] == '$' ||
                 password[i] == '%')
            hasSpecial = 1;
    }

    
    if (hasUpper && hasDigit && hasSpecial)
        printf("Password is strong\n");
    else {
        printf("Password is weak\n");
    }

    return 0;
}
