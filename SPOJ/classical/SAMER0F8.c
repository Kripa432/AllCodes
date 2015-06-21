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
    long long int i,j,c,len,n,temp,t,res;
    
    while(1){
    	scanf("%lld",&n);
    	if(n==0)
    		break;
    	else
    		printf("%lld\n",(n * (n+1)*(n*2+1))/6 );
    }

    return 0;
}
