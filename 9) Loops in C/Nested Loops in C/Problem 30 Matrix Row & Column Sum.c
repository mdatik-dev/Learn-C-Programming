#include <stdio.h>

int main() {

    int a[3][3];
    int i, j;

    printf("Enter 9 Elements:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow Sum:\n");

    for(i = 0; i < 3; i++) {

        int sum = 0;

        for(j = 0; j < 3; j++)
            sum += a[i][j];

        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn Sum:\n");

    for(j = 0; j < 3; j++) {

        int sum = 0;

        for(i = 0; i < 3; i++)
            sum += a[i][j];

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}
