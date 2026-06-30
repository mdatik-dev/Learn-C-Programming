#include <stdio.h>

int main() {
    int n, i, pos, val, arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &pos, &val);

    arr[pos] = val;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

