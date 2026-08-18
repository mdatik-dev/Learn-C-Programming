#include <stdio.h>

int main() {

    int option;

    printf("1.Login\n2.Register\n3.Exit\n");
    scanf("%d", &option);

    switch(option) {
        case 1: printf("Login"); break;
        case 2: printf("Register"); break;
        case 3: printf("Exit"); break;
        default: printf("Invalid");
    }

    return 0;
}
