#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int N,a,b,jump,i,j,q;
    scanf("%d",&N);
    int arr[N+2];
    for(i=1;i<=N;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&q);
    while(q--)
    {   jump=1;
        scanf("%d%d",&a,&b);
        for(i=a+1;i<b;i++)
            if(arr[i]>arr[a])
        {   //printf("    =%d   ",arr[i]);
            jump=0;
            break;
        }
        if(jump)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
