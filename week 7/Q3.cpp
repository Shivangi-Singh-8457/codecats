/*----------Spiral_Traversal----------*/
#include<iostream>
using namespace std;
int minr=0,minc=0,maxr,maxc;
void spiral_traversal(int a[10][10])
{
    int i,j,count=0,ele=maxr*maxc;
    maxc--; maxr--;
    while(count<ele)
    {
        for(i=minr,j=minc;i<=maxr && count<ele;i++)
        {
            cout<<a[i][j]<<" ";
            count++;
        }
        minc++;
        for(i=maxr,j=minc;j<=maxc && count<ele;j++)
        {
            cout<<a[i][j]<<" ";
            count++;
        }
        maxr--;
        for(i=maxr,j=maxc;i>=minr && count<ele;i--)
        {
            cout<<a[i][j]<<" ";
            count++;
        }
        maxc--;
        for(i=minr,j=maxc;j>=minc && count<ele;j--)
        {
            cout<<a[i][j]<<" ";
            count++;
        }
        minr++;
    }
}
int main()
{
    int i,j;
    cin>>maxr>>maxc;
    int a[10][10], b[10][10];
    for(i=0;i<maxr;i++)
    for(j=0;j<maxc;j++)
    cin>>a[i][j];
    spiral_traversal(a);
    return 0;
}
