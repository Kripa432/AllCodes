#include<bits/stdc++.h>

using namespace std;

bool comp(string s1,string s2){
	if(s1.size()<s2.size())
		return true;
	else if(s1.size()>s2.size())
		return false;
	if(s1.compare(s2)<=0)
		return true;
	else
		return false;

}
bool comp2(string s1,string s2){
	if(s1.size()<s2.size())
		return !true;
	else if(s1.size()>s2.size())
		return !false;
	if(s1.compare(s2)<=0)
		return true;
	else
		return false;
}
int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	vector <string> v;
    	vector <string> res;
    	int arr[30];
    	size_t found;
    	memset(arr,0,sizeof(arr));
    	int n;
    	scanf("%d",&n);
    	string str;
    	for(int i=0;i<n;i++){
    		cin>>str;
    		v.push_back(str);
    	}
    	sort(v.begin(),v.end(),comp);
    	int length=v.size();
    	int lens=v[0].size();
    	int i;
    	string sub;
    	for(int j=lens;j>=0;j--){
    		for(int k=0;k+j<=lens;k++){
    			sub=v[0].substr(k,j);
    			cout<<sub<<k<<' '<<j<<"      \n";
    			
    			for(i=1;i<length;i++){
    				if(v[i].find(sub)!=string::npos)
    					continue;
    				else
    					break;
    			}
    			if(i!=length)
    				break;
    			if(i==length){
    				if(sub.size()!=0)
    				res.push_back(sub);
    				
    			}
    		}
    		
    	}

    	sort(res.begin(),res.end(),comp2);
    	int leng=res.size();
    	//for(int i=0;i<leng;i++)
    	//	cout<<res[i]<<"\n";

    	cout<<res[0]<<"\n";	

    }

    return 0;
}
