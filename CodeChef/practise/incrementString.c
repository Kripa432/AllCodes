#include<stdio.h>
#include<string.h>
int main()
{
    int increment(char *a,int,int);
    int i;
    char a[100];
    scanf("%s",a);
    int len=strlen(a);
    if(a[0]='9')
    {
        for(i=len;i>0;i--)
            a[i+1]=a[i];
            a[0]='0';
            len++;
    }


    increment(a,len-1,0);
    printf("%s",a);
    return 0;
}
int increment(char *a,int len,int d)
{   //go to end element
    for(;len-d>0;len--)
        a++;

    //increment
    while(1)
    {
        if(*a!='9')
        {
            *a=*a+1; //addition take place according to asci
            return 0;
        }
        else
        {   *a='0';    ;
            a--;}
    }
}
