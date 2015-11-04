#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int tt;
    scanf("%d",&tt);
    while(tt--)
    {	
    	int p,e,t;
    	scanf("%d %d %d",&p,&e,&t);
    	int prr[p+1],err[e+1],trr[t+1];
    	for(int	i=0;i<p;i++)
    		scanf("%d",&prr[i]);
    	for(int	i=0;i<e;i++)
    		scanf("%d",&err[i]);
    	for(int	i=0;i<t;i++)
    		scanf("%d",&trr[i]);
    	sort(prr,prr+p);
    	sort(err,err+e);
    	sort(trr,trr+t);
    	int m;
    	cin>>m;
    	while(m--){
    		int x,y,flag=0;
    		cin>>x>>y;
    		if(x<=y){
    			for(int i=0;i<p;i++)
    				if(prr[i]%x==0){
    					int mul=prr[i]/x;
    					for(int j=0;j<e;j++)
    						for(int k=0;k<t;k++)
    							if(err[j]%trr[k]==0 && err[j]/trr[k]==mul*y){
    								flag=1;
    								break;

    							}
    						if(flag)
    							break;
    				}
    			if(flag)
    				printf("Yes\n");
    			else
    				printf("No\n");
    		}
    	}    	
    }

    return 0;
}
