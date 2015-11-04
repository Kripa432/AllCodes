//Landing Platform
//addison wesley c++ standarded template
#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n,m;
    	scanf("%d %d",&n,&m);
    	int arr[n][m];
    	int brr[n][m]={0};
    	int crr[n][m]={0};
    	for(int i=0;i<n;i++)
    		for(int j=0;j<n;j++)
    			scanf("%d",&arr[i][j]);

    	for(int i=0;i<n;i++){
    		for(int j=i,k=i;j>=0 && k<n && k<m;j--,k++)
    			if(k-1<0 || j+1==n || j+1==m )
    				brr[k][j]=arr[k][j];
    			else
    				brr[k][j]=arr[k][j]+brr[k-1][j+1];
    	}

    	for(int i=0;i<n;i++){
    		for(int j=i,k=i;j<n && j<m && k<m && k<n;j++,k++)
    			if(k-1<0 || j-1<0)
    				crr[k][j]=arr[k][j];
    			else
    				crr[k][j]=arr[k][j]+crr[k-1][j-1];
    	}

    	for(int i=0;i<n;i++)
    }

    return 0;
}
