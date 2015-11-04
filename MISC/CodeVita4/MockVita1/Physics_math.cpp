#include<bits/stdc++.h>
int main()
{
    

 	int i,j,k,c,len,num,temp,t,flag,pos;
    
    scanf("%d",&t);
    while(t--)
    {
    	bool arr[100001]={0};
    	bool brr[100001]={0};
    	do{
    		scanf("%d",&temp);
    		arr[temp]=1;
    		temp%=10001;
    	}while(getchar()!='\n');
    	
    	do{
    		scanf("%d",&temp);
    		temp%=10001;
    		brr[temp]=1;
    	}
		while(getchar()!='\n');
    	/*
    	int flag=1;
    	for(i=0;i<1001;i++)
    		if(arr[i]==1 || brr[i]==1){
    			printf("%d ",i );
    			flag=0;
    		}
    	if(flag){
    		printf("Empty List");
    	}
    	flag=1;
    	printf("\n");
    	for(i=0;i<1001;i++)
    		if(arr[i]==1 && brr[i]==1){
    			printf("%d ",i );
    			flag=0;
    		}
    	if(flag){
    		printf("Empty List");
    	}
    	printf("\n");
    	flag=1;
    	for(i=0;i<1001;i++)
    		if(arr[i]==1 && brr[i]!=1){
    			printf("%d ",i );
    			flag=0;
    		}
    	if(flag){
    		printf("Empty List");
    		
    	}
    	flag=1;
    	printf("\n");
    	*/
    }


    return 0;
}
