#include <stdio.h>

int main() {

    int pack;

    printf("1. 100 Tk\n");
    printf("2. 200 Tk\n");
    printf("3. 500 Tk\n");

    scanf("%d", &pack);

    switch(pack) {

        case 1:
            printf("100 Tk Recharge");
            break;

        case 2:
            printf("200 Tk Recharge");
            break;

        case 3:
            printf("500 Tk Recharge");
            break;

        default:
            printf("Invalid Pack");
    }

    return 0;
}
