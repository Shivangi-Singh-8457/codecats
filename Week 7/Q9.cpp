/*----------Search in a sorted 2D Array----------*/
#include<iostream>
using namespace std;
int r,c;
void search(int a[10][10])
{
    int i,j,k;
    cout<<"enter the number to search";
    cin>>k;
    i=0; j=c-1;
    while(i<r && j>=0)
    {
        if(k==a[i][j])
        {
            cout<<"at ("<<i+1<<","<<j+1<<")";
            break;
        }
        else if(k<a[i][j])
        j--;
        else
        i++;
    }
    if(i>=r || j<0)
    cout<<"not present in array";
}
int main()
{
    int i,j;
    cin>>r>>c;
    int a[10][10];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    search(a);
    return 0;
}
