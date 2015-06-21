#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,max,min,i,rare,j,N,count,a,b;
    scanf("%d",&t);
    while(t--)
    {   bool arr[2001][2]={false};

        bool con;
        max=count=0;
        min=20001;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {   rare=0;
            scanf("%d %d",&a,&b);

            status=true;
            for(j=a; j<=b; j++)
            {
                if(arr[j][0]==true )
                {   count++;

                    if(arr[j][1]==false)
                    {

                    }

                }
                else
                {
                    arr[j][0]=true;
                    if(j+1<b)
                        arr[j][1]=true;

                }
            }
        }
        printf("%d\n",N-count);
    }
    return 0;
}
