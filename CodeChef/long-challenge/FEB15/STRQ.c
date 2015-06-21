#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define SIZE 100000
int loc(int pos,int col,int arr[][4],int i)     //return location of element
{

    while(arr[i][col]<pos)
        i++;

   // printf("\nPrinting variable recived pos=%d col=%d i=%d arr[i][col]=%d",pos,col,i,arr[i][col]);
 //   printf("\nfunction returns loc-->%d\n",arr[i][col]);

    return i;
}
int loce(int pos,int col,int arr[][4],int i)     //return end location of element
{

    while(arr[i][col]<=pos)
        i++;

   // printf("\nPrinting variable recived pos=%d col=%d i=%d arr[i][col]=%d",pos,col,i,arr[i][col]);
 //   printf("\nfunction returns loc-->%d\n",arr[i][col]);

    return i;
}


int main()
{
    char a,b,str[SIZE];
    int  arr[SIZE][4];
    long long int count;
    int pos,L,R,Q,i,j,len,s1,s2,c,h,e,f,e1,e2,a1,b1;

    for(i=0; i<SIZE; i++) //memset
    {
        arr[i][0]=arr[i][1]=arr[i][2]=arr[i][3]=10000001;
    }
    scanf(" %s",str);
    c=h=e=f=-1;             //top indexes of array
    len=strlen(str);        //string length
    for(i=0; i<len; i++)
    {
        if(str[i]=='c')         //position of c into array
            arr[++c][0]=i;

        else if(str[i]=='h')    //position of h into array
            arr[++h][1]=i;

        else if(str[i]=='e')    //position of e into array
            arr[++e][2]=i;

        else
            arr[++f][3]=i;      //position of f into array


    }

    scanf("%d",&Q);     //no of querries
    while(Q--)
    {  // printf("\n-----------------------------query=%d---------------------",Q+1);
        count=pos=0;

        scanf(" %c %c %d %d",&a,&b,&L,&R);
        R--;
        L--;
        switch(a){
            case 'c':a1=0;break;
            case 'h':a1=1;break;
            case 'e':a1=2;break;
            case 'f':a1=3;break;
        }
        switch(b){
            case 'c':b1=0;break;
            case 'h':b1=1;break;
            case 'e':b1=2;break;
            case 'f':b1=3;break;
        }
        s1=loc(L,a1,arr,0);
        e1=loce(R,a1,arr,s1);

        s2=loc(L,b1,arr,0);
        e2=loce(R,b1,arr,s2);

        //printf("\ns1=%d e1=%d s2=%d e2=%d ",arr[s1][0],arr[e1][0],arr[s2][1],arr[e2][1]);
        for(i=s1;i<e1;i++){
          //      printf("\n----------------------i=%d------------------",i);
            for(j=s2;j<e2;j++){
           //     printf("\narr[i][a1]=%d  arr[j][b1]=%d",arr[i][a1],arr[j][b1]);
                if(arr[i][a1]<arr[j][b1])
                    count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
