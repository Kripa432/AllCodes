#include<bits/stdc++.h>

using namespace std;

int swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	return 0;
}

int main()
{
   	int i,j,k,c,len,n,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {	int upset=100000000;
    	scanf("%d",&n);
    	int arr[12];
    	int p[12];
    	for(int i=0;i<n;i++)
    		scanf("%d",&arr[i]);
    	for(int i=0;i<n;i++)
    		scanf("%d",&p[i]);
    	for(int i=0;i<n;i++)
    		for(int j=0;j<n;j++){
    			if(i==j)
    				continue;
    			swap(&arr[i],&arr[j]);
    			printf("\n arr is");
    			for(int it=0;it<n;it++)
    				printf("%d ",arr[it] );

    			temp=0;
    			for(int l=2;l<n;l++)
    				temp+=p[i]*(arr[l]^arr[l-1]^arr[l-2]);
    			if(temp<upset)
    				upset=temp;
    			swap(&arr[i],&arr[j]);
    		}
    	printf("%d\n",upset );
    }

    return 0;
}
