#include<stdio.h>
void main()
{
    int n,i,num,count=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the number:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        count++;
    }
    printf("%d",count);
}