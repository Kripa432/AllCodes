#include<stdio.h>


int main()
{
    int t,A,B,C,tcents,it,i,max,temp,maxa,maxb;
    scanf("%d",&t);
    while(t--)
    {
        i=it=0;
        scanf("%d %d %d",&A,&B,&C);
        maxa=A;
        maxb=B;

        while((B>=C || A>0)&& i<10000)
        {   i++;
            if(B<C)
            {
                A--;
                B=B+100;
            }
            B-=C;
            temp=B;
            B=A;
            A=temp;
            //printf("\na--->%d   %d--------------",A,maxa);
            if(A>maxa)
            {   //printf("\na--->%d   %d",A,maxa);
                maxa=A;
                it=i;

            }
            else if(maxa==A && B>maxb)
            {   it=i;
                maxb=B;
                //printf("\nb--->%d",maxb);
            }



        }
        printf("\n%d",it);

    }
    return 0;
}
