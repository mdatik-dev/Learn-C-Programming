#include<stdio.h>

int main()
{
    int choice;
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("One");
                break;

            case 2:
                printf("Two");
                break;

            default:
                printf("Invalid Choice");
        }
        return 0;
}
