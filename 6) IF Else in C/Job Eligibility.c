#include <stdio.h>

int main() {

    int age;
    float cgpa;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    if(age >= 18 && cgpa >= 3.00)
        printf("Eligible for Job");
    else
        printf("Not Eligible");

    return 0;
}
