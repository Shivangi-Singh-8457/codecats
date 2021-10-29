#include<stdio.h>
void main()
{
    int m;
    long num,revnum=0;
    printf("enter the number:");
    scanf("%ld",&num);
    while(num!=0)
    {
        m=num%10;
        revnum=revnum*10+m;
        num=num/10;
    }
    printf("reverse is=%ld",revnum);
}