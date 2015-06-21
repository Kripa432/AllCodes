#include<stdio.h>

int main()
{
    long long int t,N,K,i,num;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&N,&K);
        for(i=0;i<K;i++)
            scanf("%d",&num);
        if(((N*(N+1))/2)%2==1)
            printf("\nMom");
        else
            printf("\nChef");
    }
    return 0;
}
