#include <stdio.h>

int main() {

    int i, j, n = 5;

    for(i = 0; i < n; i++) {

        int num = 1;

        for(j = 0; j <= i; j++) {

            printf("%d ", num);

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
