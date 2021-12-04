#include<iostream>
using namespace std;
int duck(string num)
{
    int i=0;
    while(num[i]=='0' && num[i]!='\0')
    i++;
    while(num[i]!='\0')
    {
        if(num[i]=='0')
        return 1;
        i++;
    }
    return 0;
}
int main()
{
    string num;
    cout<<"enter the number:";
    cin>>num;
    if(duck(num))
    cout<<"duck number";
    else
    cout<<"not duck number";
    return 0;
}
