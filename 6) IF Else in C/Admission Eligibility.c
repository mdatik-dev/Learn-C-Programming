#include <stdio.h>

int main() {

    int marks;

    printf("Enter Admission Marks: ");
    scanf("%d", &marks);

    if(marks >= 60)
        printf("Admission Approved");
    else
        printf("Admission Rejected");

    return 0;
}
