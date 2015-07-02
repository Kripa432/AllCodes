#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

char str1[101],str2[101];
int main()
{
    int i,j,c,low,len,num,temp,t,res;
    
    scanf("%d",&t);
    while(t--)
    {	c=0;
    	low=0;
    	scanf("%s %s",str1,str2);
    	len=strlen(str1);
    	for(i=0;i<len;i++){
    		if(str1[i]=='?' || str2[i]=='?' )
    			c++;
    		else if(str1[i]!=str2[i])
    			low++;
    	}
    	printf("%d %d\n",low,low+c );
    }

    return 0;
}
