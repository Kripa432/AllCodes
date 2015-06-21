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
    int i,j,c,len,num,temp,t,res,x,y;
    
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d",&x,&y);
    	if(x==y){
    		if(x&1)
    			printf("%d\n",x*2-1 );
    		else
    			printf("%d\n",x*2 );
    	}
    	else if(x-2==y){
    		if(y&1)
    			printf("%d\n",y*2+1 );
    		else
    			printf("%d\n",y*2+2 );

    	}
    	else
    		printf("No Number\n");
    }

    return 0;
}
