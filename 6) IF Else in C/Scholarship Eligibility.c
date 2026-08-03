#include <stdio.h>

int main() {

    float gpa;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    if(gpa >= 3.50)
        printf("Eligible for Scholarship");
    else
        printf("Not Eligible");

    return 0;
}
