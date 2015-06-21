#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define mod 1000000007
long long int gcd(long long int a,long long int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);

}
long long int fibc(long long int arr[],long long int top)
{
    if(arr[top]!=-1)
        return arr[top];
    else
        arr[top]=fibc(arr,(top-1))%mod+fibc(arr,(top-2))%mod;
}

int main()
{  // printf("%d",gcd(28,42));
   long long int t,a,b,gc,i;
 long long   int fib[1000000];
    for(i=2;i<1000000;i++)
        fib[i]=-1;
    //memset(fib,-1,sizeof(int)*10);
    fib[0]=0;
    fib[1]=1;
  //  fibc(fib,10);
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        gc=gcd(a,b);
        if(fib[gc]==-1)
        {
            fibc(fib,gc);
        }
        printf("%lld\n",fib[gc]%(1000000007));
    }

/*    for(i=0;i<10;i++)
      printf("%lld  ",fib[i]);
*/
    return 0;
}
