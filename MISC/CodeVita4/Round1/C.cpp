#include<bits/stdc++.h>

using namespace std;
int arr[100005];
long long int sum[100005];
int main()
{
   	int i=0,flag=0,j;
   	scanf("%d",&arr[i++]);
   	while(getchar()==' '){
   		scanf("%d",&arr[i++]);
   	}
   	int len=i;
   	sum[0]=arr[0];
   	for(i=1;i<len;i++)
   		sum[i]=arr[i]+sum[i-1];

   	for(i=1;i<len-3;i++){

   		for(j=i+2;j<len-1;j++)
   			if(sum[i-1]==sum[j-1]-sum[i] && sum[i-1]==sum[len-1]-sum[j]){
   				flag=1;
   				//printf("Sum=%d\n",sum[i-1] );
   				break;
   			}
   		if(flag)
   			break;
   	}
   	if(flag){
   		printf("Indices which form equi pair { %d,%d }\n",i,j );
   		printf("Slices are { %d,%d },{ %d,%d },{ %d,%d }",0,i-1,i+1,j-1,j+1,len-1 );
   	}else{
   		printf("Array does not contain any equi pair");
   	}

    return 0;
}
