#include <stdio.h>

int main() {

    int i = 1, j;

outer:

    j = 1;

inner:

    printf("%d ", j);

    j++;

    if(j <= i)
        goto inner;

    printf("\n");

    i++;

    if(i <= 5)
        goto outer;

    return 0;
}
