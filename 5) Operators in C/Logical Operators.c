#include <stdio.h>

int main() {
    int age = 20;

    printf("%d\n", age > 18 && age < 30);
    printf("%d\n", age < 18 || age > 50);
    printf("%d\n", !(age > 18));

    return 0;
}
