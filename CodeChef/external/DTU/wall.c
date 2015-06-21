#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
	int t;
	long long int n,i,j,temp,a,b,c,d,e;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		
		
		a=0;
		b=1;
		c=1;
		
		for(i=3;i<=n;i++){
			
			d=a+b+i*2;
			d%=10000003;
			a=b;
			b=c;
			c=d;
			
			
		}
		
		printf("%d\n",d);
		
		


	}

	return 0;
}
