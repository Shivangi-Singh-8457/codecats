#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c, D, R1, R2, Re, Im;
    printf("enter the coefficient of x^2, x and constant term of the equation (ax^2+bx+c=0, a>0)"); 
    scanf("%lf%lf%lf",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        R1=(-b+sqrt(D))/(2*a);
        R2=(-b-sqrt(D))/(2*a);
        printf("roots are %.2lf and %.2lf",R1,R2);
    }
    else if(D==0)
    {
        R1=-b/(2*a);
        printf("both roots are %.2lf",R1);
    }
    else
    {
        Re=-b/(2*a);
        Im=sqrt(-D)/(2*a);
        printf("roots are %.2lf+%.2lfi and %.2lf-%.2lfi",Re,Im,Re,Im);
    }
    return 0;

}