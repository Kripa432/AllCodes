#include<bits/stdc++.h>

using namespace std;

int main()
{
   	long long int n;
   	cin>>n;
   	long long int arr[n];
   	for(long long int i=0;i<n;i++){
   		scanf("%lld",&arr[i]);
   	}
   	
   	sort(arr,arr+n);
   	
   	 long long int dp[n];
   	dp[0]=arr[0];
   	
   	for(long long int i=1;i<n;i++)
   		dp[i]=dp[i-1]+arr[i];
   	
   	long long int q,k;
   	cin>>q;
   	while(q--){
   		scanf("%lld",&k);
   		int i;
   		if(n%(k+1)==0){
   			i=n/(k+1);
   		}else{
   			i=n/(k+1)+1;
   		}
   		
   		printf("%lld\n",dp[i-1] );
   	}
    return 0;
}
