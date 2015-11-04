#include<bits/stdc++.h>

using namespace std;

int count_one (int n)
{		int count=0;
        while( n )
        {
        n = n&(n-1);
           count++;
        }
        return count;
}

int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos,m,p;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d",&m,&p);
    	int count=0;
    	while(m || p){
    		if((m&1)^(p&1))
    			count++;
    		m=m>>1;
    		p=p>>1;
    	}
    	printf("%d\n",count+(int)count_one( max(m,p)));
    }

    return 0;
}
