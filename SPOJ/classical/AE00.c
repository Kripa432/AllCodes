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
    int i,j,c,len,num,temp,t,res;
    c=0;
   scanf("%d",&num);
   temp=sqrt(num);
   for(i=1;i<=temp;i++){
   		for(j=i;i*j<=num;j++)
   				c++;
   }
   printf("%d\n",c );
    return 0;
}
