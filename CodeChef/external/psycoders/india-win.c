#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
int setb(int num){
    int count=0;
    while(num){
        if(num&1)
            count++;
        num=num/10;
    }
    return count;
}
int main()
{
    int t,ele,res,x,i;
    scanf("%d",&t);
    while(t--)
    {   res=0;
        for(i=0;i<15;i++)
        {
            scanf("%d",&ele);
            res=(res^ele);
        }
        scanf("%d",&x);
        if(setb(res)>setb(x))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
