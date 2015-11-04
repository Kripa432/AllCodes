#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int n,m,ele,x,y;
   	scanf("%d %d",&n,&m);
   	pair <int,int> p[155];
   	for(int i=0;i<=150;i++)
   		p[i].first=p[i].second=0;

   	for(int i=0;i<m;i++){		//first outdegree 
   		scanf("%d %d",&x,&y);	//second in degree
   		(p[x].first)++;
   		(p[y].second)++;
   	}
   	for(int i=0;i<151;i++){

   		while(p[i].first != p[i].second){
   			if(p[i].first<p[i].second)	//out < in
   			{
   				printf("%d ",i);
   				for(int j=0;j<151;j++){
   					if(p[j].first > p[j].second){
   						printf("%d\n",j );
   						(p[j].second)++;
   						(p[i].first)--;
   						break;
   					}
   				}
   			}else{
   				for(int j=0;j<151;j++){
   					if(p[j].first < p[j].second){
   						printf("%d\n",j );
   						(p[j].first)++;
   						(p[i].second)--;
   						break;
   					}
   				}

   				printf("%d\n",i );
   			}
   		}
   	}

    return 0;
}
