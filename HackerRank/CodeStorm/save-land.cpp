#include<bits/stdc++.h>
#define LL long long int 

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {	int n;
    	scanf("%d",&n);
    	int arr[n+4];
    	for(int i=0;i<n;i++){
    		scanf("%d",&arr[i]);
    	}
    	int count=0,tcount=0;
    	for(int i=0;i<n;i++){
    		if(arr[i]==0){
    			count++;
    			continue;
    		}else{
    			tcount+=(count/2);
    			count=0;
    		}
    	}
    	tcount+=(count/2);
    	printf("%d\n",tcount );
    }

    return 0;
}
