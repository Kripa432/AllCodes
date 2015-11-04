#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
/*
int max_heap(int arr[],int i,int n){
	int left=2*i;
	int right=left+1;
	int largest;
	if(i<n && arr[left]>arr[i])
		largest=left;
	else
		largest=i;
	if(i<n && arr[right]>arr[largest])
		largest=right;
	if(largest!=i){
		int temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		max_heap(arr,largest,n);
	}
	printf("max heap called\n");
	for(i=0;i<=n;i++) printf("%d ",arr[i] );

}
*/

int max_heap (int Arr[ ], int i, int N)
{
    int left = 2*i  ,largest   ;              //left child
    int right = 2*i +1;           //right child
    if(left<= N and Arr[left] > Arr[i] )
          largest = left;
    else
         largest = i;
    if(right <= N and Arr[right] > Arr[largest] )
        largest = right;
    if(largest != i )
    {
        int temp=Arr[i];
		Arr[i]=Arr[largest];
		Arr[largest]=temp;
        max_heap (Arr, largest,N);
    }
    
 }
int Build_maxHeap(int arr[],int n){

	for(int i=n/2;i>=0;i--)
   		max_heap(arr,i,n);
   	

}
int heap_sort(int arr[],int n){
	int heap_size=n;
	Build_maxHeap(arr,n);
	for(int i=n;i>=1;i--){
		int temp=arr[0];
		arr[0]=arr[heap_size];
		arr[heap_size]=temp;
		heap_size--;
		max_heap(arr,0,heap_size);
	}
}

int main()
{
    

 	int i,j,k,c,len,num,temp,t,flag,pos,n;
    
    scanf("%d",&n);
    int arr[n];
    
   	for(i=0;i<n;i++)
   		scanf("%d",&arr[i]);
   	heap_sort(arr,n-1);
   	for(i=0;i<n;i++){
   		if(i<2)
   			printf("-1\n");
   		else{
   			printf("%lld\n",(longlong )arr[i]*arr[i-1]*arr[i-2] );
   		}
   	}
//shankha.rockstar11@live.in
    return 0;
}
