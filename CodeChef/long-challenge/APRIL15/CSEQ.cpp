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
    long long int N,L,R,sum,a,an,i,d;
    cin>>t;
    while(t--)
    {	sum=0;
    	cin>>N>>L>>R;
    	
    	d=3;
    	a=R-L+1;
    	//sum=((N)*(2*(R-L+1)+(N-1)*(R-L)))/2;
    	for(i=1;i<=N;i++){
    		
    		sum+=a;
    		a+=d;
    		d++;
    		
    		sum=sum%1000003;
    	}
    	
    	cout<<sum<<endl;
    }

    return 0;
}
