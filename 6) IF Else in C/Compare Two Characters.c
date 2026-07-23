#include <stdio.h>

int main() {

    char ch1, ch2;

    printf("Enter Two Characters: ");
    scanf(" %c %c", &ch1, &ch2);

    if(ch1 == ch2)
        printf("Characters are Equal");
    else
        printf("Characters are Different");

    return 0;
}
