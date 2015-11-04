#include<bits/stdc++.h>

using namespace std;

pair <int,int> p[200001];

int main()
{
   	int n;
   	scanf("%d",&n);
   	for(int i=0;i<n;i++)
   		scanf("%d %d",&(p[i].first),&(p[i].second));
   	//sort(p,p+n);
   	long long int sum=0;
   	for(int i=0;i<n;i++){
   		for(int j=i+1;j<n;j++)
   		sum+=abs(p[i].first-p[j].first)+abs(p[i].second-p[j].second);
   		sum%=1000000007;
   	}
   	printf("%lld\n",sum );
   		
   		//printf("%d %d\n",p[i].first,p[i].second );

    return 0;
}
