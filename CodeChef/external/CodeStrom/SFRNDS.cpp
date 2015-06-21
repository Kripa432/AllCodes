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

 	int t,n;
    long int ways; 
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	if(n<6){
    		cout<<"FIGHT\n\n";
    		continue;
    	}
    	ways=1;
    	for(int i=n;i>0;i--){
    		ways*=i;
    		ways%=1000000007;
    	}
    	cout<<ways<<"\n\n";
    }

    return 0;
}
