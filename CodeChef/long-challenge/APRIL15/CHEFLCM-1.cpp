#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<ctype.h>
#include<math.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    using namespace std;

 	long long int t,n,sum,i,j,k,temp;
    scanf("%lld",&t);
    while(t--)
    {		sum=1;
    		scanf("%lld",&n);
    		for(i=2;i<=n;i++){
    			if(n%i==0){
    				sum+=i;
    				n/=i;
    			}
    		}
    		printf("%lld\n",sum );
    }

    return 0;
}
