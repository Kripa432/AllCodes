#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

bool marked[MAX];
typedef pair<long long, int> PII;
vector <PII>adj[MAX];

long long prim(int x){
	priority_queue <PII, vector<PII>, less<PII> >Q;
	int y;
	long long minimumCost=0;
	PII p;
	Q.push(make_pair(0,x));
	while(!Q.empty()){
		p=Q.top();
		Q.pop();
		x=p.second;
		if(marked[x]==true){
			continue;
		}
		minimumCost+=p.first;
		marked[x]=true;
		for(int i=0;i<adj[x].size();i++){
			y=adj[x][i].second;
			if(marked[y]==false)
				Q.push(adj[x][i]);
		}
	}
	return minimumCost;
}
int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos;
   	int nodes, edges, x, y;
    long long weight, minimumCost;
    scanf("%d",&t);
    while(t--)
    {	int max=0,s;
    	scanf("%d %d",&nodes,&edges);
    	for(i=0;i<edges;i++){
    		scanf("%d %d %lld",&x,&y,&weight);
    		adj[x].push_back(make_pair(weight,y));
    		adj[y].push_back(make_pair(weight,x));
    		if(weight>max)
    		{
    			max=weight;
    			s=x;
    		}	
    	}
    	minimumCost=prim(s);
    	printf("%lld\n",minimumCost );
    }

    return 0;
}
