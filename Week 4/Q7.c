#include<stdio.h>
int position(int x,int n);
int main()
{
    int t,i,x,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&x,&n);
        printf("%d",position(x,n));
    }
    return 0;
}
int position(int x, int n) 
{
    for(int i=1;i<=n;i++)
    {
        if(x&1==1)
        x=x+i;
        else
        x=x-i;
    }
    return x;
}