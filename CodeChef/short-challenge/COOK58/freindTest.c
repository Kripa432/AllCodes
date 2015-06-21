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
    int t;
    int n,i,j,ele,count;
    scanf("%d",&t);
    while(t--)
    {	count=0;
    	scanf("%d",&n);
    	int arr[102]={0};
    	for ( i = 0; i < n;++i)
    	{
    		scanf("%d",&ele);
    		arr[ele]=1;
    	}
    	for(i=1;i<=100;i++)
    		if(arr[i]!=0)
    			count++;
    	printf("%d\n",count );
    }

    return 0;
}
