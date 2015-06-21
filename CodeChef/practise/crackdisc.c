#include<stdio.h>
#include<string.h>
int main()
{
    int p,m,i,j,flag,len,len1;
    scanf("%d",&p);
    char S[1001],T[1001],arr[1001][5];
    while(p--)
    {
        scanf("%s",S);
        scanf("%s",T);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%s",arr[i]);

        }
        len=strlen(S);
        len1=strlen(T);
        if(len1!=len)
        {    printf("\nN0");
            continue;
        }

        flag=1;
        for(i=0;i<len;i++)
        {
            while(S[i]==T[i] && i<len)
                i++;

            for(j=0;j<m;j++)
            {
                if(arr[j][0]==S[i])
                    if(arr[j][3]==T[i])
                    {

                        break;
                    }

            }
            if(j==m)
            {
                flag=0;
                break;
            }

        }
        if(flag)
            printf("\nYES");
        else
            printf("\nN0");
    }
    return 0;
}
