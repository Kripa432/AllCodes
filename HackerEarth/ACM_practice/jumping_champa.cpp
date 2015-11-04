#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    int arr[1234];
    while(t--)
    {
    	int n,q;
    	scanf("%d %d",&n,&q);
    	for(int i=0;i<n;i++)
    		scanf("%d",&arr[i]);
    	sort(arr,arr+n);
    	long long int sum=0;
    	for(int i=1;i<n;i++)
    		sum+=(arr[i]-arr[i-1]);
    	printf("%lld\n",sum*q );

    }

    return 0;
}
