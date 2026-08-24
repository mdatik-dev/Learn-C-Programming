#include <stdio.h>

int main() {

    int num, temp, digit, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    temp = num;

    for(; temp != 0; temp /= 10) {
        digit = temp % 10;
        sum += digit * digit * digit;
    }

    if(sum == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}
