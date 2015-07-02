#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int Qsort(int *arr,int low,int high){
	int pivot=(arr[low]+arr[high])/2;
	int i=low, j=high;
	int temp;
	while(i<=j){
		while(arr[i]>pivot)
			i++;
		while(arr[j]<pivot)
			j--;
		if(i<=j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	if(i<high)
		Qsort(arr,i,high);
	if(j>low)
		Qsort(arr,low,j);
		

}

int arr[1001];
int main()
{	
	
    int i,j,k,c,len,num,temp,t,res,need;
    long long int sum;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {	sum=0;
    	scanf("%d %d",&need,&num);
    	for(i=0;i<num;i++){
    		scanf("%d",&arr[i]);
    		sum+=arr[i];
    	} 
    	
    	if(sum<need){
    		printf("Scenario #%d:\nimpossible\n",k );
    		continue;
    	}

    	Qsort(arr,0,num-1);
    	for(i=0;i<num;i++){
    		need-=arr[i];
    		if(need<=0){
    			printf("Scenario #%d:\n%d\n",k,i+1 );
    			break;
    		}
    	}
    	printf("\n");
    	
    }

    return 0;
}
