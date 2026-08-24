#include <stdio.h>

int main() {

    int num, count = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    for(; num != 0; num /= 10) {
        count++;
    }

    printf("Total Digits = %d", count);

    return 0;
}
