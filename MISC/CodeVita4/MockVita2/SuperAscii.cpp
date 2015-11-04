#include<bits/stdc++.h>

using namespace std;


int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {
    	int arr[27]={0},asc;
    	char ch;
    	getchar();
    	ch=getchar();
    	while(ch!='\n'){
    		arr[ch-'a'+1]++;

    		ch=getchar();
    	}
    	flag=1;
    	for(i=1;i<=26;i++){
    		if(arr[i]!=0 && arr[i]==i){
    				;
    			}else{
    				if(!arr[i]){
    				flag=0;
    				break;
    				}
    			}
    	}
    	if(flag)
    		printf("Yes\n");
    	else
    		printf("No\n");
    }

    return 0;
}
