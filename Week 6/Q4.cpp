#include<iostream>
using namespace std;
int RtoI(string s)
{
    int H[122]={0},sum=0,i=0;
    H['I']=1; H['V']=5; H['X']=10; H['L']=50;
    H['C']=100; H['D']=500; H['M']=1000;
    H['i']=1; H['v']=5; H['x']=10; H['l']=50;
    H['c']=100; H['d']=500; H['m']=1000;
    while(i<s.length())
    {
       if(H[s[i]]>=H[s[i+1]])
       {
           sum+=H[s[i]];
           i++;
       } 
       else
       {
           sum+=H[s[i+1]]-H[s[i]];
           i=i+2;
       }
    }
    return sum;
}
int main()
{
    string s;
    cout<<"Enter Roman Number:";
    cin>>s;
    cout<<RtoI(s);
    return 0;
}