#include<stdio.h>
void main()
{
double BS, DA,HRA,GS;
printf("enter the basic salary:");
scanf("%lf",&BS);
if(BS<=10000)
{
    DA=BS*.8;
    HRA=BS*.2;
}
else if(BS>10000 && BS<=20000)
{
    DA=BS*.9;
    HRA=BS*.25;
}
else
{
    DA=BS*.95;
    HRA=BS*.3;
}
GS=BS+DA+HRA;
printf("gross salary=%.2lf",GS);
}