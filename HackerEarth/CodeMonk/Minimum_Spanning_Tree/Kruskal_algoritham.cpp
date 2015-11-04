#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int arr[MAX]; //as id
int nodes,edges;
pair <long long,pair<int ,int> >p[MAX];

int initialise(){
	for(int i=0;i<MAX;i++)
		arr[i]=i;
}

int root(int x){
	while(arr[x]!=x)
		x=arr[x];
	return x;
}

int unions(int x,int y){
	arr[root(x)]=arr[root(y)];
}

long long kruskal(pair<long long,pair<int,int> >p[]){
	long long minimumCost=0,count=0;

	for(int i=0;i<edges;i++)
		if(root(p[i].second.first)!=root(p[i].second.second)){
			//printf("selected edge %d %d %d\n",p[i].second.first,p[i].second.second,p[i].first );
			minimumCost+=p[i].first;
			unions(p[i].second.first,p[i].second.second);
			count++;
			if(count==nodes-1)
				break;
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
