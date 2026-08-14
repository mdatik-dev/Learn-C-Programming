#include <stdio.h>

int main() {

    int n, count = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    if(n == 0)
        goto zero;

counting:

    count++;
    n /= 10;

    if(n != 0)
        goto counting;

    goto result;

zero:
    count = 1;

result:
    printf("Number of Digits = %d", count);

    return 0;
}
