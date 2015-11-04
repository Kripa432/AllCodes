#include<bits/stdc++.h>

using namespace std;
int main()
{
   	int c,len,num,temp,t,flag,pos,h,x,y;
    scanf("%d",&t);
    while(t--)
    {	
    	scanf("%d %d",&num,&h);
    	int arr[num]={0};
    	for(int i=0;i<num;i++){
    		scanf("%d %d",&x,&y);
    		for(int j=x;j<=y;j++)
    			arr[j]++;
    	}
    	for(int i=1;i<num;i++)
    		arr[i]+=arr[i-1];
        for(int i=0;i<num;i++){
            printf("____%d\n",arr[i] );
        }

    	int min=0;
    	for(int i=0;i<num-(h-1);i++){
    		if(i==0){
    			if(arr[i+h-1]>min)
    				min=arr[i+h-1];
    		}else{
    			if(arr[i+(h-1)]-arr[i-1]>min)
    				min=arr[i+h-1]-arr[i-1];
    		}
    	}
    	printf("%d\n",num*h-min );
    }

    return 0;
}