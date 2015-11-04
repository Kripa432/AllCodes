#include<bits/stdc++.h>

using namespace std;

int arr[1002];

int fun(int arr[],int i,int j){

	if(i==j)
		return 0;
	int k,min=1000000007,count;
	for(k=i;k<j;k++){
		count=fun(arr,i,k)+fun(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
		if(count<min)
			min=count;
	}
	return min;
}

int main()
{
   	int arr[]={1,2,3,4};
   	printf("hello %d",fun(arr,1,4));
    return 0;
}
