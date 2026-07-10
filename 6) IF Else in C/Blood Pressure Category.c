#include <stdio.h>

int main() {
    int bp;

    printf("Enter Systolic Blood Pressure: ");
    scanf("%d", &bp);

    if(bp < 90)
        printf("Low Blood Pressure");
    else if(bp <= 120)
        printf("Normal Blood Pressure");
    else if(bp <= 140)
        printf("High Blood Pressure");
    else
        printf("Very High Blood Pressure");

    return 0;
}
