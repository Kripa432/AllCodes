#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{   long long int t;
    scanf("%lld",&t);
    long long int s,c,k,n,res;
    while(t--)
    {   res=0;
        scanf("%lld %lld %lld",&s,&c,&k);
        res=pow(2,s-k+1);
        while(s<c){
            res+=pow(2,c+1);
            c--;
        }
        if(res==0)
            res=-1;
        printf("%lld\n",res+1);
        
    }

    return 0;
}
