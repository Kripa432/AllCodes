#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))


int main()
{
    int i,j,c,len,num,temp,t,res,m,n,sum,x,y,min,mx,ele;
    
    scanf("%d",&t);
    while(t--)
    {	bool arr[104]={false};

    	scanf("%d %d %d",&m,&x,&y);
   		
   		for(i=0;i<m;i++){
   			
   			scanf("%d",&ele);
   			j=max(1,ele-x*y);
   			mx=min(100,ele+x*y);
   			//printf("min=%d max=%d\n",j,mx );
   			
   			for(;j<=mx;j++)
   				arr[j]=true;
   		} 
   		sum=0;
   		for(i=1;i<=100;i++){
   			if(!arr[i])
   				sum++;
   			//printf("%d ",arr[i] );
   		}
   		printf("%d\n",sum );
   

    }

    return 0;
}
