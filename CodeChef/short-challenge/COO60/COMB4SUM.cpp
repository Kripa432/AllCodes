#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>
#include<math.h>
#define abs(x) ((x) >= 0 ? (x) : -(x))

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
    using namespace std;

 	int i,j,k,l,c,len,num,temp,t,n,a,b,d;
    int arr[1002];
    long long int sum;
    scanf("%d",&t);
    while(t--)
    {	sum=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    		scanf("%d",&arr[i]);

    
    quickSort(arr,0,n-1);
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++)
    		for(k=j+1;k<n;k++)
    			for(l=k+1;l<n;l++){
    				a=arr[i];
    				b=arr[j];
    				c=arr[k];
    				d=arr[l];
    				sum=sum+2*(abs(a+b-c-d) + abs(a+c-b-d) + abs(a+d-b-c));
    			}
    }
    printf("%lld\n",sum );
	}
    return 0;
}
