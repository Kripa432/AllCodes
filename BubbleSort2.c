#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);

    for(i=1;i<n;i++){
    	j=0;
    	while(j<n-i){
    		if(arr[j]>arr[j+1]){
    			int temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
    		}
    		j++;
    	}
    }

    for(i=0;i<n;i++)
    	printf("%d ",arr[i] );

    return 0;
}
