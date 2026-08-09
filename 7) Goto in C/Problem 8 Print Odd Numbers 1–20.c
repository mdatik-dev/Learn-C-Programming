#include <stdio.h>

int main() {

    int i = 1;

start:

    printf("%d ", i);

    i += 2;

    if(i <= 20)
        goto start;

    return 0;
}
