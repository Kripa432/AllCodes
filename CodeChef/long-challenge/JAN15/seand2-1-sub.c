#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char minstr[1000];
int min=1000000;
int remd(char str[],int b)   //function returns remainder of char a%b
{
	int rem=0,i=0;
	int len=strlen(str);

	while(len--)
	{
		rem=rem*10+(str[i]-'0');
		rem%=b;
		i++;
	}
	return rem;
}



char* permute(char *a, int i, int n,int b,int B[],int *min)
{
   int j;
   if (i == n)
    {
        int sum=0,k;
            for(k=0;k<b;k++)
			 sum+=remd(a,B[k]);


         if(sum<=*min)
            {
                *min=sum;
                if(strcmp(a,minstr)>0)
                strcpy(minstr,a);
            }
      // printf("sum of remainder=%d AND min=%d AND string=%s\n",sum,min,a);
    }
   else
   {
        int sum;
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));

          permute(a, i+1, n,b,B,min);



          swap((a+i), (a+j)); //backtrack

        }
       return minstr;
   }

}

swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{	int t,len,i,j,min,sum,N;
	char str[1000];
    int B[1000];
	scanf("%d",&t);
	while(t--){
        min=1000000;
		scanf("%s",str);

		scanf("%d",&N);

		for(i=0;i<N;i++)
            scanf("%d",&B[i]);
		len=strlen(str);
        if(len<12)
        printf("%s\n",permute(str,0,len-1,N,B,&min));
        else
            printf("%s\n",str);
	}
	return 0;
}
