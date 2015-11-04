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
    int i,j,len,num,temp,t,res;
    long long int x,y,sum;
    char c;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%lld",&x);
    	sum=x;

    	scanf(" %c",&c);
    	while(c!='='){
    		scanf("%lld",&x);
    		if(c=='+')
    			sum+=x;
    		else if(c=='*')
    			sum*=x;
    		else if(c=='-')
    			sum-=x;
    		else
    			sum/=x;
    		scanf(" %c",&c);
    	}
    	printf("%lld\n",sum );
    }

    return 0;
}
