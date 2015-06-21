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
    int t,flag;
    char str[101],a,b;
    int i,j,status,len;
    scanf("%d",&t);
    while(t--)
    {
    	flag=1;
    	scanf("%s",str);
    	a=str[0];
    	b=str[1];
    	if(a==b){
    		printf("NO\n");
    		continue;
    	}
    	len=strlen(str);
    	
    		for(i=0;i<len; i++)
    			if(i&1){
    				if(str[i]!=b)
    				flag=0;
    			}
    			else{
    				if(str[i]!=a)
    					flag=0;
    			}
    	
    	if(flag)
    		printf("YES\n");
    	else
    		printf("NO\n");
    }

    return 0;
}
