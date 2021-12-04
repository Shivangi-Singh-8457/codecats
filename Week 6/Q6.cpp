#include<iostream>
using namespace std;
int main()
{
    string command,result;
    cout<<"enter the command (use only G, () and (al)):";
    cin>>command;
    int i,count=0;
    for(i=0;i<command.length();i++)
    {
        if(command[i]=='G')
        result[count++]=command[i];
        if(command[i]=='(') 
        {
           if(command[i+1]==')')
           {result[count++]='o'; i++;}
           else 
            {
                i++;
               result[count++]=command[i++];
               result[count++]=command[i++];
            }            
        }
    }
    result[count]='\0';
    for(i=0;i<count;i++)
    cout<<result[i];
    return 0;
}