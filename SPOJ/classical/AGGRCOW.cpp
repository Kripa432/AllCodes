#include<bits/stdc++.h>



long long int solve(long long int arr[],long long int n,long long int low,long long int high,long long int cows){
	
	if(low>=high)
		return 0;

	long long int mid=(low+high)/2;;
	long long int max=arr[high]-arr[low];
	long long int i,j,c=0,flag;
	for(i=0;i<=n;){
	
		j=i;flag=1;
		
		while((i<=n) ){
			
			if((arr[i]-arr[j]<max))
				i++;
			else{ 
				c++;
				break;
			}
		}
		
		

		
	}
	
	
	if(c+1>=cows)
		return max;
	else{
		
		if((arr[mid]-arr[low])<(arr[high]-arr[mid+1]))
			return solve(arr,n,mid+1,high,cows);
		else
			return solve(arr,n,low,mid,cows);
	
	}
}

long long int arr[100005];
int main()
{
    using namespace std;
   

 	long long int i,j,k,n,c,len,num,temp,t,min,max;
	    
    cin>>t;
    while(t--)
    {
    	scanf("%lld %lld",&num,&c);
    	for(i=0;i<num;i++)
    		scanf("%lld",&arr[i]);
    	sort(arr,num+arr);
    	max=arr[num-1]-arr[0];
    	min=1;

    	len=solve(arr,num-1,0,num-1,c);
    	printf("%lld\n",len );
    }

    return 0;
}
