#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,t,m=0;
    char s[201];
    scanf("%d",&t);
    while(t--)
    {   m=0;
        scanf("%s",s);
        l=strlen(s);

        for(i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1])
            {   m++;
                i++;
            }
            else
                m++;
        }

          if(l>1)
          {
              if(s[l-1]!=s[l-2])
            m++;
          }
          if(l==1)
            m=1;
        printf("%d",m);
    }
    return 0;
}
