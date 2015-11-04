#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {	int n,i;
    	scanf("%d",&n);
    	int arr[n],brr[n];
    	for(int i=0;i<n;i++){
    		scanf("%d",&arr[i]);
    		brr[i]=arr[i];
    	}
    	sort(arr,arr+n);

    	for(i=1;i<n-1;i++)
    		if(arr[i]==brr[i] || arr[i]==brr[i-1] || arr[i]==brr[i+1])
    			continue;
    		else
    			break;

    	if(n==1){
    		printf("YES\n");
    			continue;
    	}
    	if((arr[0]==brr[0] || arr[0]==brr[1]) && (arr[n-1]==brr[n-1] || arr[n-1]==brr[n-2]) )
    		;
    	else{
    		printf("NO\n");
    		continue;
    	}
    	if(i==n-1)
    		printf("YES\n");
    	else
    		printf("NO\n");

    }

    return 0;
}
