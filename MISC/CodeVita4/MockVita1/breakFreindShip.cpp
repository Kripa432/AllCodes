#include<bits/stdc++.h>

using namespace std;
int arr[60]={0};



int main()
{
   	int i,j,k,c,len,num,temp,t,flag=1,pos,x,y,m,n;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
    	scanf("%d %d",&x,&y);
    	if(arr[x]==arr[y] && arr[x]!=0){
    		flag=0;
    	}else if(arr[x]!=0 && arr[y]!=0 ){
    			;
    	}else if(arr[x]==0 && arr[y]==0){
    		arr[x]=1;
    		arr[y]=2;
    	}else if(arr[x]==0 && arr[y]==2){
    		arr[x]=1;

    	}else if(arr[y]==0 && arr[x]==1){
    		arr[y]=2;
    	}else if(arr[y]==1 && arr[x]==0){
    		arr[x]=2;
    	}else if(arr[x]==2 && arr[y]==0){
    		arr[y]=1;
    	}

    }
    if(flag)
    	printf("Yes");
    else
    	printf("No");
    return 0;
}
