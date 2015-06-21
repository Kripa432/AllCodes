#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int cur,next,len,i;
    char str[1001];
    scanf("%d %s",&cur,str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='L')
        {
            if(cur&1)
                cur++;
            cur/=2;
        }
        else
        {
            cur=cur*2+11;
        }

    }
     printf("\n%d",cur);

    return 0;
}
