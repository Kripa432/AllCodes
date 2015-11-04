#include<bits/stdc++.h>
#define LL long long int 

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

using namespace std;

int main()
{
   	int arr[]={11,22,33,44,55,66,77,88,99,110};
   	printf("%d\n",binary(arr,0,9,200) );
    return 0;
}
