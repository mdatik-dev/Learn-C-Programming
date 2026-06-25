#include <stdio.h>

int main() {
    int age = 20;
    int *ptr = &age;

    printf("%d", *ptr);

    return 0;
}
