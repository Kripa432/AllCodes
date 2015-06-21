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

int selectionSort(char arr[],int size){
	int i,j,temp,min,pos;
	for(i=0;i<size-1;i++){
		min=arr[i];
		for(j=i+1;j<size;j++)
			if(arr[j]<min){
				min=arr[j];
				pos=j;
			}
		if(min!=arr[i]){
			temp=arr[i];
			arr[i]=arr[pos];
			arr[pos]=temp;
		}
	}
	return 0;
}

int main()
{
    using namespace std;

 	int t,n,i,temp,flag;
    char que[11],ans[11];
    cin>>t;
    while(t--)
    {
    	cin>>que>>ans;
    	int len=(unsigned int)strlen(que);
    	selectionSort(que,len);
    	i=0;
    	while(que[i]=='0' &&i<len)
    		i++;
    	if(i!=0){
    		temp=que[0];
    		que[0]=que[i];
    		que[i]=temp;
    	}
    	flag=1;
    	for(i=0;i<len;i++){
    		if(que[i]!=ans[i]){
    			flag=0;
    			break;
    		}
    	}
    	if(flag)
    		cout<<"AC"<<endl;
    	else
    		cout<<"WA"<<endl;
    	

    }

    return 0;
}
