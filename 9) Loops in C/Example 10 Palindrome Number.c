#include <stdio.h>

int main() {

    int num, temp, reverse = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    if(num == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
