#include<bits/stdc++.h>

using namespace std;

int main()
{
   	
   	long long int i,j,k,c,len,num,temp,t,flag,pos;
   // for(i=0;i<100;i++)
    //	printf("%d^%d =%d\n",i,i+1,i^(i+1) );
    scanf("%lld",&t);
    while(t--)
    {
    	scanf("%lld",&num);
    	//if(num==1){
    	//	printf("0\n");
    	//	continue;
    //	}
    	if(num==1){
    		printf("2\n");
    		continue;
    	}
    	flag=1;
    	temp=num;
    	while(num){
    		if(num&1)
    			;
    		else{
    			flag=0;
    			break;
    		}
    		num=num>>1;
    	}

    	if(flag)
    		printf("%lld\n",temp/2 );
    	else
    		printf("-1\n");

    }

    return 0;
}
