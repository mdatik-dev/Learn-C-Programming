#include <stdio.h>

int main() {

    int choice;

    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Coffee\n");
    printf("4. Tea\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Pizza Selected");
            break;

        case 2:
            printf("Burger Selected");
            break;

        case 3:
            printf("Coffee Selected");
            break;

        case 4:
            printf("Tea Selected");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
