#include<stdio.h>
int main()
{   unsigned int i,num;
        for(num=2;num<=100;num++)
        {unsigned flag=1;
        for(i=2;i<num;i++)
        if(num%i==0)
            flag=0;
        if(flag)
        printf("%d ",num);
        }
        return 0;
}
