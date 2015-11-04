#include<bits/stdc++.h>

using namespace std;

long long int arr[100];

int main()
{
   	int i,t;
    long long int num;
    arr[0]=1;
    arr[1]=1;
    for(i=2;arr[i-1]<=1000000000000000000;i++)
    	arr[i]=arr[i-1]+arr[i-2];
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%lld",&num);
    	for(i=1;arr[i]<=num;i++);
    		printf("%d\n",i-1);
    		
    }

    return 0;
    	
}
