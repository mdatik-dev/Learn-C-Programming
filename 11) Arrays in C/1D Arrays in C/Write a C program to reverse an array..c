#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter %d elements: ", num);
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for(int i = 0; i < num; i++)
   {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Reversed array: ");
    for(int i = num - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

