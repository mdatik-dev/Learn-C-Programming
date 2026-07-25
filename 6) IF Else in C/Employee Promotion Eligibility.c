#include <stdio.h>

int main() {

    int experience;

    printf("Enter Years of Experience: ");
    scanf("%d", &experience);

    if(experience >= 5)
        printf("Eligible for Promotion");
    else
        printf("Not Eligible");

    return 0;
}
