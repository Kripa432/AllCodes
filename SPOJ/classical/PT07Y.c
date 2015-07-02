#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#include<vector>
std::vector<int> adj[10001];
bool visited[10001];

int dfs(int s){
	visited[s]=true;
	int i;
	for(i=0;i<adj[s].size();i++){
		if(visited[adj[s][i]]==false)
			dfs(adj[s][i]);
		else
			return 0;
	}
	return 1;
}

int initialise(){
	int i;
	for(i=0;i<10001;i++)
		visited[i]=false;
}



int main()
{
    int i,j,c,len,num,temp,t,res,n,m,u,v,min;
    min=100000;
   scanf("%d %d",&n,&m);
   for(i=0;i<m;i++){
   		scanf("%d %d",&u,&v);
   		adj[u].push_back(v);
   		adj[v].push_back(u);
   		if(min<u)
   			min=u;
   }
   initialise();
   for(i=1;i<n;i++){
   	res=dfs(i);
   if(res)
   		printf("YES\n");
   	else
   		printf("NO\n");
   	}

    return 0;
}
