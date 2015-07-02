#include<vector>
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>
#include<math.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

std::vector<int> adj[10];

int main()
{
    using namespace std;

 	long long int i,j,k,c,len,num,temp,t;
    
    int x,y,nodes,edges;
    cin>>nodes;
    cin>>edges;
    for(i=0;i<edges;i++){
    	cin>>x>>y;
    	adj[x].push_back(y);
    }
    for(i=1;i<=nodes;i++){
    	printf("for node %d :",i );
    	for(j=0;j<adj[i].size();j++)
    		if(j==adj[i].size()-1)
    			printf("%d\n",adj[i][j] );
    		else
    			printf("%d-->",adj[i][j] );
    }

    return 0;
}
