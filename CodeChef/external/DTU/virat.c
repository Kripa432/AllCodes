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
{	int m[1000000000];
    int n;
    long long int prod,min;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    min=arr[0];
    long long int size=pow(2,n);
    for(i=1;i<size;i++){
    	int k=i;
    	int l=0;
    	prod=1;
    	while(k>0){
    	if(k&1)
    		prod*=arr[l];
    	l++;
    	k=k>>1;
    	}
    	if(prod<min)
    		min=prod;
    }
    printf("%lld\n",min );

    return 0;
}
