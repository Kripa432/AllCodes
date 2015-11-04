#include<bits/stdc++.h>
#define MAX 1000005
using namespace std;

int arr[MAX];

int initialize(int nodes){
	for(int i=0;i<=nodes;i++)
		arr[i]=i;
	return 0;
}

int root(int x){
	while(arr[x]!=x){
		arr[x]=arr[arr[x]];
		x=arr[x];
	}
	return x;
}

int union1(int a,int b){
	int p=root(a);
	int q=root(b);
	arr[p]=arr[q];
}
int main()
{	
   	int nodes,x,y;
   	scanf("%d",&nodes);
   	initialize(nodes+10);
   	char ch;
   	getchar();
   	ch=getchar();
   	while(ch=='C' || ch=='Q'){

   		scanf("%d %d",&x,&y);
   		if(ch=='C')
   			union1(x,y);
   		else if(root(x)==root(y))
   			printf("Yes\n");
   		else
   			printf("No\n");
   		getchar();
   		ch=getchar();
   	}

    return 0;
}
