#include<stdio.h>
int main()
{
    int t,N,arr[100001],i,j,k,ele;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);
        for(i=0;i<100001;i++)
            arr[i]=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&ele);
            arr[ele]=1;
        }
        for(i=0 ,k=0;i<100001;i++)

        if(arr[i])
            k++;
        printf("\n%d",k);
    }
    return 0;
}
