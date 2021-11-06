#include<stdio.h>
int main()
{
    int n,i,j,m,k;
    printf("enter the number of lines:");
    scanf("%d",&n);
    m=(2*n-1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        printf(" ");
        m--;
        for(k=1;k<=(2*i-1);k++)
        printf("*");
        printf("\n");
    }
    return 0;
}