#include <stdio.h>

int main() {

    printf("A\n");

    goto skip;

    printf("B\n");

skip:
    printf("C\n");

    return 0;
}
