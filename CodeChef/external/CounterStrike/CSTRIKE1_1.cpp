#include<bits/stdc++.h>
using namespace std;

 

bool f(int arr[], int n, int sum)
{
   
    bool subarr[sum+1][n+1];
 
   
    for (int i = 0; i <= n; i++)
      subarr[0][i] = true;
 
   
    for (int i = 1; i <= sum; i++)
      subarr[i][0] = false;
 
    
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subarr[i][j] = subarr[i][j-1];
         if (i >= arr[j-1])
           subarr[i][j] = subarr[i][j] || subarr[i - arr[j-1]][j-1];
       }
     }
 
  
 
     return subarr[sum][n];
}
 



int main()
{
   	int i,j,k,c,len,n,temp,t,flag,pos;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);
    	int sum=0,nsum=0;
    	int arr[n];
    	for(int i=0;i<n;i++){
    		scanf("%d",&arr[i]);
    		sum+=arr[i];
    	}
    	 if((sum%2==0) && f(arr, n, sum/2))
     			printf("YES\n");
  		else
     			printf("NO\n");

    }

    return 0;
}