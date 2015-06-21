#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    int t;
    int count,freq,i,j,k,temp,N,len,keys,lim,inc;
    char str[105];
    scanf("%d",&t);
    while(t--)
    {	count=keys=0;
    	scanf("%s",str);
    	scanf("%d",&N);
    	lim=12*N;
    	len=strlen(str);
    	for(i=0;i<len;i++)
    		if(str[i]=='S')
    			keys++;
    		else
    			keys+=2;

    	for(i=1;i<=lim;i++){
    		inc=keys;
    		while(i+inc<=lim){
    			count++;
    			inc+=keys;
    		}
    	}
    	printf("%d\n",count );


    }

    return 0;
}
