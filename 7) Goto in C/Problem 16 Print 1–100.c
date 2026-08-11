#include <stdio.h>

int main() {

    int i = 1;

start:

    printf("%d ", i);

    i++;

    if(i <= 100)
        goto start;

    return 0;
}
