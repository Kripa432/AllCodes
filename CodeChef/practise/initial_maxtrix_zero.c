#include<stdio.h>
int main()
{
    int arr[50][50];

    //arr[25][25]=5;
    //printf("%d",arr[25][25]);
    //arr[25][25]={0};
   // printf("%d",arr[2][5]);
    int i,j;
    for(i=0;i<50;i++)
    {
        printf("\n");
        for(j=0;j<50;j++)
            printf("%d ",arr[i][j]);
    }
    return 0;

}
