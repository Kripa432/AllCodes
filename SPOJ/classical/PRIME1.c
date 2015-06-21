#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#include<malloc.h>
#define SIZE 32000

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    int i,j,k,c,len,num,temp,t,l,r,flag;

    int prm[16005];
    num=0;              //no of primes in list
    prm[num++]=2;       //2 is the first prime no
    for(i=3;i<=SIZE;i+=2){ //SIZE is the biggest number
        flag=1; 
        int cap=sqrt(i)+1;
        for(j=0;j<num;j++){
            if(prm[j]>=cap) 
                break;
            if(i%prm[j]==0)
                flag=0;
            break;
        }
        if(flag) prm[num++]=i;
    }
  //printf("size of prime num=%d\n",num );

    scanf("%d",&t);
    while(t--)
    {   

        scanf("%d %d",&l,&r);
        if(l<2) 
            l=2;

      for(;l<=r;l++){
        flag=1;
        temp=sqrt(l);
        for(i=0;prm[i]<=temp;i++)
            if((l%prm[i])==0){
                flag=0;
                break;
            }
        if(flag)
            printf("%d\n",l );
      }
        printf("\n");

    }

    return 0;
}
