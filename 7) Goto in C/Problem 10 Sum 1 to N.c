#include <stdio.h>

int main() {

    int n, i = 1, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

start:

    sum += i;
    i++;

    if(i <= n)
        goto start;

    printf("Sum = %d", sum);

    return 0;
}
