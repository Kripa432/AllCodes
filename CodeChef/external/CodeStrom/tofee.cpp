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
 using namespace std;
int main()
{
   

 	int t;
    int n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	int ele,min,max;
    	cin>>ele;
    	min=max=ele;
    	for(int i=0;i<n-1;i++){
    		cin>>ele;
    		if(ele<min)
    			min=ele;
    		if(ele>max)
    			max=ele;

    	}
    	if(max-min>=2)
    		cout<<"BAD\n";
    	else
    		cout<<"GOOD\n";
    }

    return 0;
}
