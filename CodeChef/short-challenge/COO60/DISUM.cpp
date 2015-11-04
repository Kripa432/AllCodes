#include<bits/stdc++.h>
//#include<algorithm>
#include<stdio.h>
using namespace std;

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
    
	int i,j,k,c,len,num,temp,t,d,n;
    int arr[100002];
    long long int sum=0;
    
    scanf("%d",&t);
    while(t--)
    {	sum=0;
    	scanf("%d %d",&n,&d);
    	for(i=0;i<n;i++)
    		scanf("%d",&arr[i]);
    	quickSort(arr,0,n-1);
    	for(i=n-1;i>0;i--){
    		if(arr[i]-arr[i-1]<d){
    		//	printf("pair--->%d %d\n",arr[i],arr[i-1] );
    			sum+=arr[i]+arr[i-1];
    			i--;
    		}
    	}
    	printf("%lld\n",sum );

    }

    return 0;
}
