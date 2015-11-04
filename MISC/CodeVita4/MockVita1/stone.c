#include<stdio.h>


int main()
{
    int i,j,len,n,t,res,temp,flag,num;
    long long int sum;
    
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&num);
    	if(num%4==1)
    		printf("No\n");
    	else
    		printf("Yes\n");
    }

    return 0;
}
