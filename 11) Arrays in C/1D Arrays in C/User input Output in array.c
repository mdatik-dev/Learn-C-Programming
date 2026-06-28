#include <stdio.h>

int main() {
    int numbers[5];

    printf("Enter 5 numbers: ");

    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Entered numbers are: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

