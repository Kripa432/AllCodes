#include<stdio.h>
int main()
{
    int t,i,j,k,arr[101],n,temp;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
            scanf("%d",&n);
            for(i=0;i<n;i++)
                scanf("%d",&arr[i]);

            for(i=0;i<4;i++)
            for(j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }


            printf("\nCase %d: %d",k,arr[n-1]+arr[n-2]+arr[n-3]);

    }
    return 0;
}
