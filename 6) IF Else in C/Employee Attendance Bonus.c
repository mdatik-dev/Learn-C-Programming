#include <stdio.h>

int main() {

    int attendance;

    printf("Enter Attendance Percentage: ");
    scanf("%d", &attendance);

    if(attendance >= 95)
        printf("Bonus Approved");
    else
        printf("No Bonus");

    return 0;
}
