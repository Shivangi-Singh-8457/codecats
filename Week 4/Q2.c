#include<stdio.h>
#include<stdbool.h>
#define false 0
int H[1000];
int main()
{
    int n,i,num;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    bool B[1000];
    printf("enter the array elements");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        H[a[i]]++;
        B[a[i]]=true;
    }
    for(i=1;i<=n;i++)
    {
        if(H[a[i]]!=0)
        printf("%d - %d times\n",a[i],H[a[i]]);
        H[a[i]]=0;
    }
    printf("enter the number you want to search:");
    scanf("%d",&num);
    if(B[num])
      printf("%d is exists in the array",num);
      else
      printf("%d is not exists in the array",num);
    return 0;
}