#include<string.h>
#include<stdio.h>
int main()
{
    char s1[100001],s2[100001],temp[100001];
    int max,l1,l2,i,j,k=0,t,flag;
    scanf("%d",&t);
    while(t--)
    {   scanf("%s %s",s1,s2);
        l1=strlen(s1);
        l2=strlen(s2);
        if(l1<l2)
        {   strcpy(temp,s1);
            strcpy(s1,s2);
            strcpy(s2,temp);

        }

        for(i=0;i<l1 && i<l2 ;i++)
        {   flag=0;
            max=s2[i];
            for(j=i+1;j<l1 && j<l2;j++)
            if(s2[j]>max)
            {   max=s2[j];
                int temp=s2[j];
                s2[j]=s2[i];
                s2[i]=temp;

            }
            if(s1[i]<max)

                {s1[k++]=max;}
        }
        printf("%s",s1);



    }

    return 0;
}
