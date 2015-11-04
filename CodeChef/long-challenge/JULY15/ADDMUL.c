#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define MOD 1000000007
#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
long long int arr[100002]; 
long long int sum[100002];
int main()
{
    long long int i,j,c,len,num,temp,t,res,q,n,v,x,y,diff;
    arr[0]=0;
    scanf("%lld %lld",&n,&q);
    for(i=1;i<=n;i++){
    	scanf("%lld",&arr[i]);
        sum[i]=arr[i]+sum[i-1];
        sum[i]%=MOD;
    }
    while(q--)
    {
    	scanf("%lld",&t);
    	if(t==1){
    		scanf("%lld %lld %lld",&x,&y,&v);
    		for(i=x;i<=y;i++){
    			arr[i]+=v;
    			arr[i]%=MOD;
                sum[i]+=arr[i]+sum[i-1];
                sum[i]%=MOD;
    		}
            diff=v*(y-x+1);
            for(;i<=n;i++){
                sum[i]+=sum[i-1]+arr[i];
                sum[i]%=MOD;
            }

    	}else if(t==2){
    		scanf("%lld %lld %lld",&x,&y,&v);
    		for(i=x;i<=y;i++){
    			arr[i]*=v;
    			arr[i]%=MOD;
                sum[i]+=arr[i]+sum[i-1];
                sum[i]%=MOD;
    		}
            for(;i<=n;i++){
                sum[i]+=sum[i-1]+arr[i];
                sum[i]%=MOD;
            }
    	}else if(t==3){
    		scanf("%lld %lld %lld",&x,&y,&v);
    		for(i=x;i<=y;i++){
    			arr[i]=v;
    			arr[i]%=MOD;
                sum[i]+=arr[i]+sum[i-1];
                sum[i]%=MOD;
    		}
            for(;i<=n;i++){
                sum[i]+=sum[i-1]+arr[i];
                sum[i]%=MOD;
            }
    	}else{
    		scanf("%lld %lld",&x,&y);
    		
    		printf("%lld\n",sum[y]-sum[x-1] );
    	}
    }

    return 0;
}
