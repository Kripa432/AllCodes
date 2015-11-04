#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int n,ele;
   	scanf("%d",&n);
   	vector <int> v;
   	for(int i=0;i<n;i++){
   		scanf("%d",&ele);
   		v.push_back(ele);
   	}
   	long long int sum=0;
   	for(int i=1;i<n;i++){
   		if(v[i]==0)
   			continue;
   		for(int j=0;j<i;j++){
   			sum+=v[i]&v[j];
   		}
   	}
   	cout<<sum;

    return 0;
}
