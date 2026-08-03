#include <stdio.h>

int main() {

    float gpa;
    int income;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter Family Income: ");
    scanf("%d", &income);

    if(gpa >= 3.80 && income <= 300000)
        printf("Scholarship Approved");
    else
        printf("Scholarship Rejected");

    return 0;
}
