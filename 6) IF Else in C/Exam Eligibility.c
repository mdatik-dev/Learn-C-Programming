#include <stdio.h>

int main() {

    int attendance;

    printf("Enter Attendance Percentage: ");
    scanf("%d", &attendance);

    if(attendance >= 75)
        printf("Eligible for Exam");
    else
        printf("Not Eligible");

    return 0;
}
