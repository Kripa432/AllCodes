#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int INT(char *str)
{    int len=strlen(str);
	int res=0,i;
	for(i=0;i<len;i++)
		res=res*10+str[i]-'0';
	return res;

}
int isNum(char *str){
	int i;
	int len=strlen(str);
	for(i=0;i<len;i++)
		if(str[i]>='0' && str[i]<='9')
			continue;
		else
			return 0;
	return 1;
}

int main()
{	
    int i,j,c,len,num,temp,t,res, num1,num2,num3;
    char str1[21],str2[21],str3[21];
    char e;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s %c %s %c %s",str1,&e,str2,&e,str3);
    	if(isNum(str1)){
    		num1=INT(str1);
    		if(isNum(str2)){
    			num2=INT(str2);
    			num3=num1+num2;
    		}
    		else{
    			num3=INT(str3);
    			num2=num3-num1;
    		}
    	}else{
    		num2=INT(str2);
    		num3=INT(str3);
    		num1=num3-num2;
    	}
    	printf("%d + %d = %d\n",num1,num2,num3 );
    }

    return 0;
}
