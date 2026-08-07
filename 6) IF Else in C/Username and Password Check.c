#include <stdio.h>
#include <string.h>

int main() {

    char username[20], password[20];

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    if(strcmp(username, "admin") == 0 &&
       strcmp(password, "12345") == 0)
        printf("Login Successful");
    else
        printf("Login Failed");

    return 0;
}
