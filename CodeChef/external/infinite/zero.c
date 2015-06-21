#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((=x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    int t;
    int n;
    long long sum;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);
    	n=n/5;
    	sum=5*(n*(n+1))/2;
    	printf("%d\n",sum );
    }

    return 0;
}
