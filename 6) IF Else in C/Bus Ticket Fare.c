#include <stdio.h>

int main() {

    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age < 12)
        printf("Ticket = 100 Taka");
    else if(age >= 60)
        printf("Ticket = 150 Taka");
    else
        printf("Ticket = 200 Taka");

    return 0;
}
