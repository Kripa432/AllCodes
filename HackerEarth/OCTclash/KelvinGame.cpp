#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {	int n;
    	scanf("%d",&n);
    	if(n%2==1){
    		printf("%d %d\n",n,n/2 );
    		for(int i=1;i<=n;i++)
    			if(i%2==0)
    				printf("-");
    			else
    				printf("+" );
    		printf("\n");
    	} 
    	else if(n%2==0){
    		printf("%d %d\n",n,n/2 );
    		for(int i=1;i<=n;i++)
    			if(i%2==1)
    				printf("-");
    			else
    				printf("+" );
    		printf("\n");
    	}

    }

    return 0;
}
