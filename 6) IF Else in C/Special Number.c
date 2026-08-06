#include <stdio.h>

int main() {

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num == 100)
        printf("Special Number");
    else
        printf("Normal Number");

    return 0;
}
