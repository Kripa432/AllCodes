#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t;
    long long int diff,N,i,sum,rep,s,count;
    scanf("%d",&t);
    while(t--)
    {   count=0;
        scanf("%lld %lld",&N,&s);
        diff=s-N;
        for(i=0;i<N;i++){
            if((diff-i)>=0)
                diff-=i;
            else
                break;
        }
        printf("%lld\n",N-i);
    }

    return 0;
}
