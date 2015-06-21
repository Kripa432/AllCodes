#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
int sortj(int arr[][2],int i,int j)
{
    int temp,min,pos,n;
    n=j;

    //sorting acc to arr[i]
        for(;i<n;i++)
        {
            min=arr[i][1];
            for(j=i+1;j<n;j++)
            {
                if(arr[j][1]<min)
                {
                    min=arr[j][1];
                    pos=j;
                }
            }
            if(min!=arr[i][1])
            {
                temp=arr[i][1];
                arr[i][1]=arr[pos][1];
                arr[pos][1]=temp;
            }
        }


}

int main()
{
    int t,max,min,i,rare,j,N,count,a,b,temp1,temp2;
    scanf("%d",&t);
    int arr[100001][2];
    while(t--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d %d",&arr[i][0],&arr[i][1]);
        }

        //sorting acc to arr[i][0]
        for(i=0;i<N;i++)
        {   rare=1;
            for(j=0;j<N-i-1;j++)
                if(arr[j][0]>arr[j+1][0])
            {
                temp1=arr[j][0];
                temp2=arr[j][1];
                arr[j][0]=arr[j+1][0];
                arr[j][1]=arr[j+1][1];
                arr[j+1][0]=temp1;
                arr[j+1][1]=temp2;
                rare=0;
            }
            if(rare)
                break;
        }

        //sorting acc to arr[i][1] where where a[i] is same
        int temp;
        for(i=0;i<N;i++)
        {
            temp=i;
            while(arr[i][0]==arr[i+1][0] && i+1 <N)
                i++;
            sortj(arr,temp,i+1);
        }
        count=0;


       for(i=0;i<N;i++)
        {   j=i+1;
            while((arr[i][1]>=arr[j][0]) && (j<N))
             {
                 j++;
                 if(arr[i][0]==arr[i+1][0] && (i+1)<N)
                    i++;
             }

            i=j-1;
            count++;

        }
        //for(i=0;i<N;i++)
        //{
          //  printf("%d %d\n",arr[i][0],arr[i][1]);
        //}


        printf("%d\n",count);
    }
    return 0;
}
