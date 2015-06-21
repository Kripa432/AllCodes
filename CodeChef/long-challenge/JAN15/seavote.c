#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{

    int t,arr[100000],sum,r,i,N,n,rare;
    scanf("%d",&t);
    while(t--)
    {       sum=rare=r=0;
            scanf("%d",&N);
            for(i=0;i<N;i++)
            {
                scanf("%d",&arr[i]);
                sum+=arr[i];
                if(arr[i]>100)
                    rare=1;
                if(arr[i]==0)
                    r++;
            }
            if(rare)
            {
                printf("\nNO");
                continue;
            }
            if(sum>=100 && sum<=(99+N-r))
            {
                printf("\nYES");
            }
            else
            {
                printf("\nNO");
            }


    }
    return 0;
}
