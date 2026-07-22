#include <stdio.h>

int main() {

    int length, width;

    printf("Enter Length and Width: ");
    scanf("%d %d", &length, &width);

    if(length == width)
        printf("Square");
    else
        printf("Rectangle");

    return 0;
}
