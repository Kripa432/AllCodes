#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))

#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
/*
int max(int a,int b){
	if(a<b)
		return b;
	else
		return a;
}
int min(int a,int b){
	if(a<b)
		return a;
	else
		return b;
}
*/
int main()
{
    int i,j,x,y,c,temp,t,n;
    int M[100001][6];
    scanf("%d",&t);
    while(t--)
    {	
    	scanf("%d",&n);
    	for(i=0;i<n;i++){
    		scanf("%d",&M[i][0]);
    		
    		temp=M[i][0];
    		scanf("%d %d",&M[i][1],&M[i][2]);
    	//	M[i][3]=M[i][1];
    	//	M[i][4]=M[i][2];
    		for(j=1;j<temp;j++){
    			scanf("%d %d",&x,&y );
    				
    					M[i][1]=min(M[i][1],x);
    				//	M[i][2]=min(M[i][2],y);
    				//	M[i][3]=max(M[i][3],x);
    				//	M[i][4]=max(M[i][4],y);
    		}
    	}
    	c=0;
    	for(i=0;i<n;i++){
    		for(j=0;j<n;j++)
    	}
/*
    	for(i=0;i<n;i++){
    		c=0;
    		for(j=0;j<n;j++)
    		if (i==j)
    			continue;
    		else{
    			if(M[j][1]>M[i][1] && M[j][2]>M[i][2] && M[j][3]<M[i][3] && M[j][4]<M[i][4])
    				c++;
       		}
    		printf("%d ",c );
    	}
    	printf("\n");
*/
    }

    return 0;
}
