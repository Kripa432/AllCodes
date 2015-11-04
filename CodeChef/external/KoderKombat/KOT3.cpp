#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	long long int n,m,sum=0,i=0;
    	scanf("%lld %lld",&n,&m);
    	long long int arr[n];
    	for(i=0;i<m;i++){
    		scanf("%lld",&arr[i]);
    	}
    	for(;i<n;i++){
    		scanf("%lld",&arr[i]);
    		if(arr[i]&1)
    			arr[i]++;
    	}
    	for(i=0;i<m;i++)
    		sum+=arr[i];
    	for(;i<n;i++)
    		sum-=arr[i]/2;
    	if(sum>=0)
    		printf("VICTORY\n");
    	else
    		printf("DEFEAT\n");

    }

    return 0;
}
