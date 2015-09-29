#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t,j;
    int arr[]={9,3,4,5,3,7,9,8,3,1,-2};
    int size=sizeof(arr)/sizeof(int);

    for(int i=1;i<size;i++){
    	int cur=arr[i];
    	
    	for(j=i-1;j>=0;j--){
    	
    	
    		if(arr[j]>cur){
    			arr[j+1]=arr[j];
    		}
    		else{
    			break;
    		}
    	
    		
    	}
    	
    	arr[j+1]=cur;
    
    }

    for(int i=0; i<size;i++)
    	printf("%d ",arr[i] );





    return 0;
}
