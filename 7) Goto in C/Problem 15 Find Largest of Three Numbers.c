#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        goto A;

    if(b >= a && b >= c)
        goto B;

    goto C;

A:
    printf("Largest = %d", a);
    goto end;

B:
    printf("Largest = %d", b);
    goto end;

C:
    printf("Largest = %d", c);

end:
    return 0;
}
