#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
print(int a[][2],int size)
{   printf("\nArray is\n");
    int i;
    for(i=0;i<size;i++)
        printf("%d %d\n",a[i][0],a[i][1]);

}

swap(int a[][2],int pos,int i)
{
    int temp1,temp2;
    temp1=a[pos][0];
    temp2=a[pos][1];
    a[pos][0]=a[i][0];
    a[pos][1]=a[i][1];
    a[i][0]=temp1;
    a[i][1]=temp2;
}
sorti(int a[][2],int size){
    int i,j,temp,min,pos;
    for(i=0;i<size;i++){
        min=a[i][0];
        for(j=i+1;j<size;j++)
        if(min>a[j][0]){
            min=a[j][0];
            pos=j;
        }
        if(min!=a[i][0])
            swap(a,pos,i);

    }
}
sortj(int a[][2],int size){
    int i,j,k,temp,count,high,low,min,pos,temp2;
    for(i=0;i<size;i++){
        temp=i;
        while(a[i][0]==a[i+1][0] && i<size)
            i++;
            //selection sort
            for(j=temp;j<=i;j++)
            {   min=a[j][1];
                for(k=j;k<=i;k++)
                    if(min>a[k][1])
                    {
                        min=a[k][1];
                        pos=k;
                    }
                if(min!=a[j][1])
                {
                    temp2=a[j][1];
                    a[j][1]=a[pos][1];
                    a[pos][1]=temp2;
                }
            }


    }

}
intersect(int a[][2],int size)
{   int count=0,i,j;
    for(i=0;i<size;i++)
    {

        j=i+1;
        while(a[i][1]<a[j][0] && j<size)
            j++;
        count++;
        i=j;
    }
    return count;
}
int main(){
    int t,N,i,j,count,temp;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&N);
        int arr[N][2];
        for(i=0;i<N;i++)
            scanf("%d %d",&arr[i][0],&arr[i][1]);
        sorti(arr,N);
        sortj(arr,N);
        //N=merge(arr,N);
       // print(arr,N);
        printf("%d\n",intersect(arr,N));
    }

    return 0;
}
