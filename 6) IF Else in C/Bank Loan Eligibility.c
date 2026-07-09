#include <stdio.h>

int main() {

    int salary;

    printf("Enter Monthly Salary: ");
    scanf("%d", &salary);

    if(salary >= 50000)
        printf("Eligible for Loan");
    else
        printf("Not Eligible");

    return 0;
}
