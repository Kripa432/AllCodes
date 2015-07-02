#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int stack[1001];

int main()
{
    int i,j,c,len,num,temp,top,k,t,res;
    
    scanf("%d",&num);
    while(num!=0)
    {	int flag=1;
    	
    	j=1;top=-1;
    	for(i=0;i<num;i++){
    		scanf("%d",&temp);
    		if(temp==j)
    			j++;
    		else{
    			while(top>=0 && stack[top]==j){
    				top--;
    				j++;
    			}
    			if(temp==j)
    				j++;
    			else
    				stack[++top]=temp;
    		}
    		
    	}
    	while(stack[top]==j){
    		j++;
    		top--;
    	}
    	
    	//printf("top=%d and j=%d\n",top,j );
    	if(top==-1)
    		printf("yes\n");
    	else
    		printf("no\n");

    	scanf("%d",&num);
    }

    return 0;
}
