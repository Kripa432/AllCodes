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
    int i,j,flag,n,count;
    scanf("%d",&t);
    while(t--)
    {	count=0;
    	scanf("%d",&n);
    	int arr[n];
    	for(i=0;i<n;i++){
    		scanf("%d",&arr[i]);
    	}
    	for(i=0;i<n-1;i++){
    		if(arr[i]!=arr[i+1]){
    			if(arr[i]==arr[i-1] && i>0)
    				count+=2;
    			else if (arr[i]!=arr[i-1] && i>0 )
    				count+=1;
    			else if(i==0)
    				count+=2;
    		}
    	}
    	printf("%d\n",count );
    }

    return 0;
}
