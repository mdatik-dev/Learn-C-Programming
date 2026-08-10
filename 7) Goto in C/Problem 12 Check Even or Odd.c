#include <stdio.h>

int main() {

    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        goto even;

    goto odd;

even:
    printf("Even Number");
    goto end;

odd:
    printf("Odd Number");

end:

    return 0;
}
