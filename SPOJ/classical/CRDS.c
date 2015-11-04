#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define MOD 1000007
int arr[1000001];
int main()
{
    int i,j,c,len,num,temp,t,res,d;
    int sum;
    d=2;
    arr[0]=0;
    for(i=1;i<1000001;i++){
    	arr[i]=arr[i-1]+d;
    	arr[i]%=MOD;
    	d+=3;
    }
    scanf("%d",&t);
    while(t--)
    {
    	sum=0;d=2;
    	scanf("%d",&num);
    	
    	printf("%d\n",arr[num] );
    }

    return 0;
}
