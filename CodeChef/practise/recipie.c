#include<stdio.h>
int main()
{
    int t,min,i,j,n,flag;
    int arr[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        //minumum element
        min=arr[0];
        for(i=1;i<n;i++)
            if(arr[i]>min)
                min=arr[i];
        //dividing
        for(i=min;i>=2;i--)
         {
             flag=0;
            for(j=0;j<n;j++)
            if(arr[j]%i!=0)
            flag=1;
            if(!flag)
            for(j=0;j<n;j++)
            arr[j]=arr[j]/i;
         }
         for(i=0;i<n;i++)
            printf("%d ",arr[i]);
         printf("\n");
    }
    return 0;
}
