#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character (case insensitive): ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    if (ch < 'a' || ch > 'z') {
        printf("You have pressed an Unidentified Alphabet.\n");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("You have pressed a Vowel character.\n");
    }
    else {
        printf("You have pressed a Consonant character.\n");
    }

    return 0;
}
