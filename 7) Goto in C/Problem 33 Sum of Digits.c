#include <stdio.h>

int main() {

    int n, digit, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

start:

    if(n == 0)
        goto result;

    digit = n % 10;
    sum += digit;
    n /= 10;

    goto start;

result:

    printf("Digit Sum = %d", sum);

    return 0;
}
