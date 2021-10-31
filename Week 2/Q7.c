#include <stdio.h>
#include<math.h>
int main(void) {
	int T;
	long int N,Z;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    scanf("%ld",&N);
	    Z=0;
	    for(int j=1;pow(5,j)<=N;j++)
	    {
	        Z=Z+(N/pow(5,j));
	    }
	    printf("%ld\n",Z);
	}
	return 0;
}
