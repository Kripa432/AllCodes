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
int fun(int num){
	return 11-((long long int)pow(34,num)+30*(num)+32) % 11;
}

int main()
{
    using namespace std;

 	long long int i,j,k,c,len,num,temp,t;
    int arr[]={0,3,6,9,1,4,7,10,2,5,8};
    
    cin>>t;
    while(t--)
    {
    	cin>>num;
    	num%=11;
    	temp=arr[num];
    	if(temp!=11)
    		cout<<temp<<endl;
    	else
    		cout<<0<<endl;


    }

    return 0;
}
