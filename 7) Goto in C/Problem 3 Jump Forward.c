#include <stdio.h>

int main() {

    printf("1\n");

    goto end;

    printf("2\n");
    printf("3\n");

end:
    printf("4\n");

    return 0;
}
