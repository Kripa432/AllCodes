#include<bits/stdc++.h>

using namespace std;
char str[10005];
char str2[10005];
int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    	int len=strlen(str);
    	scanf("%s",str2);
    	int len2=strlen(str2);
    	sort(str2,str2+len2);
    	for(int i=0;i<len;i++){
    		for(int j=0;j<len2;j++){
    			if(str2[j]!=0){
    				if(str[i]>str2[j]){
    					str[i]=str2[j];
    					str2[j]=0;
    					break;
    				}
    			}
    		}
    	}
    	printf("%s\n",str );

    }

    return 0;
}
