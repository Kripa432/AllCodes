#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int sort(int *arr,int size){
	int i,temp,j,pos,min;
	for(i=0;i<size;i++){
		min=arr[i];
		for(j=i+1;j<size;j++)
			if(arr[j]<min){
				min=arr[j];
				pos=j;
			}
		if(arr[i]!=min){
			arr[pos]=arr[i];
			arr[i]=min;
		}
	}
}


int swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	return 0;
}
int main()
{
    int i,j,len,num,temp,t,res,min1,min2,pos1,pos2;
    long long int c;
    int arr[10001];
    int men[10001];
    scanf("%d",&t);
    while(t--)
    {	c=0;
    	scanf("%d",&num);
    	for(i=0;i<num;i++)
    		scanf(" %d",&arr[i]);
    	for(j=0;j<num; j++)
    		scanf(" %d",&men[j]);
    	
    	sort(arr,num);
    	sort(men,num);
    	
    	for(i=0;i<num;i++)
    		c+=arr[i] * men[i];

    	printf("%d\n",c );
    }

    return 0;
}
