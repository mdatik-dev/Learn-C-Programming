#include <stdio.h>

int main() {

    int dept;

    printf("1. CSE\n");
    printf("2. EEE\n");
    printf("3. BBA\n");
    printf("4. English\n");

    scanf("%d", &dept);

    switch(dept) {

        case 1:
            printf("Computer Science & Engineering");
            break;

        case 2:
            printf("Electrical & Electronic Engineering");
            break;

        case 3:
            printf("Bachelor of Business Administration");
            break;

        case 4:
            printf("English Department");
            break;

        default:
            printf("Invalid Department");
    }

    return 0;
}
