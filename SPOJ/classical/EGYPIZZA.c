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
    int i,j,c,len,num,n,d,temp,t,res,sum,rem,one=0,two=0,three=0;
    
    scanf("%d",&num);
    sum=1;rem=0;
    for(i=0;i<num;i++){
    	scanf("%d",&n);
    	getchar();
    	scanf("%d",&d);
    	if(d==2)
    		two++;
    	else if(n==1)
    		one++;
    	else three++;
	}
	if(one<=three){
		sum+=three;
		one=0;
	}
	else{
		sum=sum+three;
		one-=three;
	}
	if(two%2==0){
		sum+=two/2;
		sum+=(one+3)/4;
	}else{
		sum+=(two+1)/2;
		one-=2;
		sum+=(one+3)/4;
	}

    printf("%d\n",sum  );

    return 0;
}
