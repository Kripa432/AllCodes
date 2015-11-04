#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int n;
   	scanf("%d",&n);
   	int arr[n];
   	for(int i=0;i<n;i++)
   		scanf("%d",&arr[i]);
   	int count=0;
   	int i=1,j=n-2;
   	while(i<j){
   		while(i+1<j && arr[i]!=arr[i-1])
   			i++;
   		while(i<j-1 && arr[j]!=arr[j+1])
   			j--;
   		
   		if(arr[i]==arr[j]){
   			printf("-1");
   			return 0;
   		}

   		count++;
   		swap(arr[i],arr[j]);
   		
   		if(i==j-1)
   			break;
   	}
   	cout<<count;


    return 0;
}
