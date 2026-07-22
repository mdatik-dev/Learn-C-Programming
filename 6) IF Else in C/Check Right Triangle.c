#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a*a + b*b == c*c ||
       a*a + c*c == b*b ||
       b*b + c*c == a*a)
        printf("Right Triangle");
    else
        printf("Not a Right Triangle");

    return 0;
}
