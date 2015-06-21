#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{

    int t,N,i,j,a,b,min,max,count;
    scanf("%d",&t);
    while(t--)
    {   bool arr[4004]={false};
        max=count=0;

        min=4004;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d %d",&a,&b);
            a=a<<1;
            b=b<<1;
            for(j=a;j<=b;j++)
            {
                arr[j]=true;
            }
            if(min>a)
                min=a;
            if(max<b)
                max=b;
        }
        for(i=min;i<=max;i++)
        {
            while(arr[i]==true && i<=max)
                i++;
                count++;

            while(arr[i]==false &&i<=max)
                i++;
        }
        printf("\n%d",count);

    }
    return 0;
}
