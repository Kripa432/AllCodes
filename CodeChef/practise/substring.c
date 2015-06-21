#include<stdio.h>
int main()
{
    int t,i,j,len,flag;
    char arr[11];
    scanf("%d",&t);
    while(t--)
    {   flag=0;
        scanf("%s",arr);
        len=strlen(arr);
        for(i=0;i<len/2;i++)
            if(arr[i]!=arr[len-1-i])
        {
            flag=1;
            break;
        }
        if(flag)
            printf("\nNO");
        else
            printf("\nYes");
    }
    return 0;
}
