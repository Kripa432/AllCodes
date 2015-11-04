#include <stdio.h>

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
int binary(int arr[],int low,int high,int ele){
	int i=low,j=high;
	int mid=(low+high)/2;
	while(i<=j){
		if(arr[mid]==ele)
			return 1;
		else if(arr[mid]>ele)
			high=mid-1;
		else
			low=mid+1;
		mid=(low+high)/2;
	}
	return 0;
	
}


int main()
{
    int i,j,k,l,m,n,c=0,ele,flag;
    int arr[101];
 	char ch;
 	scanf("%d",&m);
    for(i=0;i<m;i++)
    	scanf("%d",&arr[i]);
    quicksort(arr,0,m-1);
   // printf("hello\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	flag=1;
    	do{
    	//printf("Hello\n");
    	scanf("%d",&ele);
    	//printf("hello\n");
    	if(!binary(arr,0,m-1,ele))
    		flag=0;
    	printf("Helo\n");
    	printf("%d\n",ele );
    	//ch=getchar();
    	printf("character is(%c)\n",ch );
    	}while(ch==' ' || ch=='\n');	
    	if(flag)
    		c++;
    }
    printf("%d",c);
    return 0;
}
