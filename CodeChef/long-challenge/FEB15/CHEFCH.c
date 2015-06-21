#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t;
    int i,crt1,crt2,len;   //correct 1 and correct 2
    char str[100001];
    scanf("%d",&t);
    while(t--)
    {   i=crt1=crt2=0;
        scanf("%s",str);
        while(str[i])
        {
            if(str[i]!='+' && i&1)
                crt1++;
            else if(str[i]!='-' && !(i&1))
                crt1++;
            if(str[i]!='-' && i&1 )
                crt2++;
            else if(str[i]!='+' && !(i&1))
                crt2++;
            i++;
        }
        if(crt1<crt2)
            printf("%d\n",crt1);
        else
            printf("%d\n",crt2);
    }

    return 0;
}
