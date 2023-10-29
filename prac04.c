//To copy all elements of an array to another array.
#include<stdio.h>
int main()
{
    int array1[30],array2[30],i,n;
    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("array1:  ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array1[i]=array2[i];
    }
    printf("array2  :  ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array2[i]);
    }

}
