#include <stdio.h>

int main() {
    int salary;

    printf("Enter Salary: ");
    scanf("%d", &salary);

    if(salary >= 50000)
        printf("Bonus = %d", salary / 5);
    else
        printf("Bonus = %d", salary / 10);

    return 0;
}
