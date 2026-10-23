#include<stdio.h>

int main()
{
    FILE *file_one;

    if((file_one = fopen("testone.txt","r")) == NULL)
        printf("File could not be opened\n");
    else
    {
        printf("File opened successfully\n");

        int id;
        char name[100];

        while(!feof(file_one))
        {
            fscanf(file_one, "%d %s",&id,&name);

            printf("ID = %d Name = %s\n",id,name);
        }

        fclose(file_one);
    }



    return 0;
}
