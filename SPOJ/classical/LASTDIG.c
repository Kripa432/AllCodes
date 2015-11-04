#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>


int main()
{
    int i,j,c,len,num,temp,t,res;
    long long int b;
    char a[1001];
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s %lld",&a,&b);
    	if(b==0){
    		printf("1\n");
    		continue;
    	}
    	c=a[strlen(a)-1]-'0';
    	if(c==0 || c==1 || c==5 || c==6 )
    		res=c;
    	else if(c==2 || c==3 || c==7 || c==8)
    		res=pow(c,4 + (b%4));
    	else if(c==4 || c==9)
    		res=pow(c,2+ (b%2));
    	printf("%d\n",res%10 );
    	
    }

    return 0;
}
