#include<stdio.h>

#include<ctype.h>
#include<math.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int lv(int a,int c){
	return (-1+sqrt(1+2*(c-a)))/2;
}
int rv(int x,int z){
	return (-1+sqrt(1+4*(z-x)))/4;
}

int main()
{
    
 	long long int sum,i,j,k,c,len,num,temp,t,a,x,z,l,r;
    
    scanf("%lld",&t);
    while(t--)
    {	sum=0;
    	scanf("%lld %lld %lld %lld",&a,&c,&x,&z);
    	l=lv(a,c);
    	r=rv(x,z);
    	//cout<<"l=    "<<l<<"r=      "<<r<<endl;
    	for(i=l;i<=r;i++){
    		sum+=(i+2)*(i+1);
    	}
    	printf("%d\n",sum);
    }

    return 0;
}
