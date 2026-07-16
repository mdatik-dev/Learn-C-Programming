#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 10 == 0)
        printf("Divisible by 10");
    else
        printf("Not Divisible by 10");

    return 0;
}
