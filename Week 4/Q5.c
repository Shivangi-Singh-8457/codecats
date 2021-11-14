#include<stdio.h>
int H[100];
int main()
{
  int n,i;
  printf("enter the size of array:");
  scanf("%d",&n);
  int a[n],a1[n];
  printf("enter the elements of array:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      H[a[i]]++;
  }
  for(i=1;i<n;i++)
  {
     H[i]=H[i-1]+H[i]; 
  }
  for(i=0;i<n;i++)
  {
     a1[H[a[i]]-1]=a[i];
     H[a[i]]--;
  }
  for(i=0;i<n;i++)
  printf("%d ",a1[i]);
  return 0;
}