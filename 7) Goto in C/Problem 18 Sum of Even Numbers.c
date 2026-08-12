#include <stdio.h>

int main() {

    int i = 2;
    int sum = 0;

start:

    sum += i;

    i += 2;

    if(i <= 100)
        goto start;

    printf("Sum = %d", sum);

    return 0;
}
