#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    int t;
    long long int i,j,k,l,Smax,sum,res;
    char ch;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {	int count=sum=i=0;
    	scanf("%lld",&Smax);
    	int arr[Smax+1];
    	getchar();
    	while(1){
    		ch=getchar();
    		if(ch>=48 && ch<58)
    			arr[i++]=ch-48;
    		else
    			break;

    	}
    	//printing arrary
    //	for(i=0;i<=Smax;i++)
    //		printf("_%d_",arr[i] );


    	for(i=0;i<=Smax;i++){
    		if(i<=sum){

    		}
    		else{
    			count++;
    			sum++;
    		}
    		sum+=arr[i];
    	}
    	printf("Case #%lld: %lld\n",l,count);

    }

    return 0;
}
