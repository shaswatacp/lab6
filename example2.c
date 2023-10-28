//A c program for array traversing.
#include<stdio.h>
int main()
{
    int i,array[5];
    printf("Enter five integers :");

    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Displaying integers :  ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
