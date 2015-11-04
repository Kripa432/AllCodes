#include<bits/stdc++.h>
#define LL long long int 

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    int arr[100003];
    arr[0]=0;
    for(int i=1;i<=t;i++)
    	arr[i]=arr[i-1]+1+i/2;
  	printf("%d\n",arr[t] );

    return 0;
}
