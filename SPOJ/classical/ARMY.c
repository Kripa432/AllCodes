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
    int i,j,c,len,ng,nm,temp,t,res,gmax,mmax;
    
    scanf("%d",&t);
    while(t--)
    {	mmax=gmax=-1;
    	scanf("%d %d",&ng,&nm);
    	if(ng==0 && nm==0)
    		printf("uncertain\n");
    	for(i=0;i<ng;i++){
    		scanf("%d",&temp);
    		gmax=max(gmax,temp);
    	}
    	for(i=0;i<nm;i++){
    		scanf("%d",&temp);
    		mmax=max(mmax,temp);
    	}
    	if(gmax>=mmax)
    		printf("Godzilla\n");
    	else
    		printf("MechaGodzilla\n");
    }

    return 0;
}
