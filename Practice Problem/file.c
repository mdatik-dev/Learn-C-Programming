#include<stdio.h>

int main()
{
    FILE *file_one;

    if((file_one = fopen("testone.txt","w")) == NULL)
        printf("File could not be opened\n");
    else
    {
        printf("File opened successfully\n");

        int id;
        char name[100];

        while(!feof(file_one))
        {
            fprintf(file_one,"%d %s\n",id,name);

            scanf("%d %s",&id,&name[100]);
        }

        fclose(file_one);
    }



    return 0;
}
