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
    long long int res;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&num);
    	printf("%lld\n",(long long int)(4*(num-1))+1 );
    }

    return 0;
}
