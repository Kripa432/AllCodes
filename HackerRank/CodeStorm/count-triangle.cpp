#include<bits/stdc++.h>
#define LL long long int 

using namespace std;

int binary(int arr[],int low,int high,int value){     //this function returns inserting index of new value
	int mid=(low+high)/2;

	while(low<=high){
		if(arr[mid]==value){
			return mid;				//arr[mid]==value
		}
		else if(arr[mid]<value)
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	return mid;				//arr[mid]<value
}

int main()
{
   	int n;
   	scanf("%d",&n);
   	int arr[n],sq[n];
   	for(int i=0;i<n;i++){
   		scanf("%d",&arr[i]);
   		sq[i]=arr[i]*arr[i];
   	}
   	int acute=0,obtuse=0,right=0;
   	for(int i=0;i<n-1;i++)
   		for(int j=i+1;j<n;j++){			//i+j<k  obtuse
   			int pos=binary(arr,0,n,arr[i]+arr[j]);			
   			if(arr[pos]==arr[i]+arr[j])
   				pos--;
   			if(pos<=j)										
   				continue;

   			int sqpos=binary(sq,0,n,sq[i]+sq[j]);
   			if(sqpos>pos)
   				continue;
   			if(sq[sqpos]==sq[i]+sq[j]){
   				right++;
   				obtuse+=pos-sqpos;
   				acute+=sqpos-(j+1);
   			}
   			else{
   				obtuse+=pos-sqpos;
   				acute+=sqpos-j;
   			}
   			//printf("i=%d j=%d pos=%d sqpos=%d %d %d %d\n",i,j,pos,sqpos,acute,right,obtuse );

   		}
   			
   	printf("%d %d %d\n",acute,right,obtuse );

    return 0;
}
