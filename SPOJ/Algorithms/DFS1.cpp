#include<bits/stdc++.h>
#define SIZE 10001
using namespace std;
bool visited[SIZE]={false};
vector <int> adj[SIZE];

int DFS(int s,int length){
	visited[s]=true;
	length++;
	printf("node visited=%d\n",s );
	for(int i=0;i<adj[s].size();i++)
		if(!visited[adj[s][i]]){
			length=DFS(adj[s][i],length);
			//cvjdlength--;
		}
	return length;
}

int main(){
	int num,edges,i,j,u,v,max;
	int length=0;
	scanf("%d",&num);
	for(i=0;i<num-1;i++){
		scanf("%d %d",&u,&v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(i=1;i<=num;i++){
		if(!visited[i]){
			length=DFS(i,0);
			printf("length=%d\n",length);
			if(max<length)
				max=length;
			length=0;
		}
	}
	printf("%d\n",max-1 );
}