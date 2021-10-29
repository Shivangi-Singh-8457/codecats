#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,digits=0, sum=0;
    printf("enter the number");
    scanf("%d",&num);
    int n=num;
    while(n!=0)
    {
        n=n/10;
        digits++;
    }
    n=num;
    while(n!=0)
    {
        i=n%10;
        sum=sum+pow(i,digits);
        n=n/10;
    }
    if(sum==num)
    printf("%d is an armstrong number",num);
    else
    printf("%d is not an armstrong number",num);
    return 0;
}