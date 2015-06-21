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
    int hh,mm,ang;
    char a;
    cin>>t;
    while(t--)
    {
    	cin>>hh>>a>>mm;
    	ang=(int)abs(0.5*(hh*60-mm*11));
    	if(ang%5==0)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }

    return 0;
}
