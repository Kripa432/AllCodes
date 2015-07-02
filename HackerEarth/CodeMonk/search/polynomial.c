#include <stdio.h>

int B_search(int a,int b,int c,int k){
	long long int low=0,high=100001,res,ans;
	long long int mid=(low+high)/2;
	while(low<=high){
		res=a*(mid)*(mid)+b*mid+c;
		if(res>=k)
			ans=mid;
		if(res<k)
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	return (int)ans;
}


int main()
{
    int t,a,b,c,k,low,high,mid;
    scanf("%d",&t);
    while(t--){
    	scanf("%d %d %d %d",&a,&b,&c,&k);
		printf("%d\n",B_search(a,b,c,k));	
	}
}
