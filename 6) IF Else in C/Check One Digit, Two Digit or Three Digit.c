#include <stdio.h>

int main() {

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num >= 0 && num <= 9)
        printf("One Digit");
    else if(num >= 10 && num <= 99)
        printf("Two Digits");
    else if(num >= 100 && num <= 999)
        printf("Three Digits");
    else
        printf("More Than Three Digits");

    return 0;
}
