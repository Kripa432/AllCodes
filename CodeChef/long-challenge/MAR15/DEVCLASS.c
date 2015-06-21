#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int t;
    int i,type,len,B,G,change;
    char str[100005];
    scanf("%d",&t);
    while(t--)
    {   B=G=change=0;
        scanf("%d %s",&type,str);
        len=strlen(str);

        for(i=0;i<len;i++)
            if(str[i]=='B')
                B++;
            else
                G++;
        if(B-G==1){
            for(i=0;i<len;i++)
                if(i%2==0){
                        if(str[i]!='B')
                            change++;

                }else{
                        if(str[i]!='G')
                            change++;
                }

        }else if(G-B==1){
            for(i=0;i<len;i++)
                if(i%2==0){
                        if(str[i]!='G')
                            change++;

                }else{
                        if(str[i]!='B')
                            change++;
                }

        }else if(G==B){
            int min1=0,min2=0;
            for(i=0;i<len;i++)
                if(i%2==0){
                        if(str[i]!='B')
                            min1++;

                }else{
                        if(str[i]!='G')
                            min1++;
                }

            for(i=0;i<len;i++)
                if(i%2==0){
                        if(str[i]!='G')
                            min2++;

                }else{
                        if(str[i]!='B')
                            min2++;
                }
            if(min1<min2)
                change=min1;
            else
                change=min2;

        }else{
        change=-2;
        }
        printf("%d\n",change/2);

    }

    return 0;
}
