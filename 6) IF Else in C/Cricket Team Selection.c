#include <stdio.h>

int main() {

    int age;
    float fitness;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Fitness Score: ");
    scanf("%f", &fitness);

    if(age <= 30 && fitness >= 8.0)
        printf("Selected");
    else
        printf("Not Selected");

    return 0;
}
