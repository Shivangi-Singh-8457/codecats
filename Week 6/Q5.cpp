#include<iostream>
using namespace std;
int check_stones(string jewels,string stones)
{
    int H[122]={0},sum=0,i=0;
    for(i=0;i<stones.length();i++)
    H[stones[i]]++;
    for(i=0;i<jewels.length();i++)
    sum+=H[jewels[i]];
    return sum;
}
int main()
{
    string jewels, stones;
    cout<<"enter string jewels:";
    cin>>jewels;
    cout<<"enter string stones:";
    cin>>stones;
    cout<<check_stones(jewels,stones);
    return 0;
}