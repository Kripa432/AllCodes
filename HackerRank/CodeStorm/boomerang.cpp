#include<bits/stdc++.h>
#define LL long long int 

using namespace std;
vector<int>::iterator cur,beg,end; 
int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {	int n;
    	scanf("%d",&n);
    	vector <int> v;
    	for(int i=1;i<=n;i++)
    		v.push_back(i);
    	cur=v.begin();
    	int c=0;
    	while(v.size()!=1){
    		int sz=v.size();
    		if(v.size()%2==1){	//odd delete itself
    			printf("deleteing %d\n",*(v.begin()+c) );
    			v.erase(v.begin()+c,v.begin()+c+1);
    			c++;
    			
    		}else{				//even delete opposite
    			int temp=0;
    			if(c+sz/2>=v.size()){
    				temp=sz-c-1;
    				printf("deleteing %d\n",*(v.begin()+temp) );
    				v.erase(v.begin()+temp,v.begin()+temp+1);
    			}
    			else{
    				printf("deleteing %d\n",*(v.begin()+c+sz/2) );
    				v.erase(v.begin()+c+sz/2,v.begin()+c+sz/2+1);
    			}
    			
    			
    			c++;
    			if(c==v.size())
    				c=0;
    		}
    	}

    	printf("%d\n",v[0] );
    }

    return 0;
}
