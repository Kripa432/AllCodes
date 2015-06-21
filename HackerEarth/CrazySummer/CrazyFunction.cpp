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

int arr[100001];
int lv(int a,int c){
	return (-1+sqrt(1+2*(c-a)))/2;
}
int rv(int x,int z){
	return (-1+sqrt(1+4*(z-x)))/4;
}
int fun(int l,int r){
	return arr[r]-arr[l-1];
}


int main()
{
    using namespace std;

 	long long int sum,i,j,k,c,len,num,temp,t,a,x,z,l,r;
	arr[0]=0;
	for(i=1;i<100001;i++){
		arr[i]=(i+2)*(i+1)+arr[i-1];
	}    
    cin>>t;
    while(t--)
    {	sum=0;
    	cin>>a>>c>>x>>z;
    	l=lv(a,c);
    	r=rv(x,z);
    	//cout<<"l=    "<<l<<"r=      "<<r<<endl;
    	
    	cout<<fun(l,r)<<endl;
    }

    return 0;
}
