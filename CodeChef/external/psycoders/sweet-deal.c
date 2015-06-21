#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,i,j,N,X;
    scanf("%d ",&t);
    while(t--)
    {
        scanf("%d %d ",&N,&X);
        int arr[N+1];
        int sum[N+1];
        arr[0]=0;
        sum[0]=0;
        for(i=1;i<=N;i++)
        {
            scanf("%d ",&arr[i]);
            sum[i]=sum[i-1]+arr[i];
        }
        for(i=0;i<=N;i++){
            for(j=1;j<=N-1;j=j+i;)
                if((sum[j]-sum[j]))
        }
    }

    return 0;
}
