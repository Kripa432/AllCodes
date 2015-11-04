#include<bits/stdc++.h>

using namespace std;

int bits(int num){
	int c=0;
	while(num){
		if(num&1)
			c++;
		num=num>>1;
	}
	return c;
}

int main()
{
   	int i,j,k,c1,c2,c,len,num1,num2,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {	c=0;
    	scanf("%d %d",&num1,&num2);
    	if(num1>num2){
    		temp=num1;
    		num1=num2;
    		num2=temp;
    	}
    	c1=bits(num1);
    	if(c1==1){
    		num2=num2/num1;
    		c=log(num2)/log(2);
    	}else{
    		while(num1){
    			if(c1==1)
    				break;
    			if(num1&1){
    				c1--;
    			}
    			c++;
    			num1=num1>>1;
    		}



    		num2=num2/num1;
    		c+=(log(num2)/log(2));

    	}
    	printf("%d\n",c );

    }

    return 0;
}
