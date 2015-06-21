#include<stdio.h>
#include<string.h>
void quickSort(char arr[], int left, int right) {
         int i = left;
         int j = right;
         int temp;
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
         if (left < j)
            quickSort(arr, left, j);
         if (i < right)
            quickSort(arr, i, right);
      }

int main()
{
    int t,n,p,q,i,resl,j;
    char arr[1001];
    char res[10001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",arr);
        scanf("%d %d",&p,&q);
        for(i=0;i<p;i++)
            strcat(res,arr);
        resl=p*strlen(arr);
        resl--;
        quickSort(res,0,resl);
       // printf("\n--->%s",res);


        for(i=0;i<q;i++)
        {
            scanf("%d",&n);
            if(n-1>resl)
                printf("\n-1");
            else
            printf("\n%c",res[n-1]);

        }
    }
    return 0;
}
