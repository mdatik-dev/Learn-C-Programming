#include <stdio.h>

int main() {

    int choice;

    printf("1.Pizza\n2.Burger\n3.Coffee\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Pizza"); break;
        case 2: printf("Burger"); break;
        case 3: printf("Coffee"); break;
        default: printf("Invalid");
    }

    return 0;
}
