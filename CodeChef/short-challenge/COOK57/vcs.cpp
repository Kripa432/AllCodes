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
    int n,m,k,ele,n1,n2,i;
    cin>>t;
    while(t--)
    {	n1=n2=0;
    	int arr[101]={0};
    	cin>>n>>m>>k;
    	for(i=0;i<m+k;i++){
    		cin>>ele;
    		arr[ele]++;
    	}
    	for(i=1;i<=n;i++)
    		if(arr[i]==2)
    			n1++;
    		else if(arr[i]==0)
    			n2++;
    	cout<<n1<<' '<<n2<<endl;
    

    }

    return 0;
}
