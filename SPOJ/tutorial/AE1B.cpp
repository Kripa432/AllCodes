#include<bits/stdc++.h>
#define LL long long int 

using namespace std;

int main()
{
   		int n,k,s;
    	scanf("%d %d %d",&n,&k,&s);
    	int prod=k*s;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		scanf("%d",&arr[i]);
    	sort(arr,arr+n);
    	reverse(arr,arr+n);
    	int count=0;
    	for(int i=0;i<n;i++){
    		prod-=arr[i];
    		count++;
    		if(prod<=0)
    			break;
    	}
    	printf("%d\n",count );

    

    return 0;
}
