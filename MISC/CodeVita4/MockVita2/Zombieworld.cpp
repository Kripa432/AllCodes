#include<bits/stdc++.h>

using namespace std;

int arr[80];
int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos,p,d;
   	scanf("%d",&k);
   	while(k--){
	    scanf("%d %d",&num,&t);
	    for(i=0;i<num;i++)
	    	scanf("%d",&arr[i]);
	    scanf("%d %d",&p,&d);
	    if(t<num){
	    	printf("No\n");
	    	continue;
	    }
	    sort(arr,arr+num);
	    flag=1;
	    for(i=0;i<num;i++){
	    	if(arr[i]<=p)
	    		p=2*p-arr[i];
	    	else{
	    		
	    		flag=0;
	    		break;
	    	}
	    }
	    if(p>=d && flag==1){
	    	printf("Yes\n");
	    }else{
	    	printf("No\n");
	    }

	}

    return 0;
}
