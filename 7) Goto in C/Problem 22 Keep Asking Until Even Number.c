#include <stdio.h>

int main() {

    int n;

input:

    printf("Enter Even Number: ");
    scanf("%d", &n);

    if(n % 2 != 0)
        goto input;

    printf("Valid Even Number = %d", n);

    return 0;
}
