#include<stdio.h>
void main()
{
    int n,num,sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        (a[i]&1==1)?(sum1+=a[i]):(sum2+=a[i]);
        (i&1==1)?(sum3+=a[i]):(sum4+=a[i]); 
    }
    printf("sum of all elements=%d\n",sum);
    printf("sum of even elements=%d\nsum of odd elements=%d\n",sum2,sum1);
    printf("sum of even positioned elements=%d\nsum of odd positioned elements=%d\n",sum4,sum3);
}