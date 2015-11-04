#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos;
    scanf("%d",&t);
    getchar();
    while(t--)
    {	int count=0;
    	bool arr[26]={0};
    	char ch;
    	ch=getchar();
    	while(ch!='\n'){
    		arr[ch-'a']=1;
    		ch=getchar();
    	}
    	for(i=0;i<26;i++)
    		if(arr[i])
    			count++;
    	if(count&1)
    		printf("Counter Terrorist\n");
    	else
    		printf("Terrorist\n");
    }

    return 0;
}
