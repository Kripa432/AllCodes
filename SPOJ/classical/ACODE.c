#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

long long int dp[30];

int main()
{
    long long int i,j,c,len,temp,t,res;
    long long int num;
    char str[30];
    while(1)
    {
    	scanf("%s",str);
    	if(str[0]=='0')
    		break;
    	else{
    			len=strlen(str);
    			dp[0]=1;
    			for(i=1;i<len;i++){

    				temp=str[i]-'0'+(str[i-1]-'0')*10;
    				if(temp>26)
    					dp[i]=dp[i-1];
    				else 
    					dp[i]=dp[i-1]+1;
    			}
    	}
    	printf("%d\n",dp[i-1] );
    }

    return 0;
}
