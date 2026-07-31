#include <stdio.h>

int main() {

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num == 9)
        printf("Magic Number");
    else
        printf("Normal Number");

    return 0;
}
