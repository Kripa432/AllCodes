#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos;
    scanf("%d",&t);
    char str[100001];
    j=1;
    while(t--)
    {	
    	printf("%d ",j++ );
    	scanf("%d %s",&num,str);
    	for(i=0;str[i]!=0;i++)
    		if(i+1!=num){
    			printf("%c",str[i] );
    		}
    	printf("\n");
    }

    return 0;
}
