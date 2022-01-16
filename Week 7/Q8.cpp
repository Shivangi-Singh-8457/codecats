/*----------Saddle_Point----------*/
#include<iostream>
using namespace std;
int r,c;
void saddle_point(int a[10][10])
{
    int i,j,f,s,k;
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=1;j<c;j++)
        {
            if(a[i][j]<a[i][s])
              s=j;
        }
        f=1;
        for(k=0;k<r;k++)
        {
            if(a[k][s]>a[i][s])
             {  f=0; break; }
        }
        if(f==1)
        {
            cout<<a[i][s]<<" at ("<<i+1<<","<<s+1<<')';
            break;
        }
    }
    if(f==0)
    cout<<"no saddle point";
}
int main()
{
    int i,j;
    cin>>r>>c;
    int a[10][10];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    saddle_point(a);
    return 0;
}
