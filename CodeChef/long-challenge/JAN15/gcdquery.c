#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a% b);
}

int main()
{
    int t,N,Q,i,L,R,result,prev;
    int arr[100001];
    int brr[100001];
    int crr[100001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&N,&Q);

        for(i=0; i<N; i++)
        {
            scanf("%d",&arr[i]);
            if(i)
            {

                brr[i]=gcd(arr[i],brr[i-1]);

            }
            else
            {
                brr[0]=arr[0];

            }
                /* dynamic programming*/
        }
        for(i=N-1;i>=0;i--)
        {
            if(i!=N-1)
                crr[i]=gcd(arr[i],crr[i+1]);
            else
                crr[N-1]=arr[N-1];
        }



        while(Q--)
        {
            scanf("%d %d",&L,&R);
            L--;
            R--;
           if(L==0)
                result=crr[R+1];
           else if(R==N-1)
                result=brr[L-1];
            else
                result=gcd(brr[L-1],crr[R+1]);

            printf("%d\n",result);
        }

    }

    return 0;
}
