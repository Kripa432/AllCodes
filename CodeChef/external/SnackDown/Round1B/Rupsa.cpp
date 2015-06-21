#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    using namespace std;
    int min_bullet=0,max_bullet=0;
 	long long int i,j,k,c,len,num,temp,t;
    bool arr[1000001];
    cin>>t;
    while(t--)
    {	min_bullet=0,max_bullet=0;
    	
    	cin>>num;
    	
    	//memset(arr,0,sizeof(arr));
    	for(i=0;i<1000001;i++){
    		arr[i]=false;
    	}

    	for(i=0;i<num;i++){
    		cin>>temp;
    		arr[temp-1]=true;
    	}
    	
    	c=0;
    	
    	for(i=0;i<1000001;i++){

    		if(arr[i]==true){
    			c++;
    			continue;	

    		}
    		min_bullet+=((c+2)/3);
    		max_bullet+=((c+1)/2);
    		c=0;
    	}
    	min_bullet+=((c+2)/3);
    	max_bullet+=((c+1)/2);
    	c=0;
    	cout<<min_bullet<<' '<<max_bullet<<endl;
    		
    }

    return 0;
}
