#include<stdio.h>
int main()
{
   int n,p;
   long num=1;
   printf("enter the number and the power");
   scanf("%d%d",&n,&p); 
   for(int i=1;i<=p;i++)
   {
       num=num*n;
   }
   printf("%ld",num);
   return 0;
}