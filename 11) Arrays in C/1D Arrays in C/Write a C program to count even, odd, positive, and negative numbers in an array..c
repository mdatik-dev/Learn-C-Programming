#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter %d elements: ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, zero = 0, even = 0, odd = 0;
    for (int i = 0; i < num; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }else{
            odd++;
        }
        if(arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}

