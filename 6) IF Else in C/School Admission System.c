#include <stdio.h>

int main() {

    float gpa;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    if(gpa >= 5.00)
        printf("Admission Confirmed");
    else
        printf("Admission Not Confirmed");

    return 0;
}
