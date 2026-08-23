#include <stdio.h>

int main() {

    int base, power, i, result = 1;

    printf("Enter Base and Power: ");
    scanf("%d %d", &base, &power);

    for(i = 1; i <= power; i++) {
        result *= base;
    }

    printf("Answer = %d", result);

    return 0;
}
