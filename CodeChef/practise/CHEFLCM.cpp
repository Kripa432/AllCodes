#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,c,len,n,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {
    	long long sum=0;
    	scanf("%d",&n);
    	for(int i=1;i/2<=n;i++){
    		if(!(n%i)){
    			sum+=i;
    		}
    	}
    	printf("%lld\n",sum);
    }

    return 0;
}
