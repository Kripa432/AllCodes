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
    long long int n;
    long long int sum;
    cin>>t;
    while(t--)
    {	sum=0;
    	cin>>n;
    	long long int arr[n];
    	for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cout<<sum/(n-1)-arr[i]<<' ';
    	}
    	cout<<endl;

    }

    return 0;
}
