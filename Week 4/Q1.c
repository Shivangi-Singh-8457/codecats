#include<stdio.h>
int main()
{
    int i,n,j,temp;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0; j=n-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}