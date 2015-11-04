#include<bits/stdc++.h>

using namespace std;
int fun(char *str1,char *str2){
	int flag=1,turn=1;
	int count =0;
	if(str1[0]=='#')
		return -1;	
	int len=strlen(str1);
	for(int i=1;i<len;i++){
		if(turn==1){
			if(str1[i]=='.')
				;
			else if(str2[i]=='.'){
				count++;
				turn=2;
			}
			else
				return -1;
			
		}else if(turn==2){
			if(str2[i]=='.')
				;
			else if(str1[i]=='.'){
				count++;
				turn=1;
			}
			else 
				return -1;
		}
	}
	return count;

}
int min(int a,int b){
	if(a<b)
		return a;
	else 
		return b;
}
int main()
{
   	int i,j,k,c,len,num,temp,t,flag,pos;
   	char str1[200005],str2[200005];
    scanf("%d",&t);
    while(t--)
    {
    	scanf(" %s %s",str1,str2);
    	int res1=fun(str1,str2);
    	int res2=fun(str2,str1);
    	if(res1!=-1 || res2!=-1){
    		printf("Yes\n");
    		if(res1!=-1 && res2!=-1)
    			printf("%d\n",min(res1,res2) );
    		else if(res1>=0)
    			printf("%d\n",res1 );
    		else
    			printf("%d\n",res2 );
    	}
    	else{
    		printf("No\n");
    	}
    	
    	
    }

    return 0;
}
