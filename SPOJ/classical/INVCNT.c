#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int arr[200001];

int main()
{
    int i,j,len,num,temp,t,res;
    long long int c;
    scanf("%d",&t);
    while(t--)
    {	c=0;
    	scanf("%d",&num);
    	for(i=0;i<num;i++)
    		scanf("%d",&arr[i]);
    	for(i=0;i<num;i++)
    		for(j=num-1;i<j;j--)
    			if(arr[i]>arr[j])
    				c++;
    	printf("%lld\n",c );
    }

    return 0;
}
