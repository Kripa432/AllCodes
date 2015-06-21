#include<stdio.h>
int main()
{
    int t,S,E,n,i,part;
    long int tstart,tend;
    scanf("%d",&t);
    while(t--)
    {   part=1;
        scanf("%d %d",&S,&E);//start time end time of contest
        scanf("%d",&n);     //no of task
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld",&tstart,&tend); //start and end time of task
            if(!(tstart<S && tend<=S || tstart>=E))
                part=0;
        }
        if(part)
            printf("\nYES");
        else
            printf("\nNO");
    }
    return 0;

}
