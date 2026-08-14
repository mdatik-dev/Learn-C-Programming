#include <stdio.h>

int main() {

    int n, original, digit;
    int reverse = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    original = n;

start:

    if(n == 0)
        goto check;

    digit = n % 10;
    reverse = reverse * 10 + digit;
    n /= 10;

    goto start;

check:

    if(original == reverse)
        goto palindrome;

    goto not_palindrome;

palindrome:
    printf("Palindrome Number");
    goto end;

not_palindrome:
    printf("Not Palindrome Number");

end:
    return 0;
}
