#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>





int main()
{
    int i,j,c,len,num,temp,t,res,q;
    srand(time(NULL));
	int r ;
	
	t=rand()%10000+1;
	q=rand()%10000+1;
    
    
    printf("%d ",t);
	printf("%d\n",q);
    while(t--)
    {	len=rand()%2+1;
    	
        for(i=0;i<len;i++){
    		r=rand()%26;
    		printf("%c",'a'+r );
    	}
    	printf(" ");
    	len=rand()%2+1;
    	for(i=0;i<len;i++){
    		r=rand()%26;
    		printf("%c",'a'+r );
    	}
    	printf("\n");
    	
    }
    while(q--){
    	len=1;
    	for(i=0;i<len;i++){
    		r=rand()%26;
    		printf("%c",'a'+r );
    	}
    	printf("\n");
    }

    return 0;
}
