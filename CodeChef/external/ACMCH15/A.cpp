#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n,k,ele,count=0;
    	scanf("%d %d",&n,&k);
    	for(int i=0;i<n;i++){
    		scanf("%d",&ele);
    		if((ele+k)%7==0)
    			count++;
    	}
    	printf("%d\n",count );
    }

    return 0;
}
