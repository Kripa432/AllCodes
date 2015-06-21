#include<stdio.h>
#include<math.h>
int main()
{
     int t,N,i,j,k,l;
     long int arr[30];
     int K;
     long sum,size,mean;
    scanf("%d",&t);
    while(t--)
    {   sum=0;
        scanf("%d%d",&N,&K);
        l=0;
        for(i=0; i<N; i++)
        {
            scanf("%ld",&arr[i]);
            sum+=arr[i];

        }



        if(sum%K!=0)
            printf("\nno");
        else
        {
            mean=sum/K;
            size=pow(2,N);

            for(i=0;i<size;i++)
            {
                j=i;
                k=sum=0;
                while(j)
                {
                    if(j&1)
                     {
                         //printf("\n----k=%d  arr=%d----",k ,arr[k]);
                         sum+=arr[k];

                     }
                    k++;
                    j=j>>1;
                }
               // printf("\n>>>>>>sum=%d>>>>mean=%d",sum,mean);
                if(sum==mean)
                {
                    l++;
                    j=i;
                    k=0;

                    while(j)
                    {
                        if(j&1)
                        {

                            arr[k]=0;

                        }
                        k++;
                        j=j>>1;
                    }

                }

            }

            if(l==K)
                printf("\nyes");
            else
                printf("\nno");
        }
    }
    return 0;
}
