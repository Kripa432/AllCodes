#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t,i,n,q,opp,res;
    scanf("%d",&t);
    while(t--)
    {	int g;
    	scanf("%d",&g);
    	while(g--){
    		scanf("%d %d %d",&i,&n,&q);
    		opp=(n+1)/2;
    		if(i==q)
    			res=n-opp;
    		else
    			res=opp;
    		cout<<res<<"\n";
    	}
    }

    return 0;
}
