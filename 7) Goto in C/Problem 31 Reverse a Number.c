#include <stdio.h>

int main() {

    int n, digit, reverse = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

start:

    if(n == 0)
        goto end;

    digit = n % 10;
    reverse = reverse * 10 + digit;
    n /= 10;

    goto start;

end:

    printf("Reverse = %d", reverse);

    return 0;
}
