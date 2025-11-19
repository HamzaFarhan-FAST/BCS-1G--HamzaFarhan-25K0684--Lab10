#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    printf("Enter email address: ");
    scanf("%s", email);

    
    char *atPtr = strchr(email, '@');

    
    if (atPtr == NULL) {
        printf("Invalid Email\n");
    } 
    else {
        
        atPtr++;

        if (strlen(atPtr) == 0) {
            printf("Invalid Email\n");
        } 
        else {
            printf("Domain: %s\n", atPtr);
        }
    }

    return 0;
}
