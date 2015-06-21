#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int t,N,i,j,cheater,id;

    scanf("%d",&t);
    while(t--)
    {   int arr[1002]={0};
        cheater=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&id);
            if(!arr[id])
                arr[id]=1;
            else if(arr[id]==1)
                {   arr[id]++;
                    cheater++;}
            else
                arr[id]++;
        }
        printf("%d\n",cheater);
    }

    return 0;
}
