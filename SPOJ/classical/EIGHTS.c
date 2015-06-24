#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
#define cube(x) (x*x*x)

int main()
{
    long long int i,j,c,len,num,temp,t,res,k;
    
    scanf("%lld",&t);
    while(t--)
    {
    	scanf("%lld",&k);
    	printf("%lld\n",192+250*(k-1) );
    }

    return 0;
}
