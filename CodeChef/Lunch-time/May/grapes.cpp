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

 	long long int i,sum,j,k,c,len,num,temp,t;
    
    cin>>t;
    while(t--)
    {	cin>>num>>k;
    	sum=0;
    	for(i=0;i<num;i++){
    		cin>>temp;
    		if(temp>k){
	    		j=temp%k;
	    		sum+=min(j,k-j);
	    	}
	    	else
	    		sum+=k-temp;
    	}
    	cout<<sum<<endl;


    }

    return 0;
}
