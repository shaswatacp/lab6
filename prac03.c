#include<stdio.h>
#define n 10
int main()
{
    int a[n],i,even=0,odd=0;
    printf("enter %d integer  elements \n:  ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("even elements are :\n  ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
            even++;
        }
    }
    printf("odd elements are : %d",odd);
     printf("odd elements are :\n  ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
            odd++;
        }
    }
    printf("\n\n totaleven elements are : %d",even);
        printf("\n\n total odd elements are : %d",odd);
        printf("\n");
}
