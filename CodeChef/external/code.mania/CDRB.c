#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
long long int gcd(long long int a,long long int b){
	if((a%b)!=0)
		return gcd(b,a%b);
	else
		return b;
}

int main()
{
    int t;
    long long int res,n,ele,i;
    scanf("%d",&t);
    while(t--)
    {	
    	scanf("%lld %lld",&n,&res);
    	for(i=1;i<n;i++){
    		scanf("%lld",&ele);
    		res=gcd(res,ele);
    	}
    	printf("%lld\n",res );

    }

    return 0;
}
