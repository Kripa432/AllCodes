#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,N,K,i,j,k,size,sum,current,num;
    int arr[1000000001];       // 1 to N array where arr[i]=i;
    int brr[1000000001];       //sum brr[sum]=sum is possilbe
    int crr[1000000001];
    scanf("%d",&t);
    while(t--)
    {   current=0;
        memset(brr,0,100001);
        memset(crr,0,100001);        //
        scanf("%d %d",&N,&K);
        size=pow(N,2);

        for(i=1;i<=N;i++)
            arr[i]=i;

        for(i=0; i<K; i++)
        {
            scanf("%d",&num);
            arr[num]=0;
        }



        for(i=1;i<size;i++)
        {
           // printf("\n{ ");
            k=0;
            sum=0;
            for(j=i;j>0;j=j>>1)
            {

                if(j&1)
                {
                   // printf(" %d ",arr[k+1]);
                    sum+=arr[k+1];
                }
                k++;
            }

            //printf("}");
          //printf("%d",sum);

            if(!brr[sum])
               {
                   brr[sum]=1;
                  // printf("\n%d",sum);
               }
               crr[i]=sum;
        }



            i=1;
            while(brr[i]==1)
            {
                i++;
                //printf("%d",crr[i]);
            }

            if(i&1)
                printf("\nChef");
            else
                printf("\nMom");

//            for(i=1;i<=N;i++)
  //              printf("   %d   ",arr[i]);
    }

    return 0;
}
