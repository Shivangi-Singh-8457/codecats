/*----------Wave_Traversal----------*/
#include<iostream>
using namespace std;
int r,c;
void wave_traversal(int a[10][10])
{
    int i,j;
   for(j=0;j<c;j++)
   {
       if(j&1)
       {
           for(i=r-1;i>=0;i--)
           cout<<a[i][j]<<" ";
       }
       else
       {
           for(i=0;i<r;i++)
           cout<<a[i][j]<<" ";
       }
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
    wave_traversal(a);
    return 0;
}
