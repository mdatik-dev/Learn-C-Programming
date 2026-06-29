#include<stdio.h>

int main()
{
    int num;
    printf("Enter the total item number : ");
    scanf("%d", &num);

    int realArray[num];
    int copyArray[num];

    printf("Enter the Array : ");
    for(int i=1; i<= num; i++)
   {
        scanf("%d", &realArray[i]);
    }

    printf("\nGiven Array : \n");
    for(int i=1; i<= num; i++)
   {
        printf("%d ", realArray[i]);
    }
    printf("\n\n");

    for(int i=1; i<= num; i++)
   {
        copyArray[i] = realArray[i];
    }

    printf("\nCopy Array: \n");
    for(int i=1; i<= num; i++){
        printf("%d ", copyArray[i]);
    }
    printf("\n\n");
    return 0;
}

