#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int t,N,K,i,min,pos;
    unsigned long long int max ,temp;
    int arr[100001][2];
    scanf("%d",&t);
    while(t--)
    {
        max=1;

        scanf("%d%d",&N,&K);
        for(i=0; i<N; i++)
        {
            scanf("%d",&arr[i][0]);

        }
        for(i=0; i<N; i++)
        {
            scanf("%d",&arr[i][1]);
            temp=K/arr[i][0];
            temp*=arr[i][1];
            if(max<temp)
            {max=temp;
            pos=i;
            }
        }


        printf("%lld\n",max);
    }

    return 0;
}
