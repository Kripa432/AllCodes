#include<stdio.h>
#include<math.h>
int main()
{
    int t,N,K,l,arr[1001],max,maxall;
    unsigned long long int i,j,size;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&N,&K);
        size=pow(2,N);
        for(i=0; i<N; i++)
            scanf("%d",&arr[i]);
        maxall=K;
        for(i=0; i<size; i++)
        {
            j=i;
            l=max=0;
            while(j)
            {
                if(j&1)
                {
                    max=max^arr[l];
                }
                j=j>>1;
                l++;
            }
            max=max^K;
            if(max>maxall)
                maxall=max;
        }

        printf("\n%ld",maxall);
    }
    return 0;
}
