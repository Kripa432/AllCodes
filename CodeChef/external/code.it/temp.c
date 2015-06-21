#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int i, j, min,pos,temp;
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<N;i++)
    {
        min=arr[i];
        for(j=0;j<N;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                pos=j;
            }
        }
        if(min!=arr[i])
        {
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
        }
        printf("---->%d",arr[i]);
    }
    for(i=0;i<N;i++)
        printf("   ====%d",arr[i]);

}
