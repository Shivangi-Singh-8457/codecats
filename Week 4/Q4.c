#include<stdio.h>
#include<stdlib.h>
int* fun(int a[], int tgt, int n);
int main()
{
    int n,i,tgt;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n],*ans=malloc(2*sizeof(int));
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the target:");
    scanf("%d",&tgt);
    ans=fun(a,tgt,n);
    printf("[%d,%d]",ans[0],ans[1]);
    return 0;
}
int* fun(int a[], int tgt, int n)
{
    int* res=malloc(2*sizeof(int));
    res[0]=-1; res[1]=-1;
    int i=0,j=n-1;
    while(i<j)
    {
    if(a[i]+a[j]==tgt)
    {
        res[0]=i; res[1]=j;
        return res;
    }
    if(a[i]+a[j]>tgt)
     j--;
    if(a[i]+a[j]<tgt)
     i++;  
    }
  return res;  
}