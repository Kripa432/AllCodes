#include<stdio.h>
int main()
{
    int t,max,maxtemp,arr[100],n,i,j,pos;
    scanf("%d",&t);
    while(t--)
    {   max=0;pos=0;
       scanf("%d",&n);
       for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
       for(i=0;i<n;i++)
       {    maxtemp=0;
            for(j=0;j<n;j++)
             {
                 if(arr[j]==arr[i])
                    maxtemp++;
             }
             if(maxtemp>max)
               {
                   max=maxtemp;
                   pos=i;
               }
            else if(max==maxtemp)
            {
                if(arr[i]<arr[pos])
                    pos=i;

            }
       }
       printf("%d %d\n",arr[pos],max);
    }
    return 0;
}
