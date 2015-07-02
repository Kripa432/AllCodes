#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int rev(char str[]){
            char temp;
            int j=strlen(str)-1;
            int i=0;
            while(i<j){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                i++;
                j--;
            }


}

int add(char *num1,char *num2,char *res){
        long long int i,j,cy=0,temp;
        rev(num1);
        rev(num2);
        int len1=strlen(num1),len2=strlen(num2);
        /*making remaining space as zero*/
        for(i=len1;i<100;i++)
            num1[i]='0';
        for(i=len2;i<100;i++)
            num2[i]='0';
        /*core algorithm*/
        for(i=0;num1[i]!='0'  || num2[i]!='0' || cy !=0 || i<len1 || i<len2;i++){
            temp=num1[i]+num2[i]-'0'-'0'+cy;
            res[i]=temp%10+'0';
            cy=temp/10;
        }
        /*core algoritham ends*/
        res[i]=0;
        rev(res);
        
        
}

int subtract(char *num1,char *num2,char *res){
        long long int i,j,cy=0,temp;
        char p[101];
        int big=strcmp(num1,num2);
        //printf("big=%d\n",big );
        if(big<0){
            strcpy(p,num1);
            strcpy(num1,num2);
            strcpy(num2,p);
        }
        rev(num1);
        rev(num2);
        int len1=strlen(num1),len2=strlen(num2);
        /*making remaining space as zero*/
        for(i=len1;i<101;i++)
            num1[i]='0';
        for(i=len2;i<101;i++)
            num2[i]='0';
        /*core algorithm*/
        printf("len1=%d len2=%d\n", len1,len2);
        for(i=0;num1[i]!='0'  || num2[i]!='0' || i<len1 || i<len2;i++){
            temp=num1[i]-num2[i]+cy;
            cy=0;
            if(temp<0){
                cy=-1;
                temp+=10;
            }
            res[i]=temp+'0';
         //   printf("hey dude subtraction prgress\n");
            
            
        }
        if(big<0)
            res[i++]='-';
        res[i]=0;
               
        /*core algoritham ends*/
        
        rev(res);
        
        
}

int main()
{
    int i,j,c,len,num,temp,t,res;
    char num1[101];
    char two[]="2";
    
    while(scanf("%s",num1)!=EOF)
    {	char num2[101],res1[101],res2[101];
    	if(num1[0]=='1' && num1[1]==0){
    		printf("1\n");
    		continue;
    	}
    	strcpy(num2,num1);
    	add(num1,num2,res1);
    	subtract(res1,two,res2);
    	printf("%s\n",res2);
    }

    return 0;
}
