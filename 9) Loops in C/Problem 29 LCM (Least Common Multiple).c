#include <stdio.h>

int main() {

    int a, b, max;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    for( ; ; max++) {
        if(max % a == 0 && max % b == 0) {
            printf("LCM = %d", max);
            break;
        }
    }

    return 0;
}
