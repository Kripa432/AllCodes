#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t,n;
    scanf("%d",&t);
    char arr[1001],brr[1001];
    int num[1002];
    while(t--)
    {
    	scanf("%d",&n);
    	scanf("%s",arr);
    	scanf("%s",brr);
    	for(int i=0;i<=n;i++){
    		scanf("%d",&num[i]);
    	}
    	int count=0;
    	for(int i=0;i<n;i++)
    		if(arr[i]==brr[i])
    			count++;
    	int max=0;
    	if(count==n){
    		printf("%d\n",num[n] );
    		continue;
    	}
    	for(int i=0;i<=count;i++){
    		if(num[i]>max)
    			max=num[i];
    	}
    	printf("%d\n",max );

    }

    return 0;
}
