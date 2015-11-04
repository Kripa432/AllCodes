#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
int arr[5002];
int sum[5002];
int jug[5002][4]={0};
int main()
{
    int i,j,k,m,n,c,count,len,num,temp,t,res,maxi,l,r,local_min;
    
    scanf("%d",&t);
    while(t--)
    {	
    	count=0;
    	scanf("%d %d %d",&n,&k,&m);
    	for(i=1;i<=n;i++){
    		scanf("%d",&arr[i]);
    		count+=arr[i];
    	}
    	maxi=count;
    	for(i=0;i<m;i++){
    		scanf("%d %d %d",&jug[i][0],&jug[i][1],&jug[i][2]);
    		if(jug[i][2]<=k){
    			
    			temp=local_min=0;
    			for(j=jug[i][0];j<=jug[i][1];j++){
    				if(arr[j]<local_min)
    					local_min=arr[j];
    					temp=j;
    				}
    			jug[i][3]=j;
    			
	  		}
	  		else
	  			jug[i][3]=1000000007;

    	}
    	while(k>0){
    		temp=0;
    		local_min=1000000007;
    		for(i=0;i<m;i++)
    			if(jug[i][3]/jug[i][2]<local_min{
    				temp=i;
    				local_min=jug[i][3]/jug[i][2];
    			}
    		k=k-jug[temp][2];
    		jug[temp][3]=0;
    	}
    	printf("%d\n",maxi );
    }

    return 0;
}
