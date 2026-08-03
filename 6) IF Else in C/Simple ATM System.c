#include <stdio.h>

int main() {

    int pin = 1234, inputPin;

    printf("Enter PIN: ");
    scanf("%d", &inputPin);

    if(inputPin == pin)
        printf("Login Successful");
    else
        printf("Invalid PIN");

    return 0;
}
