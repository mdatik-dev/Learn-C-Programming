#include <stdio.h>

int main() {

    int length;

    printf("Enter Password Length: ");
    scanf("%d", &length);

    if(length >= 8)
        printf("Strong Password");
    else
        printf("Weak Password");

    return 0;
}
