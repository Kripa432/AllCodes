#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
	long int t,i,j,count,L,R,len,K,zero,one,k,Q,N;
	char str[100005];
	char sub[100005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld %ld %ld",&N,&K,&Q);
		scanf("%s",str);
		while(Q--){
			zero=one=count=0;
			scanf("%ld %ld",&L,&R);
			L--;R--;
    		
    		for(i=0;i<=R-L;i++)			//length of substring
    			for(j=L;j<=R-i;j++){	//starting position of substring
    				if(0)		//	if(i+1<=K)			//length of substring less than no of atmost O's or 1's
    					count++;
    				else{
    					int flag=1;
    					for(k=0;k<=i;k++){
    						printf("%c",str[j+k] );
    						if(str[j+k]=='0')
    							zero++;
    						else
    							one++;
    						if(zero>K || one>k){
    							flag=0;
    							break;
    						}
  	  					}
  	  					if(flag)
  	  						count++;
    					printf("\n");
    				}    			

    			}
    			printf("%ld\n",count );
    		}
    	}

    	return 0;
    }
