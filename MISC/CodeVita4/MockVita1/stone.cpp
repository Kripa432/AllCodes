#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{		char ch=getchar();
		int arr[1001]={0};
    	int brr[1001]={0};
    int i,j,len,n,t,res,temp,flag,num;
    long long int sum;
   for(i=0;i<1001;i++)
    		if(arr[i]==1 || brr[i]==1){
    			printf("%d ",i );
    			flag=0;
    		}
    for(i=0;i<5;i++)
    	printf("%d\n",arr[i] );
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&num);
    	if(num%4==1)
    		printf("No\n");
    	else
    		printf("Yes\n");
    }

    return 0;
}
