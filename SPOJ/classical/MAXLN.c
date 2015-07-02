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
    int i,j,c,len,num,temp,t;
    unsigned long long int r;
    double res;
    scanf("%d",&t);
    i=1;
    while(i<=t)
    {
    	scanf("%llu",&r);
    	res=4*r*(double)r+0.25;
    	printf("Case %d: %.2f\n",i,res );
    	i++;
    }

    return 0;
}
