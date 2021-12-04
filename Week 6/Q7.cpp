#include<iostream>
using namespace std;
int check_equivalent(string s1, string s2, int n)
{
    int H1[26]={0},H2[26]={0},i;
    for(i=0;i<n;i++)
    {
        H1[s1[i]-'a']++;
        H2[s2[i]-'a']++;
    }
    for(i=0;i<n;i++)
    {
        if(!(abs(H1[s1[i]-'a']-H2[s1[i]-'a'])<=3 && abs(H2[s2[i]-'a']-H1[s2[i]-'a'])<=3))
        return 0;
    }
    return 1;
}
int main()
{
    string word1,word2;
    int n;
    cout<<"enter two strings of same length:";
    cin>>word1;
    cin>>word2;
    if(word1.length()!=word2.length())
    {
        cout<<"wrong input"; 
        return 0; 
    } 
    else
     n=word1.length();
    if(check_equivalent(word1,word2,n))
    cout<<"true";
    else 
    cout<<"false"; 
    return 0;
}