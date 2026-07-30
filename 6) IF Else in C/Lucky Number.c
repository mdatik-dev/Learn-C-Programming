#include <stdio.h>

int main() {

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num == 7)
        printf("Lucky Number");
    else
        printf("Not Lucky");

    return 0;
}
