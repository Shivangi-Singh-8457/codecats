#include<stdio.h>
void main()
{
    int max, marks,sum=0;
    float per;
    printf("enter the maximum marks of a subject:");
    scanf("%d",&max);
    printf("enter the marks of all five subjects:");
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&marks);
        sum=sum+marks;
    }
    per=sum*100/(max*5);
    printf("percentage=%.2f\n",per);
    if(per>=90)
    printf("grade A");
    else if(per>=80 && per<90)
    printf("grade B");
    else if(per>=70 && per<80)
    printf("grade C");
    else if(per>=60 && per<70)
    printf("grade D");
    else if(per>=40 && per<60)
    printf("grade E");
    else
    printf("grade F");
}
