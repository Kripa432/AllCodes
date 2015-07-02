#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define pi 3.1415926
#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    int i,j,c,len,num,temp,t,res;
    
    scanf("%d",&len);
    while(len!=0)
    {
    	printf("%.2f\n",(len/pi)*(len)/2 );
    	  scanf("%d",&len);
    }

    return 0;
}
