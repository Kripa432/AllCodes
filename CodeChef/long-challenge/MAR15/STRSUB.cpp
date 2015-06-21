#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<ctype.h>
#include<math.h>



int main()
{
    int t,i,j,count,L,R,len,K,zero,one,k,Q,N;
    char str[100005];
    char sub[100005];
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d %d",&N,&K,&Q);
    	scanf("%s",str);
    	while(Q--){
    		zero=one=count=0;
    		scanf("%d %d",&L,&R);
    		L--;
    		R--;
    		for(i=1;i<=R-L+1;i++)			//length of aubatring
    			for(j=L;j<=R-i+2;j++){	//starting point of substring
    				sub=substr(str,j,i);
    				printf("%s\n",sub);

    			}
    		printf("%d\n",count );
    	}
    }

    return 0;
}

