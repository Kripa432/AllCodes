#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
int main()
{
   	int i,j,k,c,len,n,m,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d %d",&n,&m,&k);
    	int arr[n][m]={0};
    	int keys[n];
    	int chest[m];
    	int value[m];
    	int sum[n]={0};
    	for(int i=0;i<n;i++)
    		scanf("%d",&keys[i]);
    	for(int i=0;i<m;i++)
    		scanf("%d",&chest[i]);
    	for(int i=0;i<m;i++)
    		scanf("%d",&value[i]);
    	
    	for(int i=0;i<n;i++){
    		int sums=0;
    		for(int j=0;j<m;j++){
    			//printf("key=%d chest=%d gcd=%d\n",keys[i],chest[j],gcd(keys[i],chest[j]) );
    			
    			if(gcd(keys[i],chest[j])!=1){
    				arr[i][j]=value[j];
    				sums+=value[j];

    			}else
    				arr[i][j]=0;
    		}
    		sum[i]=sums;

    	}
    	int sums=0;
    	/*
    	printf("\n");
			for(int its=0;its<n;its++){
				for(int jts=0;jts<m;jts++)
					printf("%d ",arr[its][jts]);
				printf("\n");
			}
		printf("\n");
		*/

    	for(int i=0;i<k;i++){
    		int maxi=sum[0];
    		int pos=0;
    		for(int it=1;it<n;it++){
    			if(sum[it]>=maxi){
    				maxi=sum[it];
    				pos=it;
    			}
    		}
    		j=pos;
    		sums+=sum[j];
    		//sum[j]=0;
    		for(int l=0;l<m;l++){
    			if(arr[j][l]){
    				for(int b=0;b<n;b++)
    					if(arr[b][l]){
    						sum[b]-=arr[b][l];
    						arr[b][l]=0;
    						//printf("sum[b]=%d\n",sum[b] );
    					}
    				//sum[l]-=arr[j][l];
    				//arr[j][l]=0;
    			}
			}
			//print table
		/*	printf("\n");
			for(int its=0;its<n;its++){
				for(int jts=0;jts<m;jts++)
					printf("%d ",arr[its][jts]);
				printf("\n");
			}
			printf("\n");
    	*/
    	}
    	printf("%d\n",sums );

    }

    return 0;
}
