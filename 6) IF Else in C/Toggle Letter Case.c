#include <stdio.h>

int main() {

    char ch;

    printf("Enter a Letter: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Toggle = %c", ch + 32);
    else if(ch >= 'a' && ch <= 'z')
        printf("Toggle = %c", ch - 32);
    else
        printf("Not an Alphabet");

    return 0;
}
