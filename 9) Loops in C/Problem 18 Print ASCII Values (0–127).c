#include <stdio.h>

int main() {

    int i;

    for(i = 0; i <= 127; i++) {
        printf("%3d = %c\n", i, i);
    }

    return 0;
}
