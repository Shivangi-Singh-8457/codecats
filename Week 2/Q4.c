#include<stdio.h>
void isprime();
void primeno();
int main()
{
    int op;
    printf("1. to check whether the number is prime or not\n2. to find prime numbers within the range\n");
    printf("choose one of the above mentioned option");
    scanf("%d",&op);
    switch(op)
    {
        case 1:isprime();
        break; 
        case 2:primeno();
        break;
        default:printf("wrong input");
        break;
    }
    return 0;
}
void isprime()
{
    int n,flag=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime number",n);
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    printf("%d is a prime number",n);
}
void primeno()
{
    int lr,ur,flag;
    printf("enter the lower and upper limit of the range respectively:");
    scanf("%d%d",&lr,&ur);
    for(int j=lr;j<=ur;j++)
    {
         flag=0;
        for(int i=2;i<=j/2;i++)
        {           
            if(j%i==0)
            {
               flag=1;
               break;
            }
        }
        if(flag==0)
        printf("%d ",j); 
    }
}