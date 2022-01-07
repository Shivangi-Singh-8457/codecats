/*----------Rotate Matrix by 90 degree----------*/
#include<iostream>
using namespace std;
int r,c;
void rotate_90(int a[10][10])
{
    int i,j,temp,m;
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<c;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }    
    }
    for(i=0;i<r;i++)
    {
        m=0; j=c-1;
        while(m<j)
        {
            temp=a[i][m];
            a[i][m]=a[i][j];
            a[i][j]=temp;
            m++; j--;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}
int main()
{
    int i,j;
    cin>>r>>c;
    int a[10][10], b[10][10];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    rotate_90(a);
    return 0;
}
