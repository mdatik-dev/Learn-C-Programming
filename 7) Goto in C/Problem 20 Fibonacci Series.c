#include <stdio.h>

int main() {

    int n, i = 1;
    int a = 0, b = 1, c;

    printf("Enter Number of Terms: ");
    scanf("%d", &n);

start:

    printf("%d ", a);

    c = a + b;
    a = b;
    b = c;

    i++;

    if(i <= n)
        goto start;

    return 0;
}
