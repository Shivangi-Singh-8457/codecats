/*----------Shell_Rotate----------*/
#include<iostream>
using namespace std;
int row,col,count=0;
void reverse(int b[40], int start, int end)
{
    int temp,i,j=end;
    for(i=start;i<j;i++,j--)
    {
       temp=b[i];
       b[i]=b[j];
       b[j]=temp;
    }
}
void shell_rotate(int a[10][10], int s)
{
    int i,j,minr,minc,b[40],n;
    cout<<"enter no. of times to rotate";
    cin>>n;
    int maxc=col-s, maxr=row-s;
    minr=s-1;
    minc=s-1;
        for(i=minr,j=minc;i<=maxr;i++)
        {
            b[count]=a[i][j];
            count++;
        }
        for(i=maxr,j=minc+1;j<=maxc;j++)
        {
            b[count]=a[i][j];
            count++;
        }
        for(i=maxr-1,j=maxc;i>=minr;i--)
        {
            b[count]=a[i][j];
            count++;
        }
        for(i=minr,j=maxc-1;j>minc;j--)
        {
            b[count]=a[i][j];
            count++;
        }
        n=n%(count);
        reverse(b,0,count-n-1);
        reverse(b,count-n,count-1);
        reverse(b,0,count-1);
        count=0;
        for(i=minr,j=minc;i<=maxr;i++)
        {
            a[i][j]=b[count];
            count++;
        }
        for(i=maxr,j=minc+1;j<=maxc;j++)
        {
            a[i][j]=b[count];
            count++;
        }
        for(i=maxr-1,j=maxc;i>=minr;i--)
        {
            a[i][j]=b[count];
            count++;
        }
        for(i=minr,j=maxc-1;j>=minc;j--)
        {
            a[i][j]=b[count];
            count++;
        }
        cout<<'\n';
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            cout<<a[i][j]<<" ";
            cout<<'\n';
        }
}

int main()
{
    int i,j,s;
    cin>>row>>col;
    int a[10][10];
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    cin>>a[i][j];
    cout<<"enter the shell no. to rotate";
    cin>>s;
    shell_rotate(a,s);
    return 0;
}
