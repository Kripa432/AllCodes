#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    int n,m,p,q,s;
    while(t--)
    {
    	scanf("%d %d %d %d %d",&n,&m,&s,&p,&q);
    	int arr[s],brr[s];
    	
    	int step=1,tm=1;
    	int top=0;
    	while(step<=m && tm<=s){
    		tm++;
    		step+=p;
    		arr[top++]=step;
    		
    	}
    	step=p-(step-m)+1;
    	printf("step_out=%d\n",step );

    	while(tm<=s){
    		arr[top++]=step;
    		step+=p;
    		if(step>n){
    			step=step%m+1;
    		}
    		tm++;
    	}
    	for(int i=0;i<top;i++)
    		printf("%d\n",arr[i] );

    	step=1,tm=1;
    	top=0;
    	while(step<=m && tm<=s){
    		tm++;
    		step+=q;
    		arr[top++]=step;
    		
    	}
    	step=q-(step-m)+1;
    	printf("step_out=%d\n",step );

    	while(tm<=s){
    		arr[top++]=step;
    		step+=q;
    		if(step>n){
    			step=step%m+1;
    		}
    		tm++;
    	}
    	for(int i=0;i<top;i++)
    		printf("%d\n",arr[i] );

    }

    return 0;
}
