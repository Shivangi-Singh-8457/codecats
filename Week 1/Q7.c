#include<stdio.h>
int main()
{
    int notes[9]={2000, 500, 200, 100, 50, 20, 10, 5, 1};
    int count, amt;
    printf("enter the amount:");
    scanf("%d",&amt);
    printf("Note : No.\n");
    for(int i=0;i<9;i++)
    {   count=0;
        if(amt>=notes[i])
        {
            count=amt/notes[i];
            amt=amt-count*notes[i];
            printf("%d : %d\n",notes[i],count);       
        }
    }
    return 0;
}