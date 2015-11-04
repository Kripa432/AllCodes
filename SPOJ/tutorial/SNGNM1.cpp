#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
   	ll t;
    scanf("%lld",&t);
    while(t--)
    {
    	ll num,cpy,digit;
    	scanf("%lld",&num);
    	cpy=num;
    	while(cpy){
    		digit=cpy%10;

    		if(digit!=0 && (num%digit)!=0)
    			break;
    		cpy/=10;
    			
    		
    	}	
    	if(cpy==0 && num!=0)
    		printf("yes\n");
    	else
    		printf("no\n");
    }

    return 0;
}
