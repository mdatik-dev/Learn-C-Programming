#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d is Larger", a);
    else
        printf("%d is Larger", b);

    return 0;
}
