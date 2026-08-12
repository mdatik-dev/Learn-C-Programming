#include <stdio.h>

int main() {

    int a[5] = {20, 50, 10, 80, 30};
    int i = 1;
    int max = a[0];

start:

    if(a[i] > max)
        max = a[i];

    i++;

    if(i < 5)
        goto start;

    printf("Maximum = %d", max);

    return 0;
}
