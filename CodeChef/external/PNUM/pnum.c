#include<stdio.h>
int main(){
	int t,num;
	char str[5];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&num);
		scanf("%s",str);
		scanf("%d",&num);
		if(str[0]=='o'){
			num/=2;
			num++;
		}else
			num/=2;
		printf("%d\n",num);
	}
	return 0;
}
