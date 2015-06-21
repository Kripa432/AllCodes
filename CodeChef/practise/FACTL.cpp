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
    int num,count,mul,i;
    cin>>t;
    while(t--)
    {
    	cin>>num;
    	count=0;
    	for(i=5;i<=num;i*=5)
    		count+=num/i;
    	cout<<count<<endl;
    }

    return 0;
}
