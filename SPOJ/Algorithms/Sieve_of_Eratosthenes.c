#include<stdio.h>
#define SIZE 2000001
int main()
{
    long long int i,j,num;
    int arr[SIZE]={0};
    for(i=2;i*i<SIZE;i++){
    	if(arr[i]==0){
    		
    		for(j=2;j*i<SIZE;j++)
    			arr[j*i]=1;
    	}
    }
    for(i=2;i<SIZE;i++)
    	if(!arr[i])
    		printf("%d ",i );
    return 0;
}
