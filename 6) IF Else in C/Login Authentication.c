#include <stdio.h>
#include <string.h>

int main() {

    char username[20];

    printf("Enter Username: ");
    scanf("%s", username);

    if(strcmp(username, "admin") == 0)
        printf("Welcome Admin");
    else
        printf("Access Denied");

    return 0;
}
