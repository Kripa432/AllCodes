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
    int i,j,c,n,len,num,temp,t,res;
    long long int ans;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	ans=1;
    	c=0;
    	scanf("%d",&num);
    	temp=0;
    	while(num%10==0){
    		num/=10;
    		temp++;
    	}
    	for(j=5;j<=num;j=j*5)
    		if(num%j==0)
    			c++;
    	//printf("c=%d\n",c );
    	printf("%lld\n",(long long int)num*(long long int)pow(4,(int)(c+1)/2 )*(long long int)pow(10,temp));
    }

    return 0;
}
