/*
codejam proble light camera maythem
sort acc to aar[i]
in same i sort acc to arr[i][j]

*/
int sorti(int arr[][2],int j,int i)
{
    int temp,min,pos,n;
    n=j;

    //sorting acc to arr[i]
        for(;i<n;i++)
        {
            min=arr[i][0];
            for(j=i+1;j<n;j++)
            {
                if(arr[j][0]<min)
                {
                    min=arr[j][0];
                    pos=j;
                }
            }
            if(min!=arr[i][0])
            {
                temp=arr[i][0];
                arr[i][0]=arr[pos][0];
                arr[pos][0]=temp;

                temp=arr[i][1];
                arr[i][1]=arr[pos][1];
                arr[pos][1]=temp;
            }
        }


}
int sortj(int arr[][2],int i,int j)
{
    int temp,min,pos,n;
    n=j;

    //sorting acc to arr[i]
        for(;i<n;i++)
        {
            min=arr[i][1];
            for(j=i+1;j<n;j++)
            {
                if(arr[j][1]<min)
                {
                    min=arr[j][1];
                    pos=j;
                }
            }
            if(min!=arr[i][1])
            {
                temp=arr[i][1];
                arr[i][1]=arr[pos][1];
                arr[pos][1]=temp;
            }
        }


}





#include<stdio.h>
int main()
{
    int count,t,arr[10000][2],n,i,j,temp,min,pos;
    scanf("%d",&t);
    while(t--)
    {   count=1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d %d",&arr[i][0],&arr[i][1]);
        sorti(arr,n,0);

        for(i=0;i<n;i++)
        {
            temp=i;
            while(arr[i][0]==arr[i+1][0] && i+1 <n)
                i++;
            sortj(arr,temp,i+1);
        }


        for(i=0;i<n-1;i++)
            if(arr[i][0]==arr[i+1][0])
            {
                for(j=i+1;j<n-1;j++)
                   {
                        arr[j][0]=arr[j+1][0];
                        arr[j][1]=arr[j+1][1];
                   }
                if(arr[i][0]==arr[i+1][0])
                    i--;
                n--;

            }
        if(0)
        for(i=0; i<n; i++)
        {
            printf("\n%d %d",arr[i][0],arr[i][1]);
        }
        for(i=0;i<n-1;i++)
        {
            if(arr[i][1]<arr[i+1][0])
                count++;
        }
        //sorting for j in same if

    }

    return 0;
}
