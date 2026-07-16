#include <stdio.h>

int main() {

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num < 0 && num % 2 == 0)
        printf("Even Negative");
    else if(num < 0 && num % 2 != 0)
        printf("Odd Negative");
    else
        printf("Not a Negative Number");

    return 0;
}
