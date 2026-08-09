#include <stdio.h>

int main() {

    int i = 5;

start:

    printf("%d ", i);

    i--;

    if(i >= 1)
        goto start;

    return 0;
}
