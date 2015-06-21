#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,N,i,dist,ele,max;

    int arr[100001];
    scanf("%d",&t);
    while(t--){
        for(i=0;i<100001;i++)
            arr[i]=0;

        dist=-1;
        scanf("%d",&N);

        for(i=0;i<N;i++){
            scanf("%d",&ele);
            arr[ele]++;
        }
        max=0;
        for(i=0;i<100001;i++){
            if(max<arr[i])
                max=arr[i];
        }
        printf("%d\n",N-max);
    }

    return 0;
}
