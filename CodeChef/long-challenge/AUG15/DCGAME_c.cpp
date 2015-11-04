#include<bits/stdc++.h>

using namespace std;
vector <int> arr;
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


int main()
{
   	int i,p,j,k,c,len,num,temp,flag,ele,pos,n,m,count;
    char sign,t;
    scanf("%d %d",&n,&m);
	int size=(n*(n+1))/2;    
    
    for(int i=0;i<n;i++){
    	scanf("%d",&temp);
    	arr.push_back(temp);

    }
    int max=0;
    for(i=0;i<n;i++){	// subarray starting from index
    	
    	max=arr[i];
    	for(j=i+1;j<n;j++){
    		if(arr[j]>max)
    			max=arr[j];
    		arr.push_back(max);
    	}

    }

    sort(arr.begin(),arr.end());
    for(i=0;i<arr.size();i++)
    	printf("%d ",arr[i] );

    while(m--){
    	scanf(" %c %d %c",&sign,&k,&t);
    	count=0;
    	pos=find(k,0,size-1);
    	if(sign=='='){
    		
    		i=0;
    		temp=pos;
    		while(temp<size && arr[temp++]==k)
    			i++;
    		temp=pos-1;
    		while(temp>=0 && arr[temp--]==k)
    			i++;
    		count=i;

    	}

    	else if(sign=='<'){
    		
    		while(pos>=0 && arr[pos]==k)
    			pos--;
    		if(arr[pos]>k && pos>=0)
    			pos--;

    		count=pos+1;

    	}else if(sign=='>'){
    		//printf("returned ele=%d\n",arr[pos] );
    		while(pos<size && arr[pos]==k)
    			pos++;
    		if(arr[pos]<k && pos<size)
    			pos++;
    			
    		
    		count=size-(pos);
    	}
    	printf("\ncount= %d",count );
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