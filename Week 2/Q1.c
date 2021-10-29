#include<stdio.h>
int main()
{
    int n,sum,sumO,sumE=0,j=0;
    printf("enter the number of terms:");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    sumO=n*n;
    for(int i=1;j<n;i++)
    {
       if(!(i&1))
       {
           sumE=sumE+i;
           j++;
       }
    }
    printf("first %d natural numbers sum is=%d\n",n,sum);
    printf("first %d odd natural numbers sum is=%d\n",n,sumO);
    printf("first %d even natural numbers sum is=%d\n",n,sumE);
    return 0;
}