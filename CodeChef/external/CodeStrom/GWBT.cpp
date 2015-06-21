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
   long long int n,res;
    cin>>t;
    while(t--)
    {	res=7;
    	cin>>n;
    	for(int i=0;i<n-1;i++){
    			res*=7;
    			res%=1000000007;
    	}
    	cout<<res<<"\n\n";
    }

    return 0;
}
