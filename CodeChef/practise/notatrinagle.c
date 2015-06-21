#include<stdio.h>
int main()
{
    int n,arr[2001],i,j,k,tri,min,pos;//triples tri
    scanf("%d",&n);
    while(n!=0)
    {   tri=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        //sorting
        for(i=0;i<n-1;i++)
        {   min=arr[i];
            for(j=i+1;j<n;j++)
            if(arr[j]<min)
            { min=arr[j];
              pos=j;
            }
            if(arr[i]!=min)
            {
                int temp=arr[i];
                arr[i]=arr[pos];
                arr[pos]=temp;
            }


        }
        //for(i=0;i<n;i++)
          //  printf("%d ",arr[i]);
       for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        for(k=n-1;k>j;k--)
        {
            if((arr[i]+arr[j])<arr[k])
                tri++;
            else
                break;
        }

        printf("%d\n",tri);
        scanf("%d",&n);
    }
    return 0;
}
