#include<stdio.h>
#include<string.h>
int rem,i,j,k,l,min,temp,min,sum;
int swap(char *a,char *b){
	temp=*a;
	*a=*b;
	*b=temp;

}

int remd(char *str,int b,int size){
	rem=l=0;
	while(size--){
		rem=10*rem+str[l++]-'0';
		rem%=b;
	}
	return rem;
}
char* permute(char *a,int low,int high,int *B,int b,char *minstr){
	min=10000;
	for(i=0;i<high;i++){
//		printf("<i=%d>",i);
		sum=0;

		for(j=0;j<high;j++){

			swap(&a[i],&a[j]);

			//printf("--->%s\n",a);
			for(k=0;k<b;k++)
				sum+=remd(a,B[k],b);

			if(sum<min){
			min=sum;
			strcpy(minstr,a);
			}
			swap(&a[i],&a[j]);
		}
		//printf("<after i=%d>",i);
	}
	return minstr;
}
int main()
{
	char str[1000];
	char minstr[1000];
	int t,B[1000],len,i,N;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&str);
		scanf("%d",&N);
		len=strlen(str);
		for(i=0;i<N;i++)
			scanf("%d",&B[i]);
        if(len<20)
		printf("%s\n",permute(str,0,len,B,N,minstr));
		else
            printf("%s\n",str);
	}
	return 0;
}
