#include<stdio.h>
#include<stdbool.h>

int main()
{
    int i,j,len,n,t,res,k,temp,flag;
    long long int sum;
    int arr[]={7,10,1,2,4,9,8,5,6,0};
    len=10;
    for(i=0;i<len;i++){
    	temp=arr[i];
    	for(j=i-1;j>0;j--)
    		if(temp<arr[j]){
    			arr[j+1]=arr[j];
    		}else{
    			arr[j]=temp;
    			break;
    		}
    	h3aJAqg





    	for(k=0;k<len;k++)
    	printf("%d ",arr[k] );
    	printf("\n");
    }


    for(i=0;i<len;i++)
    	printf("%d ",arr[i] );


    scanf("%d",&t);
    while(t--)
    {

    }

    return 0;
}
