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

 	int t,n,i;
    int arr[100002];
    int res[100002];
    do{
    	cin>>n;
    	for(i=1;i<=n;i++)
    		cin>>arr[i];
    	
    	for(i=1;i<=n;i++);
    		res[arr[i]]=i;
    	
    	for(i=1;i<=n;i++)
    		cout<<res[i]<<" ";
    	cout<<endl;


    	cin>>t;
    }while(t!=0);

    return 0;
}
