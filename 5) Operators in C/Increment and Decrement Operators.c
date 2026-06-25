#include <stdio.h>

int main() {
    int a = 5;

    a++;
    printf("%d\n", a);

    a--;

    printf("%d\n", a);

    ++a;
    printf("%d\n", a);

    --a;
    printf("%d\n", a);

    printf("%d\n", a++);
    printf("%d\n", a--);

    printf("%d\n", ++a);
    printf("%d\n", --a);

    int b = 5;
    printf("%d %d %d %d %d\n", ++b, b++, b, --b, b--);

    return 0;
}
