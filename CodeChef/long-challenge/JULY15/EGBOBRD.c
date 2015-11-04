#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>


int main()
{
	long long int i,j,c,len,n,t,res,ele,ans,sum,k,temp,rem;
	 
	scanf("%lld",&t);
	while(t--)
	{	
		scanf("%lld %lld",&n,&k);
		rem=0;
		sum=0;
		for(i=0;i<n;i++){
			scanf("%lld",&ele);
			if(ele>=k){
				sum+=(ele-(ele%k));
				ele=(ele%k);
			}
			if(rem-ele<0)
				rem+=k;
			if(ele==0){
				if(rem){
					sum++;
					rem--;
				}
				continue;
			}else if(rem-ele==0){
				sum+=ele;
				rem=0;
			}else if(rem-ele>0){
				sum+=(ele+1);
				rem=rem-ele-1;
			}
			

		}
		printf("%lld\n",(sum+k-1)/k);
	}

	return 0;
}
