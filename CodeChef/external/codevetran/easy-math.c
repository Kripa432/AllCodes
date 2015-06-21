#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t;
    int N,K,i,max,ele,mod,fact;
    scanf("%d",&t);
    while(t--)
    {   max=0;
        scanf("%d %d",&N,&K);

        for(i=0;i<K;i++){
            scanf("%d",&ele);
            if(ele>max)
                max=ele;
        }
        mod=0;
        fact=1;
        for(i=N;i>0;i--){
            fact*=N;
            if(fact>mod){
                if(fact)
            }
        }
        printf("%d\n",mod);
    }

    return 0;
}
