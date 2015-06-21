#include<stdio.h>
int beforecross(int before[],int table[][21],int pivot);
int aftercross(int after[],int table[][21]);
int main()
{
    int before[11],after[11],table[21][21];
    int before_animal,after_animal,pivot,n,m,t,i,j,k,l,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);   //no of animal and xy pairs
        for(i=0;i<21;i++)
            for(j=0;j<21;j++)
            table[i][j]=0;
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&x,&y);
            table[x-1][y-1]=1;
        }
        for(i=0;i<n;i++)
            before[i]=i;
        animal_after=0;
        before_animal=n-1;
        while(animal_after!=n-1)
        {
            i=beforecross(before,table,before_animal);
            for(j=i;j<before_animal;j++)
                before[j]=before[j+1];
            after[animal_after]=i;
            i=aftercross(after,table);
            for(j=i;j<after_animal;j++)
                after[j]=after[j+1];
            if(i<animal_after)
            for(j=animal_before;j>=0;j--)
                befor[j+1]=before[j];
            befor[0]=i;

        }


    }
    return 0;
}
