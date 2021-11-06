#include <stdio.h>

int main(void) {
	int T,G,I,N,Q,i,j,count;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    scanf("%d",&G);
	    for(j=1;j<=G;j++)
	    {
	        scanf("%d%d%d",&I,&N,&Q);
	        if(I==Q)
	        {
	           (N&1==1)?(count=(N-1)/2):(count=N/2); 
	        }
	        else
	        {
	            (N&1==1)?(count=(N+1)/2):(count=N/2);
	        }
	        printf("%d\n",count);
	    }
	}
	return 0;
}
