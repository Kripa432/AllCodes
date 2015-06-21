#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    long long int t,N,temp1,temp2,i,j,l,r;
    double temp3,temp4;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&N);
        scanf("%lld %lld",&l ,&r);
        temp1=(log (l))/(log (2));
        temp3=(double)(log (l))/(log (2));
        temp2=(log (r))/(log (2));
        temp4=(double)(log (r))/(log (2));
        if(temp2==temp4)
        {
            printf("%lld\n",(1<<r)-1);
        }
        else
        {
            printf("%lld\n",(1<<l)-1);
        }
    }

    return 0;
}
