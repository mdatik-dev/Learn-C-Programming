#include <stdio.h>

int main() {
    int n, i, arr[100], sum = 0;
    float avg;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum=%d Average=%.2f", sum, avg);

    return 0;
}

