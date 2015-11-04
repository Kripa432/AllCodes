#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int i,pre;
    scanf("%d",&t);
    char str[5000001];
    while(t--)
    {	int count=0,max=0;
		scanf("%s %d",str,&pre);
		int len=strlen(str);
		
		
		for(int i=0,j=pre;i<pre && j<len;i++,j++){
			
				if(str[i]==str[j]){
					count++;
				}else{
					if(count>max)
						max=count;
					count=0;
				}
			
		}
		printf("%d\n",max);
			
    }

    return 0;
}
