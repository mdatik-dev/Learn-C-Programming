#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0)
        printf("Divisible by Both 3 and 5");
    else
        printf("Not Divisible by Both");

    return 0;
}
