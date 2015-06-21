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
    long long int f,m;
    cin>>t;
    while(t--)
    {
    	cin>>f>>m;
    	if(m%f==0)
    		cout<<"CORRECT\n\n";
    	else
    		cout<<"WRONG\n\n";
    }

    return 0;
}
