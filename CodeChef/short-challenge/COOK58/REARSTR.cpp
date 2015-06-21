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

 	long long int i,j,k,len,c,temp,t;
    char str[100001];
    int LookUp[26];
    cin>>t;
    while(t--)
    {	memset(LookUp,0,sizeof(LookUp[0]));
    	cin>>str;
    	len=strlen(str);
    	for(i=0;i<len;i++)
    		LookUp[str[i]-'a']++;
    	
    	//Selection sort decreasing
    /*	int max,pos;
    	for(i=0;i<SIZE-1;i++){
    		max=LookUp[i];
    		for(j=i+1;j<SIZE)
    			if(LookUp[j]>max){
    				max=LookUp[j];
    				pos=j;
    			}
    		if(LookUp[i]!=max){
    			temp=LookUp[i];
    			LookUp[i]=LookUp[pos];
    			LookUp[i]=temp;
    		}
    	}
    	*/
    	//
    	


    	
    }

    return 0;
}
