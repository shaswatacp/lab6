//Write a c program to print the negative elements of an array.
#include<stdio.h>
int main()
{
    int i,array[5];
    printf("Enter array elements  :  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n\nelements are :\n ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    printf("\n\nnegative elements are :\n  ");
    for(i=0;i<5;i++)
    {
        if(array[i]<0)
        {
            printf("%d\n",array[i]);
        }
    }
}
