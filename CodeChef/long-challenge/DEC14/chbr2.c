#include<stdio.h>
#include<math.h>
int main()
{
    int N,arr[101],fact=1,i,j,k,l,x,y,z,flag,pos,bal=0;
    unsigned long long int sum;
    int st[101],top=0;
   unsigned long long  int e=0;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    unsigned long long int size=pow(2,N);
    for(i=0;i<size;i++)
    {
        j=i;
        k=sum=x=top=0;
        while(j)
        {   if(j&1)
            {sum+=arr[k];
            st[top++]=arr[k];

            }
            k++;
            j=j>>1;
        }
        if(sum!=0 || top&1)
            continue;
        else
        {
                for(k=0;k<top;k++)
                {
                    while(st[k]<0 && k<top)
                        k++;
                    l=k-1;
                    while(st[l]==0 && l>=0)
                        l--;
                    if(st[l]==-st[k])
                    {
                            st[l]=st[k]=0;
                    }

                }
                for(k=0;k<top;k++)
                    if(st[k]!=0)
                {
                    break;
                }
                if(k==top)
                    e++;
        }
    }
    printf("\n%d",e);

    return 0;

}
