#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>
#include<math.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    using namespace std;

 	long long int i,j,k,c,len,num,temp,t;
   
    cin>>t;
    while(t--)
    {	c=0;
    	cin>>num;
    	for(i=0;i<num;i++){
    		cin>>temp;
    		if(temp&1)
    			c++;
    	}
    	if(c&1)
    		cout<<c<<endl;
    	else
    		cout<<num-c<<endl;


    }

    return 0;
}
