#include <stdio.h>

int main() {

    int num, temp, digit;
    int sum = 0, i, fact;

    printf("Enter a Number: ");
    scanf("%d", &num);

    temp = num;

    for(; temp != 0; temp /= 10) {

        digit = temp % 10;
        fact = 1;

        for(i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
    }

    if(sum == num)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}
