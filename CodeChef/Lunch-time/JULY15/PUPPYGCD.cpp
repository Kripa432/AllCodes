#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
    

 	int i,j,k,c,len,num,temp,t,flag,pos;
    
    scanf("%d",&t);
    while(t--)
    {	int d;
    	scanf("%d %d",&num,&d);
    	long long int count=0;
    	for(i=d;i<=num;i+=d){
    		for(j=i;j<=num;j+=d)
    			if(  (j/d)%(i/d)!=0  || i==d   ) {
    				
    				if(i==j && i!=d ){
    					printf("%d %d\n",i,j );
    					
    				}
    				else{ 
    				 	count++;

    				printf("%d %d\n",i,j );
    			}
    			}
    		//	else 
    		//		printf("else %d %d\n",i,j );
    			/*
    			if(gcd(i,j)==d){
    				count++;
    				printf("if run\n");
    			}
    			else {
    				if((j/d)%(i/d)!=0)
    				printf("else run%d %d\n",i,j);
    			}
    			*/
    	}
    	printf("%lld\n",count );
    }

    return 0;
}
