#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    printf("%c ia a digit",ch);
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("%c is an alphabet",ch);
    else
    printf("%c is a special character",ch);
    return 0;
}