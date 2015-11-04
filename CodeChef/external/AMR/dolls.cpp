#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n,ele;
    	cin>>n;
    	int arr[1001]={0};
    	for(int i=0;i<n;i++){
    		cin>>ele;
    		arr[ele]++;
    	}
    	int i;
    	for( i=0;i<1001;i++){
    		if(arr[i]>1)
    			break;
    	}
    	if(i==1001){
    		printf("YES\n");
    	}else{
    		printf("NO\n");
    	}
    }

    return 0;
}
