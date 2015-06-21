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
    int i,j,c,len,num,temp,t,res,t1,t2;
    float T1,T2,comm;
    
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%f %f %d %d",&T1,&T2,&t1,&t2);
    	T1++;
    	T2++;
    	printf("%f\n",1/(T1*T2));
    }

    return 0;
}
