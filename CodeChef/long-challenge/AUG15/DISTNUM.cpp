#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,c,len,n,q,temp,t,flag,pos,type,x,y;
    scanf("%d %d",&n,&q);
    vector <int> arr;
    for(i=0;i<n;i++){
    	scanf("%d",&temp);
    	arr.push_back(temp);
    }
    while(q--){
    	scanf("%d",&type);
    	if(type==1){
    		scanf("%d %d",&x,&y);
    	}else if(type==2){
    		scanf("%d %d",&x,&y);
    		//arr[x-1]=y;
    	}else if(type==3){
    		scanf("%d",&x);
    		//arr.erase(arr.begin()+x-1);
    	}else if(type==4){
    		scanf("%d %d",&x,&y);
    		//arr.insert(arr.begin()+x-1,y);
    	}else if(type==5){
    		scanf("%d %d",&x,&y);
    	}
    }

    return 0;
}
