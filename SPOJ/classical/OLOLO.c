#include<stdio.h>
#include<stdbool.h>


int main()
{
	int i,j,c,len,num,temp,t,res;
	int xo=0;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&temp);
		xo=xo^temp;
	}
	printf("%d\n",xo );

	return 0;
}
