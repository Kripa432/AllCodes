#include<bits/stdc++.h>

using namespace std;

int main()
{
   	long long int t,n;
    scanf("%lld",&t);
    while(t--)
    {
    	scanf("%lld",&n);
    	long long int arr[n];
    	long long int e=1;
    	long long int count=0;
    	scanf("%lld",&arr[0]);
    	
    	for(int i=1;i<n;i++){
    		scanf("%lld",&arr[i]);
    		if(arr[i]>=arr[i-1]){
    				e++;
    				continue;
    		}
    		
    		count+=((e*(e+1))/2);
    		e=1;
    		

    	}
    	count+=((e*(e+1))/2);
    	printf("%lld\n",count );
    }

    return 0;
}
