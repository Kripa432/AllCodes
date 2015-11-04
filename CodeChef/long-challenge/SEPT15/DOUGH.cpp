#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n,m,ele,c1=0,c2=0;
    	scanf("%d %d",&n,&m);
    	for(int i=0;i<m;i++){
    		scanf("%d",&ele);
    		if(ele==1)
    			c1++;
    		else
    			c2++;
    	}
    	if(c1>=m/2){

    		printf("%d\n",(int)((2*(c2)+(c1-c2))/2) );
    	}
    	else{
    		printf("%d\n",(m-c1-1));
    	}
   
    }
    return 0;
}
