/*----------Matrix_Multiplication----------*/ 
#include<iostream>
using namespace std;
int r1,r2,c1,c2;
void Multiplication(int a[10][10],int b[10][10])
{
    int i,j,k,p[r1][c2],sum=0;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            sum+=a[i][k]*b[k][j];
            p[i][j]=sum;
        }
    }
    for(i=0;i<r1;i++)
    {for(j=0;j<c2;j++)
    cout<<p[i][j]<<" ";
    cout<<'\n';}

}
int main()
{
    int i,j;
    cin>>r1>>c1>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"Multiplication is not possible";
        return 0;
    }
    int a[10][10], b[10][10];
    for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
    cin>>a[i][j];
    for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
    cin>>b[i][j];
    Multiplication(a,b);
    return 0;

}
