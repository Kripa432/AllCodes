#include <stdio.h>
#define MOD 1000000001
long long int modPower(long long int a,long long int b,long long int c){
	int ans=1;
	while(b!=0){
		if(b&1)
			ans=(ans*a)%c;
		a=(a*a)%c;
		b=b>>1;
	}
	return ans;
}
long long int gcd(long long int a,long long int b){
	
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
    long long int prod,tgcd,i,j,sum,temp,c,num,ele;
    scanf("%lld",&num);
    scanf("%lld",&ele);
    tgcd=ele;
    prod=ele;
    for(i=1;i<num;i++){
    		scanf("%lld",&ele);
    		prod=(prod*ele)%MOD;
			tgcd=gcd(tgcd,ele);
			//printf("tgcd=%lld prod=%lld\n", );		
	}

	printf("%lld",modPower(prod,tgcd,MOD));
    
    return 0;
}
