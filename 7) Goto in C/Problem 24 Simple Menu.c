#include <stdio.h>

int main() {

    int choice;

menu:

    printf("\n1. Hello");
    printf("\n2. C Programming");
    printf("\n3. Exit");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        goto hello;

    if(choice == 2)
        goto cprogramming;

    if(choice == 3)
        goto end;

    printf("Invalid Choice!\n");
    goto menu;

hello:
    printf("Hello World!\n");
    goto menu;

cprogramming:
    printf("Welcome to C Programming!\n");
    goto menu;

end:
    printf("Program Ended.");

    return 0;
}
