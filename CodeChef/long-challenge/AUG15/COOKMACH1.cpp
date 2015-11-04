#include<bits/stdc++.h>

using namespace std;

int bits(int num){
	int count=0;
	while(num){
		if(num&1)
			count++;
		num=num>>1;
	}
	return count;
}

int main()
{
   	int t,a,b,c,count;
    scanf("%d",&t);
    while(t--)
    {	count=0;
    	scanf("%d %d",&a,&b);
    	c=bits(a);

    	if(a==b){
    		printf("0\n");
    		continue;
    	}else{
    		while(c!=1){
    			if(a&1)
    				c--;
    			a=a>>1;
    			count++;
    		}
    		if(a==b)
    			printf("%d\n",count );
    		else{
    			if(a<b)
    				printf("%d\n",count+(int)(log(b/a)/log(2)) );
    			else
    				printf("%d\n",count+(int)(log(a/b)/log(2)) );
    		}
    	}
    	

    }

    return 0;
}
