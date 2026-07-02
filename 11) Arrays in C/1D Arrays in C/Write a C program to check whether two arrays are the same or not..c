#include <stdio.h>

int main() {
    int n, temp = 1;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            temp = 0;
            break;
        }
    }

    if (temp == 1)
        printf("The arrays are the same.\n");
    else
        printf("The arrays are NOT the same.\n");

    return 0;
}

