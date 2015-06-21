#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int N,Q,a,b;
    scanf("%d %d",&N,&Q);
    int arr[N+1];
    int sum[N+1];
    char str[10];
    int i;
    arr[0]=0;
    for(i=1;i<=N;i++){
     scanf("%d",&arr[i]);
    sum[i]=sum[i-1]+arr[i];
    }
    while(Q--)
    {
        scanf("%s %d %d",str,&a,&b);
        printf("%d\n",sum[b]-sum[a-1]);

    }

    return 0;
}
