#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,c,len,n,temp,t,flag,pos,top=0;;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    int count=0;
    for(i=0;i<n;i++){
    	for(j=i;j<n;j++){
    	printf("subset %d %d\n",i,j );
    		flag=1;
    		for(int l=i;l<=j;l++)
    			for(int m=l+1;m<=j;m++)
    				if((arr[l]%arr[m])==k){
    					flag=0;
    					printf("bad pair detected %d %d\n",arr[l],arr[m]);
    					break;
    				}
    		if(flag)
    			count++;
    	}
    		
    }
    printf("%d",count );

    return 0;
    	
}
