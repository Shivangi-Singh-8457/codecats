/*----------Exit Point of a Matrix----------*/
#include<iostream>
using namespace std;
int r,c;
void exit_point(int a[10][10])
{
    int i=0,j=0,D=0;
    while(1)
    {
        D=(D+a[i][j])%4;
        if(D==0)
         j++;
        else if(D==1)
         i++;
        else if(D==2)
         j--; 
        else if(D==3)
         i--; 
        if(i<0)
        { i++; break;}
        else if(j<0)
        { j++; break;}
        else if(i==r)
        { i--; break;}
        else if(j==c)
        { j--; break;}
    }
    cout<<"("<<i<<","<<j<<")";
}
int main()
{
    int i,j;
    cin>>r>>c;
    int a[10][10];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    exit_point(a);
    return 0;
}
