#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<ctype.h>
#include<math.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    using namespace std;

 	int t;
    int N,x,i,j,y,x1,y1,M,sum=0,ans,temp,maxm,low,high;
    
    	cin>>N;
    	int arr[N];
    	for(i=0;i<N;i++)
    		cin>>arr[i];
    	cin>>M>>x1>>y1;
    	for(i=1;i<=M;i++){
    		low=min(x1,y1);
    		high=max(x1,y1);
    		maxm=arr[low];
    		for(j=low;j<=high;j++)
    			if(arr[j]>maxm)
    				maxm=arr[j];
    		sum+=maxm;
    		x1=(x1+7)%(N-1);
    		y1=(y1+11)%N;
    	}
    	cout<<sum;

    return 0;
}
