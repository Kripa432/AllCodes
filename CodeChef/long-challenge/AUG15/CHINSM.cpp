#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,n,t,flag,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    bool brr[n][n];
    for(i=0;i<n;i++)
    	for(j=0;j<n;j++)
    		brr[i][j]=0;
    for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
   
    for(i=0;i<n;i++){	//length of subset
    	for(j=0;i+j+1<n;j++){	//staring index
	    		
	    		if(arr[j]%arr[i+1+j]==k){	
	    			brr[j][i+j+1]=1;
	    			/*
	    			for(int l=j-1;l>=0;l--)
	    				brr[l][i+j+1]=1;
	    			
	    			for(int l=i+j+1;l<n;l++)
	    				brr[j][l]=1;
	    			*/
	    			//printf("bad pair %d %d\n",arr[j],arr[j+i+1] );
	    		
	    		}
    		
    	}
    }
    for(i=0;i<n;i++){
    	for(j=1;j<n;j++)
    		if(brr[i][j-1])
    			brr[i][j]=1;
    }

    for(i=n-2;i>=0;i--){
    	for(j=n-1;j>=0;j--)
    		if(brr[i+1][j])
    			brr[i][j]=1;
    }
/*
  	for(i=0;i<n;i++){
   		for(j=0;j<n;j++)
   			printf("%d ",brr[i][j] );
   		

   		printf("\n");
   	}

*/
    for(i=0;i<n;i++){	//length of subset
    	for(j=i+1;j<n;j++){
    		//printf("subset %d %d\n",i,j);
    		if(!brr[i][j])
    			count++;
    		//else
    		//	printf("bad pair\n");
    	}
   	}
   	
 
    
    printf("%d",count +n);

    return 0;
    	
}
