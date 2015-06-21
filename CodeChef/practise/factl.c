#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,N;
    long long int factl,zero,i;
    float k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);
        zero=0;
        for(i=5;i<=N;i=i+5)
        {
            k=log (i)/log (5);
            if(k==(int)(k*10)/10)
                zero+=k;
            else
                zero++;
        }
        printf("\n%lld",zero);
    }

    return 0;
}
