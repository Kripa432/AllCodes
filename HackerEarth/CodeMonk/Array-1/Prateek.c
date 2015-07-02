#include <stdio.h>

int main()
{
    int i,j,c,t,arr[1000001],n,x,flag;
    long long int sum;
    scanf("%d",&t);
    while(t--){
    	flag=0;
    	scanf("%d %d",&n,&x);
    	for(i=0;i<n;i++)
    		scanf("%d",&arr[i]);
    	for(i=0;i<n;i++){
    		sum=0;
    		for(j=i;sum<x && j<n;j++){
    			sum+=arr[j];
    		}
    		if(sum==x){
    				flag=1;
    				break;
    		}
    	}
    	if(flag)
    		printf("YES\n");
    	else
    		printf("NO\n");
    }
}
