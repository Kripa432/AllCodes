#include<bits/stdc++.h>

using namespace std;
/*
int find(int ele,int low,int high){
	int mid=(low+high)/2;
	while(low<=high){
		if(arr[mid]==ele)
			return mid;
		else if(ele<arr[mid])
			high=mid-1;
		else
			low=mid+1;
		mid=(low+high)/2;
	}
	return mid;
}
*/


int main()
{
   	int i,p,j,k,c,len,num,temp,flag,ele,pos,n,m,count;
    char sign,t;
    scanf("%d %d",&n,&m);
	int  arr[n+5];
    pair <int,int> brr[1000001];
    for(int i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    	

    
    int max=0;
    for(i=0;i<n;i++){	// subarray starting from index
    	
    	max=arr[i];
    	for(j=i;j<n;j++){
    		if(arr[j]>max)
    			max=arr[j];
    		
    	}

    }

    
    

    while(m--){
    	scanf(" %c %d %c",&sign,&k,&t);
    	count=0;
    	
    	if(sign=='='){
    		
    		count=brr[k];

    	}

    	else if(sign=='<'){
    		
    		for(int i=0;i<k;i++)
    			count+=brr[i];

    	}else if(sign=='>'){
    		
    		for(int i=k+1;i<1000001;i++)
    			count+=brr[i];
    	}
    	//printf("%d",count );
    	if(count&1){
    		if(t=='C')
    			printf("C" );
    		else
    			printf("D" );
    	}else{
    		if(t=='D')
    			printf("C" );
    		else
    			printf("D" );
    	}

    	
    }
    return 0;
}