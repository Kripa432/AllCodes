#include<stdio.h>
#include<string.h>
main()
{
    char b[101]="0",a[100];



    scanf("%s",a);
    strcat(b,a);

    printf("\nafter cat%s",b);
    increment(b);

    printf("\n%s",b);
}
int increment(char a[])
{
    long len=strlen(a);
    len--;
    do
    {
        printf("a[len]=%c ",a[len]);
        if(a[len]!='9')
        {
            a[len]+=1;
            printf("a[len]=%c ",a[len]);
            return 0;

        }
        else
        {
            printf("a[len]=%c ",a[len]);
            a[len--]='0';
        }
    }
    while(1);
}
