#include <stdio.h>

int main() {

    int salary;

    printf("Enter Salary: ");
    scanf("%d", &salary);

    if(salary >= 50000)
        printf("Bonus = 10000");
    else
        printf("Bonus = 5000");

    return 0;
}
