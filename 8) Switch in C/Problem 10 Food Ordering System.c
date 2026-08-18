#include <stdio.h>

int main() {

    int item;

    printf("1.Biryani\n2.Kacchi\n3.Pizza\n");
    scanf("%d", &item);

    switch(item) {
        case 1: printf("Biryani Ordered"); break;
        case 2: printf("Kacchi Ordered"); break;
        case 3: printf("Pizza Ordered"); break;
        default: printf("Invalid");
    }

    return 0;
}
