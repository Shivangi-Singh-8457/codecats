#include<iostream>
using namespace std;
char extra_char(string str1, string str2)
{
    int sum1=0,sum2=0,i;
    string s,l;
    if(str1.length()>str2.length())
    {s=str2; l=str1;}
    else
    {s=str1; l=str2;}
    for(i=0;s[i]!='\0';i++)
    {
        sum1+=(int)s[i];
        sum2+=(int)l[i];
    } 
    sum2+=l[i];
    return (char)(sum2-sum1);

}
int main()
{
    string str1,str2;
    cout<<"enter the strings:";
    getline(cin,str1);
    getline(cin,str2);
    cout<<"extra character is:"<<extra_char(str1,str2);
    return 0;
}