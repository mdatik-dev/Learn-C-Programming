#include <stdio.h>

int main()
{
    int num, rev;

    printf("Enter a number up to two digits: ");
    scanf("%d", &num);

    if (num < 10 || num > 99) {
        printf("You have entered a number which is more than two digits.\n");
    } else {
        rev = (num % 10) * 10 + (num / 10);
        printf("Your desired output is: %d\n", rev);
    }

    return 0;
}
