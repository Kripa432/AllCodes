#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int arr[MAX]; //as id
int *id=arr;
int nodes,edges;
pair <long long,pair<int ,int> >p[MAX];

int initialise(){
	for(int i=0;i<MAX;i++)
		arr[i]=i;
}
/*
int root(int x){
	while(arr[x]!=x)
		x=arr[x];
	return x;
}
*/

int root(int x)
{	
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];x
    }
    return x;
}

void unions(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}
/*
int unions(int x,int y){
	arr[root(x)]=arr[root(y)];
}
*/

/*long long kruskal(pair<long long,pair<int,int> >p[]){
	long long minimumCost=0,count=0;

	for(int i=0;i<edges;i++)
		if(root(p[i].second.first)!=root(p[i].second.second)){
			//printf("selected edge %d %d %d\n",p[i].second.first,p[i].second.second,p[i].first );
			minimumCost+=p[i].first;
			unions(p[i].second.first,p[i].second.second);
			
		}
	return minimumCost;
}
*/

long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
            unions(x, y);
        }    
    }
    return minimumCost;
}

int main()
{
	   
	int x,y,t;
	long long weight,minimumCost,cost;
	scanf("%d",&t);
	while(t--){
	   initialise();
	   cin>>nodes>>edges;
	   for(int i=0;i<edges;i++){
	   		cin>>x>>y>>weight;
	   		p[i]=make_pair(weight,make_pair(x,y));
	   }
	   sort(p,p+edges);
	   reverse(p,p+edges);
	   minimumCost=kruskal(p);
	   cout<<minimumCost<<endl;
	    return 0;
	}
}
