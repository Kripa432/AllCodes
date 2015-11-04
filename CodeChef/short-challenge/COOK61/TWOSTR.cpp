#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos;
    scanf("%d",&t);
    char str1[100000],str2[100000];
    while(t--)
    {
    	scanf("%s",str1);
    	scanf("%s",str2);
    	int len=strlen(str1);
    	flag=1;
    	for(int i=0;i<len;i++){
    		if(str1[i]=='?' || str2[i]=='?')
    			continue;
    		else if(str1[i]==str2[i])
    			continue;
    		else{
    			flag=0;
    			break;
    		}
    	}
    	if(flag)
    		printf("Yes\n");
    	else
    		printf("No\n");
    }

    return 0;
}
