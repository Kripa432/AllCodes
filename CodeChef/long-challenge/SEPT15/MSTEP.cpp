#include<bits/stdc++.h>

using namespace std;

struct point{
	int x,y;
};

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--) 
    {	int n,ele;
    	scanf("%d",&n);
    	point arr[n*n+10];
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=n;j++){
    			scanf("%d",&ele);
    			arr[ele].x=i;
    			arr[ele].y=j;
    		}
    	}
    	//sort(arr,arr+n,comp);
    	long long int count=0;
    	for(int i=2;i<=n*n;i++){
    		count+=abs((arr[i].x-arr[i-1].x))+abs((arr[i].y-arr[i-1].y));
    	}
    	printf("%lld\n",count );
    }

    return 0;
}
