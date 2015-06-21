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

 	long long int i,j,k,c,len,num,temp,t,res,prev,next;
    
    cin>>t;
    while(t--)
    {	res=0;
    	cin>>num;
    	cin>>prev;
    	res=prev;
    	for(i=1;i<num;i++){
    		cin>>next;
    		if(next>prev)
    			res+=next-prev;
    		prev=next;
    	}
    	cout<<res<<endl;

    }

    return 0;
}
