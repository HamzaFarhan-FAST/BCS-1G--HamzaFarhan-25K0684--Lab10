#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf("%[^\n]", str);   

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {   
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch))
            digits++;
        else if (ch == ' ')
            spaces++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total Characters: %d", vowels+consonants+digits+spaces);

    return 0;
}
