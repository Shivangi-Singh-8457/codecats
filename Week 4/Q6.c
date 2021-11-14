#include<stdio.h>
int position(int a[], int n, int k);
int main()
{
    int n,k;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to search:");
    scanf("%d",&k);
    printf("%d",position(a,n,k));
    return 0;
}
int position(int a[], int n, int k)
{
    int i=0,j=n-1,m;
    while(i<j)
    {
       m=(i+j)/2;
       if(k<a[m])
       {
           j=m;
       }
       else if(k>a[m])
       {
           i=m+1;
       }
       else 
       return m;
    }
    return i; 
}