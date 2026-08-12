#include <stdio.h>

int main() {

    int n;

input:

    printf("Enter Positive Number: ");
    scanf("%d", &n);

    if(n <= 0)
        goto input;

    printf("Valid Number = %d", n);

    return 0;
}
