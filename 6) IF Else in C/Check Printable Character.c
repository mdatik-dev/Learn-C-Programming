#include <stdio.h>

int main() {

    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(ch >= 32 && ch <= 126)
        printf("Printable Character");
    else
        printf("Non-Printable Character");

    return 0;
}
