#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int temp;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}

int main()
{
    printf("%d",gcd(252,198));

    return 0;
}
