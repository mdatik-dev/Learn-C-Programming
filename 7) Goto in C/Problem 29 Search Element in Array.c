#include <stdio.h>

int main() {

    int a[5] = {10, 20, 30, 40, 50};
    int key, i = 0;

    printf("Enter Search Value: ");
    scanf("%d", &key);

search:

    if(a[i] == key)
        goto found;

    i++;

    if(i < 5)
        goto search;

    goto not_found;

found:
    printf("Element Found at Index %d", i);
    goto end;

not_found:
    printf("Element Not Found");

end:
    return 0;
}
