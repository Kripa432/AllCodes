#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define SIZE 100005

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
#define ll long long int
int main()
{
	ll t,n,sum,i,l,j,k,temp,num,p,f,prod,set;
	scanf("%lld",&t);
	int prm[SIZE]={0},fact[SIZE]={0};
	while(t--){		
		/*initialization of variables to zero*/
		p=f=0;
		sum=1;
		for(i=0;i<SIZE;i++)
			prm[i]=fact[SIZE]=0;

		scanf("%lld",&n);
		num=n;
		for(i=2;i<=num;i++){
			if(num%i==0){
				prm[p++]=i;
				num/=i;
				i=1;
			}
		}
		/*printf("prime factors are\n");
		for(i=0;i<p;i++)
			printf("%d  ",prm[i] );
		printf("%s\n","" );
*/
		set=pow(2,p);
		for(i=1;i<set;i++){
			k=i;
			l=0;
			prod=1;
			//printf("(");
			while(k){
				if(k&1){
					prod*=prm[l];
					//printf("%d-",prm[l] );
				}
				k=k>>1;
				l++;
			}
			fact[f++]=prod;
			//printf(")\n");
		}
		

		//sorting of fact
		int pos;
		for(i=0;i<f;i++){
			int min=fact[i];
			for(j=i;j<f-j;j++){
				if(min>fact[j]){
					min=fact[j];
					pos=j;
				}
			}
			if(min!=fact[i]){
				temp=fact[i];
				fact[i]=fact[pos];
				fact[pos]=temp;
			}
		}
	//	for(i=0;i<f;i++)
	//		printf("%d  ",fact[i] );
	//	printf("\n");
		sum+=fact[0];
		for(i=1;i<f;i++){
			if(fact[i]!=fact[i-1]){
				sum+=fact[i];
		//		printf("%d ",fact[i] );
			}
		}
		printf("%lld\n",sum );
	}

	return 0;
}
