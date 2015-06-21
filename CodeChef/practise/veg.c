#include<stdio.h>
int main()
{
    int neg,i,t,n,N,a[1001],ap=0,min,pos,sum;
    scanf("%d",&t);
    while(t--)
    {   sum=0;
        neg=0;
        ap=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",a[i]);
        }
        n=N;
        while(n>3 && ap==0)
        {   min=0;
            for(i=0;i<N;i++)
            {
                if(a[i]<min)
                {
                    min=a[i];
                    pos=i;
                    neg=1;
                }
            }
            if(neg)
            {a[pos]=0;
            n--;
            }

        }
        for(i=0;i<N;i++)
            sum=sum+a[i];
    }
}
