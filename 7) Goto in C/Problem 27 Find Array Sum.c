#include <stdio.h>

int main() {

    int a[5] = {10, 20, 30, 40, 50};
    int i = 0, sum = 0;

start:

    sum += a[i];

    i++;

    if(i < 5)
        goto start;

    printf("Sum = %d", sum);

    return 0;
}
