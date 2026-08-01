#include <stdio.h>

int main() {
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age < 12)
        printf("Ticket Price = 100 Taka");
    else if(age < 60)
        printf("Ticket Price = 250 Taka");
    else
        printf("Ticket Price = 150 Taka");

    return 0;
}
