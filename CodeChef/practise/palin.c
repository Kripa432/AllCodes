#include<stdio.h>
int reverse(int);
int palin(int);
int prime(int);
int main()
{
    int num,rev;
    scanf("%d",&num);
    while(1)
    {

      rev=reverse(num);
      if(num==rev)
      {

        if(prime(num))
          {
               printf("%d",num);
                break;
          }
          else
          {
              num++;
          }
      }
      else{num++;}
    }
   return 0;
}
int reverse(int n)
{
    int rem=0,sum=0;
    while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    return sum;
}
int prime(int n)
{
    int i=2;
    for(;i<n/2;i++)
    if(n%i==0)
    {
        return 0;
    }
    return 1;

}
