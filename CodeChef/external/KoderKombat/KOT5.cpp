#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	int arr[26];
    	for(int i=0;i<26;i++)
    		arr[i]=0;
    	char str[1001];
    	scanf("%s",str);
    	int len=strlen(str);
    	for(int i=0;i<len;i++){
    		arr[str[i]-'a']++;
    	}
    	int count=0;
    	for(int i=0;i<26;i++)
    		if(arr[i])
    			count++;
    	int avg=len/count,res=0;
    	for(int i=0;i<26;i++){
    		if(arr[i]){
    			res+=abs(avg-arr[i]);
    		}
    	}
    	printf("%d\n",res );
    }

    return 0;
}
