#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{	printf("%s\n","hello1");
    int t,X,Y,N,K,i,j,flag,pages,price;
    scanf("%d",&t);
    while(t--)
    {	flag=0;
    	scanf("%d %d %d %d",&X,&Y,&K,&N);
		while(N--){
			scanf("%d %d",&pages,&price);
			if(price<=K && Y+pages>=X)
				flag=1;
		}
    	if(flag)
    		printf("%s\n","LuckyChef" );
    	else
    		printf("%s\n","UnluckyChef" );
    }

    return 0;
}
