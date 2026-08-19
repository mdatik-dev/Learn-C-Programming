#include <stdio.h>

int main() {

    int answer;

    printf("What is the Capital of Bangladesh?\n");
    printf("1. Chattogram\n");
    printf("2. Dhaka\n");
    printf("3. Khulna\n");
    printf("4. Rajshahi\n");

    printf("Enter Your Answer: ");
    scanf("%d", &answer);

    switch(answer) {

        case 2:
            printf("Correct Answer!");
            break;

        case 1:
        case 3:
        case 4:
            printf("Wrong Answer!");
            break;

        default:
            printf("Invalid Option");
    }

    return 0;
}
