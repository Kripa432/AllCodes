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
    int i,j,c,len,num,temp,t,res;
    char str[2001];
    
    while(1)
    {
    	scanf("%d",&num);
    	if(num==0)
    		break;
    	else{
	    	scanf("%s",str);
	    	len=strlen(str);
	    	len--;
	    	temp=(len+num-1)/num;
	    	
	    	for(i=0;i<num;i++){
	    		
	    		for(j=0;j<temp;j++)
	    			if(j&1)
	    				printf("%c",str[num*(j+1)-i-1] );
	    			else
	    				printf("%c", str[num*j+i] );
	    	}
	    	printf("\n");
    	}
    }

    return 0;
}
