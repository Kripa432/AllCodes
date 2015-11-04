#include<bits/stdc++.h>
#define SIZE 1006
using namespace std;


int level[SIZE]={0};
bool visited[SIZE]={0};
vector <int> v[SIZE];
int BFS(int s){

	visited[s]=true;
	level[s]=0;
	queue <int> q;
	q.push(s);
//	printf("node= %d\n",q.front() );
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(int i=0;i<v[p].size();i++){
			if(visited[v[p][i]]==false){
				level[v[p][i]]=level[p]+1;
				q.push(v[p][i]);
				visited[v[p][i]]=true;
	//			printf("node= %d\n",q.front() );
			}
		}
	}
}

int initialise(int num){
	for(int i=0;i<=num;i++){
		level[i]=visited[i]=0;
		v[i].clear();
	}

}

int main()
{
   	int i,j,k,c,len,s,num,temp,t,flag,pos,x,y,edge;
    scanf("%d",&t);
    while(t--){

    	scanf("%d %d",&num,&edge);
    	initialise(num);
    	for(i=1;i<=edge;i++){
    		scanf("%d %d",&x,&y);
    		v[x].push_back(y);
    		v[y].push_back(x);
    	}
    	scanf("%d",&s);
    	BFS(s);
   	 	for(i=1;i<=num;i++){
		    	if(visited[i] && s!=i)
	    		printf("%d ",level[i]*6);
    		else if(s!=i)
	    		printf("-1 ");
    		
    	}
    	printf("\n");
	}


    return 0;
}
