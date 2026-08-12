#include <stdio.h>

int main() {

    int a[5] = {10, 20, 30, 40, 50};
    int i = 0;

start:

    printf("%d ", a[i]);

    i++;

    if(i < 5)
        goto start;

    return 0;
}
