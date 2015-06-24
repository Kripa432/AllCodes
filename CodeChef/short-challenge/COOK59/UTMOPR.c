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
    int i,j,c,len,num,temp,t,res,k;
    
    scanf("%d",&t);
    while(t--)
    {	c=0;
    	scanf("%d %d",&num,&k);
    	for(i=0;i<num;i++){
    		scanf("%d",&temp);
    		c+=temp;
    		c%=2;
    	}
    	if(c==0){
    		if(k==1)
    			printf("odd\n");
    		else
    			printf("even\n");
    	}else{
    		printf("even\n");
    	}

    }

    return 0;
}
