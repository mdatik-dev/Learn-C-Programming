#include <stdio.h>

int main() {
    int n, target, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to count: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("Number %d appears %d time(s) in the array.\n", target, count);

    return 0;
}

