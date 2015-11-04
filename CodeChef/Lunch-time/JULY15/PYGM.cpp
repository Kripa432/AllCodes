#include<bits/stdc++.h>


using namespace std;

int main()
{
    

 	int i,j,k,c,len,num,temp,t,flag,pos,a,b;
    
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d",&a,&b);
    	int res=a+b;
    	if(res<=2){
    		printf("Vanka\n");
    		continue;
    	}
    	
    	if(res&1)
    		res-=1;
    	else
    		res-=2;

    	temp=log(res)/log(2);
    	if(res==pow(2,temp) && temp%2==0)
    		printf("Vanka\n");
    	else
    		printf("Tuzik\n");

    }

    return 0;
}
