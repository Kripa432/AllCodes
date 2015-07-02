#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))


int sort(int arr[],int low,int high){
	int temp,i,j,pos,min;
	for(i=low;i<2;i++){
		min=arr[i];
		for(j=i+1;j<high;j++)
			if(arr[j]<min){
				min=arr[j];
				pos=j;
			}
		if(min!=arr[i]){
			arr[pos]=arr[i];
			arr[i]=min;
			
		}
	}
}
int arr[20],drr[20];

int main()
{
    int i,j,c,len,num,temp,t,res,a,d;
    
    scanf("%d %d",&a,&d);
    while(a!=0 && d!=0)
    {
    	
    	for(i=0;i<a;i++)
    		scanf("%d",&arr[i]);
    	for(i=0;i<d;i++)
    		scanf("%d",&drr[i]);
    	sort(arr,0,a);
    	sort(drr,0,d);
    	if(arr[0]<drr[1])
    		printf("Y\n");
    	else
    		printf("N\n");
    	scanf("%d %d",&a,&d);
    }

    return 0;
}
