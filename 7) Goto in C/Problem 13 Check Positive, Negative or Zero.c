#include <stdio.h>

int main() {

    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    if(n > 0)
        goto positive;

    if(n < 0)
        goto negative;

    goto zero;

positive:
    printf("Positive");
    goto end;

negative:
    printf("Negative");
    goto end;

zero:
    printf("Zero");

end:
    return 0;
}
