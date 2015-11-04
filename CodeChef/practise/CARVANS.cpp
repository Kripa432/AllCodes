#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n;
    	cin>>n;
    	int small,ele;
    	scanf("%d",&small);
    	int count=1;
    	for(int i=1;i<n;i++){
    		scanf("%d",&ele);
    		if(ele<=small){
    			small=ele;
    			count++;
    		}
    	}
    	printf("%d\n",count );

    }

    return 0;
}
