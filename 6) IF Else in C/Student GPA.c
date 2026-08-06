#include <stdio.h>

int main() {
    int marks;

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if(marks >= 80)
        printf("GPA = 5.00");
    else if(marks >= 70)
        printf("GPA = 4.00");
    else if(marks >= 60)
        printf("GPA = 3.50");
    else if(marks >= 50)
        printf("GPA = 3.00");
    else if(marks >= 40)
        printf("GPA = 2.00");
    else
        printf("Fail");

    return 0;
}
