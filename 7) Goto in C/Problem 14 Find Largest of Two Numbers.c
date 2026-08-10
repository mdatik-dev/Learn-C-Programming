#include <stdio.h>

int main() {

    int a, b;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        goto first;

    if(b > a)
        goto second;

    goto equal;

first:
    printf("%d is Largest", a);
    goto end;

second:
    printf("%d is Largest", b);
    goto end;

equal:
    printf("Both are Equal");

end:
    return 0;
}
