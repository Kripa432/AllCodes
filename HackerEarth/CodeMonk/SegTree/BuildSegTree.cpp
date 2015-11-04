#include<bits/stdc++.h>

using namespace std;

int arr[100],tree[100];

void build(int node,int start,int end){			//function to build segment tree
	if(start==end){	//leaf node
		tree[node]=arr[start];
	}
	else{
		int mid=(start+end)/2;
		//recuse on left child
		build(node*2,start,mid);
		//recuse right child
		build(node*2+1,mid+1,end);
		tree[node]=tree[node*2]+tree[node*2+1];
	}
}


void update(int node,int start,int end,int idx,int val){
	if(start==end){
			//leaf node
		tree[node]+=val;
		arr[idx]+=val;

	}
	else{
		int mid=(start+end)/2;
		if(start<=idx && idx<=mid){
			update(node*2,start,mid,idx,val);
		}
		else{
			update(node*2+1,mid+1,end,idx,val);
		}
		tree[node]=tree[node*2]+tree[node*2+1];
	}
}

int query(int node,int start,int end,int l,int r){
	if(r<start || end<l){
		return 0;
	}
	if(l<=start	&& end<=r){
		return tree[node];
	}
	int mid=(start+end)/2;
	int p1=query(node*2,start,mid,l,r);
	int p2=query(node*2+1,mid+1,end,l,r);
	return (p1+p2);
}



int main()
{
   int arr[]={6,3,4,5,2,7,1,9,8,40};
   int n=sizeof(arr)/sizeof(int);
   
    return 0;
}
