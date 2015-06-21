#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int i,j,min,med,pos,N;
    scanf(" %d",&N);
    int arr[N];
    for(i=0;i<N;i++)
        scanf(" %d",&arr[i]);
    for(i=0;i<=N/2;i++){
        min=arr[i];
        for(j=i;j<N;j++)
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        if(min!=arr[i]){
           // arr[pos]=arr[i];
            //arr[i]=min;
            int temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
        }
        //printf("--->%d",arr[i]);
    }

    printf("%d",arr[(N-1)/2]);

    return 0;
}
