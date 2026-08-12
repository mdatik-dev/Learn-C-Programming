#include <stdio.h>

int main() {

    int n, i = 1;
    long long factorial = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

start:

    factorial *= i;

    i++;

    if(i <= n)
        goto start;

    printf("Factorial = %lld", factorial);

    return 0;
}
