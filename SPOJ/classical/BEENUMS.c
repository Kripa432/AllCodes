#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
int arr[10000000];
int binarySearch(int arr[],int top,int num){
	int low=0,high=top-1,mid=(low+high)/2;
	while(low<=high){
		if(arr[mid]==num)
			return 1;
		else if(arr[mid]<num)
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	return 0;
}
int main()
{	
    int i,j,c,len,num,temp,t,res,top=0;
    int d=0;
	for(i=1;i<=1000000000;i+=d){
		arr[top++]=i;
		d+=6;
	}    
	
    scanf("%d",&num);	
    while(num!=-1)
    {
    	res=binarySearch(arr,top,num);
    	if(res==1)
    		printf("Y\n");
    	else
    		printf("N\n");
    	scanf("%d",&num);
    }

    return 0;
}
