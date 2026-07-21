#include <stdio.h>

int main() {
    int num, i, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i * i <= num; i++) {
        if(i * i == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Perfect Square");
    else
        printf("Not a Perfect Square");

    return 0;
}
