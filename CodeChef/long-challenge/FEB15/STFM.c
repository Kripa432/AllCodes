#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
int factp(int p,int m)    //calculate X!
{
    int temp,fact=1,num=p;
    while(num)
    {   if(fact>m)
            fact%=m;
        if(num>m)
            num%=m;
        fact*=num;

        num--;
    }

    return  (fact%m);
}

int calc(int ele,int m)
{
    int i,sum=0;
    for(i=1; i<=ele; i++) //calc  2*(2!+x)+ ......+pi*(pi!+pi)
    {
        if(sum>m)
            sum%=m;
       sum+=i*(factp(i,m)+ele);
       // sum+=(i%m*((factp(i,m)%m+ele%m)%m))%m;

    }
    return sum%m;
}

int main()
{
    int n,m,i,j,temp,sum,max,ele;                     //no of element ,modulo m,element

    scanf("%d %d",&n,&m);
    sum=0;

    for(i=0; i<n; i++)              // F(p1) + F(p2) + ... + F(pn)
    {
        scanf("%d",&ele);
        temp=calc(ele,m);
        if(sum+temp>m)
            sum=(sum%m+temp%m)%m;
        else
            sum+=temp;
    }
    printf("%d\n",sum);
    return 0;
}
