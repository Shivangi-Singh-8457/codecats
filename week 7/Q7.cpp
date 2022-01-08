/*----------Diagonal_Traversal----------*/
#include<iostream>
using namespace std;
int r,c;
void diagonal_traversal(int a[10][10])
{
    int i,j,g;
    for(g=0;g<c;g++)
    {
        for(i=0,j=g;j<r;j++,i++)
        cout<<a[i][j]<<" ";
    } 
}
int main()
{
    int i,j;
    cin>>r>>c;
    int a[10][10];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    diagonal_traversal(a);
    return 0;
}
