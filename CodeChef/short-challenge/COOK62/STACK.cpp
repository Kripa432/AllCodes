#include<bits/stdc++.h>

using namespace std;

int fun(int ele,int *count,int *st){
	int high=*count-1;
	int low=0,mid;
	while(low<high){
		mid=(low+high)/2;
		if(st[mid]==ele)
			return mid;
		else if(st[mid]<ele)
			low=mid+1;
		else
			high=mid-1;
	}
	return (low+high)/2;

}

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n,ele,pos;
    	scanf("%d",&n);
    	int st[n+1]={0},count=0;
    	for(int i=0;i<n;i++){
    		scanf("%d",&ele);
    		int pos=fun(ele,&count,st);
    		if(pos==count)
    			count++;
    		st[pos]=ele;
    	}
    	printf("%d ",count );
    	for(int i=0;i<count;i++)
    		printf("%d ",st[i] );
    	printf("\n");
    }

    return 0;
}
