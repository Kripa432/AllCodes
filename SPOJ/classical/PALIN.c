#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

char str[1000001];
int palin(char *arr,int cur){
	int i=(cur-1)/2;
	int j=cur/2;
	//printf("i=%d j=%d\n",i,j );
	while(1){
		
		if(arr[i]<=arr[j]){
			if(arr[i]!='9'){
				arr[i]++; 
				return 0;
			}else 
				arr[i]='0';
		}else 
			return 0;
		i--;
		j++;
		
		if(i<0){

			return -1;
		}

	}
}
	

	int main()
	{
		int i,j,c,len,num,temp,t,res,cur;

		scanf("%d",&t);
		while(t--)
		{
			scanf("%s",str);
			len=strlen(str);
			temp=palin(str,len);
			for(i=0,j=len-1;i<j;i++,j--)
				str[j]=str[i];
			
			if(temp==-1){
				str[len-1]='1';
				printf("1");

			}
			printf("%s\n",str );
		}

		return 0;
	}
