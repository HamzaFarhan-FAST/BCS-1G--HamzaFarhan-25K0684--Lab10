#include <stdio.h>
#include <ctype.h>

void encrypt(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + 3) % 26) + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + 3) % 26) + 'A';
        }

        str[i] = ch;
    }
}

void decrypt(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' - 3 + 26) % 26) + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' - 3 + 26) % 26) + 'A';
        }

        str[i] = ch;
    }
}

int main() {
    char message[200];

    printf("Enter message: ");
    scanf("%[^\n]", message);

    encrypt(message);
    printf("Encrypted: %s\n", message);

    decrypt(message);
    printf("Decrypted: %s\n", message);

    return 0;
}
