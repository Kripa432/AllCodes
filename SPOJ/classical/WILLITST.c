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
    int i,j,c,len,temp,t,res;
    unsigned long long int  num;
    float f;
    while(scanf("%llu",&num)!=EOF)
    {	
    	
    	if((num & (num-1))==0)
    		printf("TAK\n");
    	else
    		printf("NIE\n");
    }

    return 0;
}
