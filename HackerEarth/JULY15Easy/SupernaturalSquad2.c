#include <stdio.h>

int main()
{
    int t,i,j,k,c,num,temp,m;
    scanf("%d",&t);
    while(t--){
    	c=1;
    	scanf("%d %d",&num,&k);
    	while(num>0){
    		temp=num-k;
    		if(temp>0){
    			m=(temp-(num+1)/2);
    			printf("diff=%d   ",m );
    			c+=m;
    			c++;

    		}
    		num=num-k;
    		
    	}
    	printf("%d\n",c);
    }
    return 0;
}
