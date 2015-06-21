#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{   int a,b,c;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a!=0 || b!=0 || c!=0){
            if((b-a)==(c-b))
                printf("AP %d\n",c+c-b);
            else
                printf("GP %d\n",c*c/b);
        }
        else
            break;
    }


    return 0;
}
