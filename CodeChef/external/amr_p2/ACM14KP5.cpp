#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t=0,tf;
    scanf("%d",&tf);
    while(t++<tf)
    {	
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		scanf("%d",arr+i);
    	sort(arr,arr+n);
    	reverse(arr,arr+n);
    	printf("Case %d: %d\n",t,arr[0]+arr[1]+arr[2] );
    }

    return 0;
}
