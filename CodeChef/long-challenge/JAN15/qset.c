#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
int sum1;
int substrsum(int arr[],int low,int high)
{
    if(low<=high)
    {
        //printf("\narr[low]=%d & low=%d",arr[low],low);
        //printf(" sum_fun=%d >",(arr[low]+substrsum(arr,low+1,high)));

        int sum= (arr[low]+substrsum(arr,low+1,high));
        //printf("  %d  ",sum);
        return sum;
    }
    else return 0;

}

int main()
{
    int t,sum,M,N,sizstr,type,loc,val,count,x,y,i,j,dif,l;

    int arr[100002];
    char str[100001];
    int tsum[100001]= {0};

    scanf("%d %d",&N,&M);
    scanf("%s",str);
    sizstr=strlen(str);

    //for(i=1; i<=sizstr; i++)
        //arr[i]=str[i-1]-48;

    tsum[1]=str[0];
    for(i=2;i<=sizstr;i++)
    {

            tsum[i]=str[i-1]-'0'+tsum[i-1];
    }

//      for(i=1;i<=sizstr;i++)
  //          printf(" %d ",tsum[i]);






    //for(i=1;i<=sizstr;i++)
    //printf("%d ",arr[i]);
    while(M--)
    {
        scanf("%d",&type);
        if(type==1)
        {
            scanf("%d %d",&loc,&val);

            dif=val-str[loc-1]+'0';


            for(i=loc;i<=sizstr;i++)
                tsum[i]+=dif;
            //printf("array after update\n");
           // for(i=1;i<=sizstr;i++)
            //	printf("%d ",tsum[i]);

        }
        else
        {
            count=0;
            scanf("%d %d",&x,&y);
            for(i=0; i<=(y-x+1); i++)
            {

                for(j=x; j<=y-i; j++)
                {
                    //printf("\nfor j=%d ",j);
                    sum=tsum[j+i]-tsum[j-1];
                    //printf("\n-----sum=%d",sum);
                    if(sum%3==0)
                    {
                        count++;
                    }
                }

            }
            printf("\n%d",count);
        }
    }


    return 0;
}
