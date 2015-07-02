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
    int i,j,c,k,l,len,num,t;
    long long int temp,res;
    
    scanf("%d",&t);
    while(t--)
    {	res=0;
    	scanf("%d",&num);
    	for(i=0;i<num;i++){
    		for(j=0;j<num;j++){
    			for(k=i;k<=j;k++)
    				for(l=j;l<=i;l++)

    	}
    	printf("%lld\n",res );
    }

    return 0;
}
