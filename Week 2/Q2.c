#include<stdio.h>
long fact(int n);
void main()
{
    int n;
    long f;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0)
    {f=fact(n);
    printf("%ld",f);}
    else
    printf("wrong input, enter positive integer");

}
long fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}