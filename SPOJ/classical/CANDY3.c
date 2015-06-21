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
    long long int i,c,j,len,num,temp,t,res;
    
    scanf("%lld",&t);
    while(t--)
    {	c=0;	
    	scanf("%lld",&num);
    	for(i=0;i<num;i++){
    		scanf("%lld",&temp);
    		c+=temp;
    		c=c%num;

    	}
    	if(c==0)
    		printf("YES\n");
    	else
    		printf("NO\n");

    }

    return 0;
}
