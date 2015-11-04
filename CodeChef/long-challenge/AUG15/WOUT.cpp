#include<bits/stdc++.h>

using namespace std;

int main()
{
   	long long int num,t,h,x,y;
    scanf("%lld",&t);
    while(t--)
    {	
    	scanf("%lld %lld",&num,&h);
    	long long int arr[num+5]={0};
    	
    	for(int i=0;i<num;i++){
    		scanf("%lld %lld",&x,&y);
    		arr[x]++;
    		arr[y+1]--;
    	}
    	for(int i=1;i<num;i++){
    		arr[i]+=arr[i-1];	
    	}
    	for(int i=1;i<num;i++)
    		arr[i]+=arr[i-1];

    	long long int max=0;
    	for(int i=0;i+(h-1)<num;i++){
    		if(i==0){
    			if(max<arr[h-1])
    				max=arr[h-1];
    		}else{
    			if(max<arr[i+(h-1)]-arr[i-1])
    				max=arr[i+h-1]-arr[i-1];
    		}
    	}
    	printf("%lld\n",num*h-max );
    }
    return 0;
    	
}