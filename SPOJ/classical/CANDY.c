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
    int i,j,c,len,num,temp,t,res;
    int arr[100001];
    
    while(1)
    {	c=len=0;
    	scanf("%d",&num);
    	if(num==-1)
    		break;
    	for(i=0;i<num;i++){
    		scanf("%d",&arr[i]);
    		c+=arr[i];
    	}
    	if(c/num!=(float)c/num){
    		printf("-1\n");
    		continue;
    	}
    	temp=c/num;

    	for(i=0;i<num;i++)
    		len+=abs(arr[i]-temp);
    	printf("%d\n",len/2 );
    }

    return 0;
}
