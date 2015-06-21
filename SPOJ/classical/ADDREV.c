#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>
#include<math.h>
#include<algorithm>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
int swap(char *a,char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}

void rev(char str[]){
	int j=strlen(str)-1;
	int i=0;
	while(i<j){
		swap(&str[i],&str[j]);
		i++;
		j--;
	}
}

int main()
{
    using namespace std;

 	long long int i,j,k,c,len,num,t,cy,temp;
    char num1[100],num2[100],res[100];
    cin>>t;
    while(t--)
    {	cy=0;
    	cin>>num1>>num2;
    	
    	int len1=strlen(num1),len2=strlen(num2);
    	for(i=len1;i<100;i++)
    		num1[i]='0';
    	for(i=len2;i<100;i++)
    		num2[i]='0';
    	
    	for(i=0;num1[i]!='0'  || num2[i]!='0' || cy !=0;i++){
    		temp=num1[i]+num2[i]-'0'-'0'+cy;
    		res[i]=temp%10+'0';
    		cy=temp/10;
    	}
    	
    	j=0;
    	while(res[j]=='0')
    		j++;
    	for(;j<i;j++)
    		printf("%c",res[j] );
    	printf("\n");

    }

    return 0;
}
