#include<stdio.h>
void main()
{
    int s,l,sl,ss,i,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    s=a[0]; l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        l=a[i];
        if(a[i]<s)
        s=a[i];
    }
    sl=s; ss=l;
    for(i=0;i<n;i++)
    {
       if(a[i]>s && a[i]<ss)
       ss=a[i];
       if(a[i]<l && a[i]>sl)
       sl=a[i]; 
    }
    printf("smallest=%d second smallest=%d\nlargest=%d second largest=%d",s,ss,l,sl);
}