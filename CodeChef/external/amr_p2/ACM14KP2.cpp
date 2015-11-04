#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {	int n,k;
    	scanf("%d %d",&n,&k);
    	int arr[k];
    	for(int i=0;i<n;i++)
    		scanf("%d",&arr[i]);
    	int count=0;
    	for(int i=1;i<n;i++){
    		for(int j=0;j<n-i;j++)
    			if(arr[j]>arr[j+1]){
    				count++;
    				swap(arr[j],arr[j+1]);
    			}
    	}
    	if(count>=k)
    		printf("%d\n",count-k );
    	else{
    		if((k-count)%2==0){
    			printf("0\n");
    		}
    		else
    			printf("1\n");
    	}
    }

    return 0;
}
