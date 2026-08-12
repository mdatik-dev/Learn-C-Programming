#include <stdio.h>
#include <string.h>

int main() {

    char password[50];

input:

    printf("Enter Password: ");
    scanf("%49s", password);

    if(strcmp(password, "12345") != 0) {
        printf("Wrong Password!\n");
        goto input;
    }

    printf("Login Successful!");

    return 0;
}
