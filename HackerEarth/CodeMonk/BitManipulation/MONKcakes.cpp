#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,c,len,num,n,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d",&n,&k);
    	int arr[n+1];
    	for(int i=0;i<n;i++){
    		scanf("%d",&num);
    		int count=0;
    		while(num){
    			if(num&1)
    				count++;
    			num=num>>1;
    		}
    		arr[i]=count;
    	}
    	sort(arr,arr+n);
    	reverse(arr,arr+n);
    	long long int sum=0;
    	for(int i=0;i<k;i++)
    		sum+=arr[i];
    	printf("%lld\n",sum);

    }

    return 0;
}
