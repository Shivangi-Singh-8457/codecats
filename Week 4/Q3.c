#include<stdio.h>
int main()
{
    int n,k,i,temp;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the steps:");
    scanf("%d",&k);
    k=k%n;
    for(i=0;i<k;i++)
    {
        temp=a[n-1];
        for(int j=n-1;j>0;j--)
        a[j]=a[j-1];
        a[0]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}