#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

long long int dp[30];
long long int solve(char str[],int low,int high){
	//printf("low=%d  high=%d\n",low,high );
	if(low>=high){
		return 1;
	}
	else if(high-low==1){
		if(str[low]-'0'>0){
			int res=(str[low]-'0')*10+str[high]-'0';
			if(res<=26)
			return 2;
		}
		return 1;
	}
	else{
		int mid=(low+high)/2;
		long long int res1=solve(str,low,mid) * solve(str,mid+1,high);

		int res=(str[mid]-'0')*10+str[mid+1]-'0';
		if(res<=26 && res>0)
			return res1+1;
		else
			return res1;
	}
}

int main()
{
    long long int i,j,c,len,temp,t,res;
    long long int num;
    char str[30];
    while(1)
    {
    	scanf("%s",str);
    	if(str[0]=='0')
    		break;
    	else{
    			printf("%lld",solve(str,0,strlen(str)-1));
    	}
    	
    }

    return 0;
}
