#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
int arr[10000000]={0};

int f(int num){
	if(num==0)
		return 0;
	else{
		 if(arr[num]==0)
		 	arr[num]=max(num,f(num/2)+f(num/3)+f(num/4));
	}
	return arr[num];
}

int main()
{
    int i,j,c,len,num,temp,t,res;
    
    while(scanf("%d",&num)!=EOF) 
    {	
    	printf("%d\n",f(num) );
    }

    return 0;
}
