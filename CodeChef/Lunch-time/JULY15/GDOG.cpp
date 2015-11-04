#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int main()
{
    

 	int i,j,k,c,len,num,temp,t,flag,pos;
    
    scanf("%d",&t);
    while(t--)
    {	int res=0;
    	scanf("%d %d",&num,&k);
    	for(i=1;i<=k;i++)
    		if((num%i) >res)
    			res=(num%i);
    	printf("%d\n",res );
    }

    return 0;
}
