#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,N,i,j,max,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);
        int arr[N][2];
        for(i=0;i<N;i++)
            arr[i][0]=arr[i][1]=0;
        for(i=0;i<N;i++)
            scanf("%d",&arr[i][0]);
        for(i=0; i<N; i++)
        {   flag=1;
            max=arr[i][0];
            for(j=i+1;j<N;j++){
                if(flag){
                    if(max>arr[j][0])
                        arr[i][1]++;
                    else
                    {   arr[i][1]++;
                        flag=0;
                        max=arr[j][0];
                    }
                }
                else{
                    if(arr[j][0]>max)
                    {
                            arr[i][1]++;
                            max=arr[j][0];
                    }
                }

            }

        }
        for(i=0;i<N;i++)
            printf("%d ",arr[i][1]);
        printf("\n");
    }

    return 0;
}
