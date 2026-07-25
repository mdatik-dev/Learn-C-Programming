#include <stdio.h>

int main() {
    int unit;

    printf("Enter Units: ");
    scanf("%d", &unit);

    if(unit <= 100)
        printf("Bill = %d Taka", unit * 5);
    else if(unit <= 200)
        printf("Bill = %d Taka", unit * 7);
    else
        printf("Bill = %d Taka", unit * 10);

    return 0;
}
