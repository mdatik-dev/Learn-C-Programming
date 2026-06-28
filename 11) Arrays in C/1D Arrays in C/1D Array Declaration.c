//Declare an array

#include<stdio.h>

int main(){
    //square brackets [].

    // first way
    int num[4];

    // Add elements
    num[0] = 25;
    num[1] = 50;
    num[2] = 75;
    num[3] = 100;

    printf("%d\n",num[0]);
    printf("%d\n",num[1]);
    printf("%d\n",num[2]);
    printf("%d\n",num[3]);

    // Second way
    int myNumbers[] = {10, 20, 30, 40};

    float floatNumbers[] = {2.5, 3.5, 15.9, 4.8};

    char ch[] = {'A','B','C','a'};

    printf("%d\n",myNumbers[0]);
    printf("%d\n",myNumbers[1]);
    printf("%d\n",myNumbers[2]);
    printf("%d\n",myNumbers[3]);

    printf("%f\n",floatNumbers[0]);
    printf("%f\n",floatNumbers[1]);
    printf("%f\n",floatNumbers[2]);
    printf("%f\n",floatNumbers[3]);

    printf("%c\n",ch[0]);
    printf("%c\n",ch[1]);
    printf("%c\n",ch[2]);
    printf("%c\n",ch[3]);

    return 0;
}
