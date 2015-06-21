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
    int str[101];

    cin>>t;
    while(t--)
    {	int flag=1;
    	gets(str);
    	int len=strlen(str);
    	
    		for(int i=0;i<len-2; i++)
    			if(str[i]!=str[i+2])
    				flag=0;
    
    }

    return 0;
}
