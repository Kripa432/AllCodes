#include<stdio.h>
#include<math.h>
int main()
{
    int N,arr[101],fact=1,i,j,k,l,y,z,flag,pos,bal=0;
    int sum;
    int st[51],top=-1;
    int e=0;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    //removing unecessary element
    for(i=0;i<N;i++)
    {   flag=0;
       if(arr[i]<0)
       {
         for(j=N-1;j>i;j--)
             if(arr[i]==-arr[j])
         {
             flag=1;
             break;
         }

       }
       else
       {
           for(j=0;j<i;j++)
             if(arr[i]==-arr[j])
         {
             flag=1;
             break;
         }

       }
       if(!flag)
       {
           arr[i]=0;
       }

    }
    for(i=0;i<N;i++)
       {    //printf("---->arr[i]=%d\n",arr[i]);
           if(arr[i]==0)
           {
              for(j=i;j<N-1;j++)
                arr[j]=arr[j+1];
                N--;
           }
           if(arr[i]==0)
           {
               i--;
           }

       }
       if(arr[N-1]==0)
        N--;
         //for(i=0;i<N;i++)
        //printf(" %d ",arr[i]);
        //unecessary element removed
        //printf("\nunecessary element removed");
        int size=pow(2,N/2);

        for(i=0;i<N;i++)
        {
            while(arr[i]<0 && i<N)
                i++;
                j=i-1;
            while(!(arr[j]==-arr[i] && arr[j]!=0) &&j>=0)
            {       if(arr[j]!=0)
                    e++;
                    j--;

            }
            arr[i]=arr[j]=0;
        }
        //CAL FACTORIAL OF COMBINATION
        for(i=0;i<=N/2;i++)
        {
            fact=1;
            j=N/2;;
            while(j--)
            {
                fact=fact*(j+1);
            }
            j=i;
            while(j--)
            {
                fact=fact/(j+1);
            }
            j=N/2-i;
            while(j--)
            {
                fact=fact/(j+1);
            }

            if(i>1)
            {
              if(fact>=e)
                    sum=sum-e++;
              else
                    sum=sum-fact;
            }
            sum+=fact;
            //printf("\n------->%d<-----",fact);

        }


        printf("\n%d",sum);

    return 0;

}
