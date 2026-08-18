#include <stdio.h>

int main() {

    char light;

    printf("Enter Traffic Light (R/Y/G): ");
    scanf(" %c", &light);

    switch(light) {
        case 'R':
        case 'r':
            printf("Stop");
            break;

        case 'Y':
        case 'y':
            printf("Get Ready");
            break;

        case 'G':
        case 'g':
            printf("Go");
            break;

        default:
            printf("Invalid Signal");
    }

    return 0;
}
