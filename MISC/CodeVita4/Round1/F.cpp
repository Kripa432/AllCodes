#include<bits/stdc++.h>

using namespace std;

long long int f[100];

int inc(char *c,int num){
	num=num%26;
	if(isupper(*c)){
		if(*c+num<='Z'){
			*c=*c+num;
		}else{
			num=num-('Z'-*c);
			*c='A'+num-1;
		}

	}else{
		if(*c+num<='z'){
			*c=*c+num;
		}else{
			num=num-('z'-*c);
			*c='a'+num-1;
		}

	}
	return 0;

}
int dec(char *c,int num){
	num=(num)%26;
	if(isupper(*c)){
		if(*c-num>='A'){
			*c=*c-num;
		}else{
			num=num-(*c-'A');
			*c='Z'-(num-1);
		}

	}else{
		if(*c-num>='a'){
			*c=*c-num;
		}else{
			num=num-(*c-'a');
			*c='z'-(num-1);
		}

	}
	return 0;
}

int main()
{	/*
   	char ch='a';
   	dec(&ch,10);
   	printf("%c\n",ch );
*/
   	f[1]=f[2]=1;
   	for(int i=3;i<=100;i++){
   		f[i]=f[i-1]+f[i-2];
   	}
   	int num;
   	scanf("%d",&num);
   	char name[100],pass[100],str[100];
   	scanf("%s",name);
   	scanf("%s",pass);
   	int plen=strlen(pass);
   	FILE *fl=fopen(name,"r");
   	
   	if(num==1){
	   	while(fgets(str,50,fl)){
	   		
	   		
	   		
	   		printf("Wrong Password\n" );

		
			
			;

	   	}
   	}
   	else{
   		/*
   		while(fgets(str,80,fl)){
   		int len=strlen(str);
   		str[len-1]=0;
   		len=strlen(str);
   	//	printf("string=%s\n",str );
   		for(int i=1;i<=plen;i++){	//fibonaciii terms f[i] as num
   			for(int j=0;j<len;j+=2)
   				inc(&str[j],f[i]);
  // 			printf("new str->%s\n", str);
   			for(int j=1;j<len;j+=2)
   				dec(&str[j],f[i]);
   	//		printf("new str->%s\n",str );

   		}
   		printf("%s\n",str );

	


   		}
   		*/
   		;

   	}

   	fclose(fl);
    return 0;
   		
}
