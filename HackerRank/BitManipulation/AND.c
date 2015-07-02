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
    int i,j,c,len,num1,num2,temp,t,res;
    
    scanf("%d",&t);
    while(t--)
    {	
    	scanf("%d %d",&num1,&num2);
    	res=num1;
    	for(i=num1+1;i<=num2;i++){

    		res=res&i;
    		if(!res)
    			break;
    	}
    	printf("%d\n",res );
    }

    return 0;
}
