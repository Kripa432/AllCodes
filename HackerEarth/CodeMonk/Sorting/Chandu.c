#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int quicksort(int *arr,int low,int high){
	//printf("quick sort in progress low=%d high=%d\n",low,high );
	int i=low,j=high,pivot=arr[(low+high)/2];
	
	while(i<=j){
		while(arr[i]>pivot)
			i++;
		while(arr[j]<pivot)
			j--;
		if(i<=j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	if(i<high)
		quicksort(arr,i,high);
	if(j>low)
		quicksort(arr,low,j);
}

int main()
{
    int i,j,c,len,num,temp,t,res;
    int arr[100001];
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&num);
    	for(i=0;i<num;i++)
    		scanf("%d",&arr[i]);
    	quicksort(arr,0,num-1);
    	for(i=0;i<num;i++)
    		printf("%d ",arr[i] );
    	printf("\n");
    }

    return 0;
}
