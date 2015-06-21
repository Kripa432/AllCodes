#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,N,K,num,i,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&N,&K);
        //printf("----k=%d %d",K&0,K&1);
       // for(i=0;i<K;i++)
           // scanf("%d",&num);
        //if(K==0)
        sum=N;
        sum=N*(N+1);
        sum/=2;
        //printf("    sum=%d",sum);
        if(sum%2==1)
            printf("\nMom");
        else
            printf("\nChef");

       /* else if(K&1)
        {
            printf("\nChef");
        }
        else
        {
            printf("\nMom");
        }
        */
    }

    return 0;
}
