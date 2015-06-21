#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        i=log (n)/log (2);
        i++;
        while(i--)
        {
            if(n&(1<<i))
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
