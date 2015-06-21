#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t,count,i,j,len1,len2;
    char str1[1001],str2[1001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",str1,str2);
        len1=strlen(str1);
        len2=strlen(str2);
        if(len1!=len2)
            printf("-1\n");
        else{
            count =0;
            for(i=0;i<len1;i++)
                if(str1[i]!=str2[i])
                count++;
            printf("%d\n",count);
        }
    }

    return 0;
}
