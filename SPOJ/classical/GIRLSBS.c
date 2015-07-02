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
    int i,j,c,len,num,temp,t,res,g,b;
    
    scanf("%d %d",&g,&b);
    while(g!=-1 && b!=-1)
    {
    	if(g==0 || b==0)
    		printf("%d\n",max(g,b) );
    	else if(abs(g-b)<=1)
    		printf("1\n");
    	else{
    		
    		if(g>b)
    			temp=(g+b)/(b+1);
    		else
    			temp=(g+b)/(g+1);

    		printf("%d\n", temp);
    	}
    	scanf("%d %d",&g,&b);
    }

    return 0;
}
