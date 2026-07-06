#include <stdio.h>

int main() {

    float gpa;
    int marks;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter Admission Marks: ");
    scanf("%d", &marks);

    if(gpa >= 4.00 && marks >= 70)
        printf("Admission Confirmed");
    else
        printf("Admission Denied");

    return 0;
}
