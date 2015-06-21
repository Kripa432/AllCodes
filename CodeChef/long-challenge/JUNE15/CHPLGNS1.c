#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
//binary search copied from internet
int binarySearch(int arr[], int key,int len) {
      int first = 0;
      int last = len-1;
      while (first <= last) {
         int mid = (first+last) / 2;
         if (key > arr[mid]) {
            first = mid + 1;
         }
         else if (key < arr[mid]) {
            last = mid - 1;
         }
         else {
            return mid;
         }
      }
      return -1;
 }
//QuickSort copied from internet
int quickSort(int arr[], int left, int right) {
         int i = left;
         int j = right;
         int temp;
         int pivot = arr[(left+right)/2];
         while (i <= j) {
            while (arr[i] < pivot) 
               i++;
            while (arr[j] > pivot)
               j--;
            if (i <= j) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
               i++;
               j--;
            }
         }
         if (left < j)
            quickSort(arr, left, j);
         if (i < right)
            quickSort(arr, i, right);
}

int main()
{
    int i,j,k,c,len,num,temp,t,x,y,min,m,n;
    int arr[100001];
    int copy[100001];
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&num);
    	for(i=0;i<num;i++){
    		scanf("%d",&m);

    		scanf("%d %d",&x,&y);
    		min=x;
    		for(j=1;j<m;j++){
    			scanf("%d %d",&x,&y);
    			min=min(x,min);
    		}
    		copy[i]=arr[i]=min;
    		
    	}
    	quickSort(copy,0,num-1);


    	for(i=0;i<num;i++){
    		printf("%d ",num-1-binarySearch(copy,arr[i],num) );
    	}
    	printf("\n");

    }

    return 0;
}
