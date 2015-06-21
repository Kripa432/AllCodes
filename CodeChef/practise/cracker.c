#include<stdio.h>
int main()
{
	int t,m,n,a;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d %d %d",&n,&a,&m);
	   printf("\n%d",m%n+a);
	}
	return 0;
}
