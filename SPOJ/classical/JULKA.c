#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))


int swap(char *a,char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}

int rev(char str[]){
	int j=strlen(str)-1;
	int i=0;
	while(i<j){
		swap(&str[i],&str[j]);
		i++;
		j--;
	}
}

int add(char num1[],char num2[],char res[]){
	int i,cy,temp,len1,len2;
	len1=strlen(num1);
	len2=strlen(num2);
	
	rev(num1);
    rev(num2);
    
    for(i=len1;i<100;i++)
    	num1[i]='0';
    for(i=len2;i<100;i++)
    	num2[i]='0';
    cy=0;
    for(i=0;num1[i]!='0'  || num2[i]!='0' || cy !=0;i++){
    	temp=num1[i]+num2[i]-'0'-'0'+cy;
    	res[i]=temp%10+'0';
    	cy=temp/10;
    }
    rev(res);
    return i;
    

}

int main()
{
    int i,j,k,c,len,num,temp,t,cy;
    char num1[101],num2[101],res[101];
    t=10;
    while(t--)
    {
    	scanf("%s",num1);
    	scanf("%s",num2);
    	k=add(num1,num2,res);
    	for(i=0;i<k;i++)
    		printf("%c",res[i] );
    	


    }

    return 0;
}
