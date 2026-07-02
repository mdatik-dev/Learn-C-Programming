#include <stdio.h>

int main() {
    int n, i, arr[100], isPal = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-i-1]) {
            isPal = 0;
            break;
        }
    }

    if(isPal)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
