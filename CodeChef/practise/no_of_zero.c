#include<stdio.h>
main()
{
    long int fact=1,z,q,r;
    long int num;
    long  int t;
    scanf("%ld",&t);
    while(t--)
    {   scanf("%ld",&num);
        fact=1;
        q=num;
        z=0;
        while(q)
        {   r=q;
            while(r%10==5)
            {
                z++;
                r=r/10;
            }
            r=q;
            while(r%10==0)
            {
                z++;
                r=r/10;
            }

             q--;
        }
        printf("%ld",z);
    }
    return 0;
}
