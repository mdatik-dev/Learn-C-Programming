#include <stdio.h>

int main() {

    printf("Start\n");

    goto skip;

    printf("This will not print\n");

    skip:
        printf("End\n");

    return 0;
}
