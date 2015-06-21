#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000],mid,i,j,m,n;
    scanf("%s",a);
   increment(a);
   printf("a ret=%s ",a);
    int len=strlen(a);
    mid=len/2;
    i=mid-1;



    if(len%2==0)
        j=mid;
    else
        j=mid+1;

     m=i;n=j;
         while(i>=0)
         {

            printf("a[i]=%c  a[j]%c \n",a[i] ,a[j]);
            if(a[j]>a[i])
            {
                if(len%2==1)
                {
                   if(a[mid]!='9')
                    a[mid]+=1;break;
                }

                if(a[i]=='9' && a[j]=='9')
                {
                    i--;j++;
                }
                else
                {
                    a[i]+=1;break;
                }
            }
            else{break;}




         }
          for(;m>=0;)
                {
                    a[n++]=a[m--];
                }

         printf("%s",a);


}
int increment(char a[])
{
    long len=strlen(a);
    len--;
    do
    {   printf("a=%s ",a);
        if(a[len]!='9')
          {
              a[len]+=1;
              printf("a=%s ",a);
              return 0;

          }
        else
        {   printf("a=%s ",a);
            a[len--]='0';
        }
    }while(1);
}
