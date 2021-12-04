#include<iostream>
using namespace std;
int main()
{
    string s;
    int k,i,H[26]={0};
    cout<<"enter the sequence and a number:";
    cin>>s; cin>>k;
    for(i=0;i<s.length();i++)
    H[s[i]-'a']++;
    for(i=0;i<s.length();i++)
    {
        if(H[s[i]-'a']>=k)
        cout<<s[i];
    }
    return 0;
}