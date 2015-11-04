#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define SIZE 10
#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    int i,j,c,len,num,temp,t,res,flag;
    char front[SIZE], back[SIZE], left[SIZE], right[SIZE], top[SIZE], bottom[SIZE];
    scanf("%d",&t);
    while(t--)
    {	flag=0;
    	scanf("%s %s %s %s %s %s",front, back, left, right, top , bottom);
    	
    	if(strcmp(top,left)==0 ||  strcmp(bottom,left)==0){
    		if(strcmp(left,front)==0 || strcmp(left,back)==0)
    			flag=1;
    	}
    	if(strcmp(top,right)==0 || strcmp(bottom,right)==0){
    		if(strcmp(right,front)==0 || strcmp(right,back)==0)
    			flag=1;
    	}
    	if(flag)
    		printf("YES\n" );
    	else
    		printf("NO\n");
    	
    }

    return 0;
}
