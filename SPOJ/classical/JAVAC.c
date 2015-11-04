#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    int i,j,c,len,num,temp,t,res;
    char str[301];
    char *ptr;
    while(scanf("%s",str)!=EOF){

    	ptr=str;
    	c=0;
    	j=0;
    	if(isupper(str[0]) || str[0]=='_')
    				c=j=1;
    	while(*ptr){
    		
    		if(*ptr=='_'){
    			c++;
    			if(*(ptr+1)=='_'){
    				j=c=1;
    				break;
    			}

    			if(j>0)
    				break;
    		}
    		if(isupper(*ptr)){
    			j++;
    			if(isupper(str[0]) || str[0]=='_')
    				c=j=1;
    			if(c>0)
    				break;
    		}
    		ptr++;
    	}
    	if(*(ptr-1)=='_')
    		c=j=1;
    	if(c>0 && j>0)
    		printf("Error!\n");
    	else if(c>0){
    		//c to java version
    		ptr=str;
    		while(*ptr){
    			if(*ptr=='_'){
    				*(ptr+1)=toupper(*(ptr+1));
    			}
    			else
    				printf("%c",*ptr );
    			ptr++;
    		}
    		printf("\n");
    	}
    	else {
    		//java to c version
    		ptr=str;
    		while(*ptr){
    			if(isupper(*ptr))
    				printf("_%c",tolower(*ptr) );
    			else
    				printf("%c",*ptr );
    			ptr++;
    		}
    		printf("\n");
    	}

    }

    return 0;
}
