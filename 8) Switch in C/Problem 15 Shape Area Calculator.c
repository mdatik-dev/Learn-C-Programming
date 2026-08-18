#include <stdio.h>

int main() {

    int choice;
    float r, l, w;

    printf("1. Circle\n2. Rectangle\n");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter Radius: ");
            scanf("%f", &r);
            printf("Area = %.2f", 3.1416 * r * r);
            break;

        case 2:
            printf("Enter Length and Width: ");
            scanf("%f %f", &l, &w);
            printf("Area = %.2f", l * w);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
