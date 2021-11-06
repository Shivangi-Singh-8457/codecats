#include<stdio.h>
int main()
{
    int n=5,i,j;
    for(i=1;i<2*n;i++)
    {
        for(j=1;j<2*n;j++)
           {
              if(j==i || j==2*n-i)
              printf("*");
              else
              printf(" ");
           }
           printf("\n");
    }
    return 0;
}