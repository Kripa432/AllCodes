#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
int temp,i,j;

int quickSort(int arr[],int left,int right,int k)
{        i = left;
        j = right;

         int pivot = arr[(left+right)/2];
         while (i <= j) {
            while (arr[i] < pivot)
               i++;
            while (arr[j] > pivot)
               j--;
            if (i <= j) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
               i++;
               j--;
            }
         }
         if (left < j && k<=j)
            quickSort(arr, left, j,k);
         if (i < right && k>=i)
            quickSort(arr, i, right,k);
}




int main()
{
    int t,x,i,count,l,max,r,k,type,ele,top=0;


    scanf("%d",&t);
     int arr[t+1];
    while(t--)
    {
        scanf("%d",&type);
        if(type==0)
            scanf("%d",&arr[++top]);
        else if(type==1)
        {
                    max=0;
                    scanf("%d%d%d",&l,&r,&x);
                    for(i=l;i<=r;i++)
                        if((arr[i]^x)>max)
                            {
                                max=(arr[i]^x);
                                ele=i;
                            }
                    printf("\n%d",arr[ele]);
        }
        else if(type==2)
        {
            scanf("%d",&k);
            top=top-k;
        }
        else if(type==3)
        {   count=0;
            scanf("%d%d%d",&l,&r,&x);
            for(i=l;i<=r;i++)
                if(arr[i]<=x)
                    count++;
            printf("\n%d",count);
        }
        else if(type==4)
        {
            scanf("%d%d%d",&l,&r,&k);
            int sor[r-l+2];
            for(i=l;i<=r;i++)
                           sor[i-l+1]=arr[i];

            quickSort(sor,1,r-l+1,k);
            printf("\n%d",sor[k]);

        }
    }

    return 0;
}
