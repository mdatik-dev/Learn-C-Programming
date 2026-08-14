#include <stdio.h>

int main() {

    int n, i = 2;

    printf("Enter Number: ");
    scanf("%d", &n);

    if(n < 2)
        goto not_prime;

check:

    if(n % i == 0)
        goto not_prime;

    i++;

    if(i <= n / 2)
        goto check;

    goto prime;

prime:
    printf("Prime Number");
    goto end;

not_prime:
    printf("Not Prime Number");

end:
    return 0;
}
