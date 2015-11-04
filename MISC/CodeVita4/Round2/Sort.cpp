#include<bits/stdc++.h>

using namespace std;

struct node{
	char str[100];
	int n;

};

int sort(node arr[],int top,int k){
	int pos,temp,min;
	node cur;
	char temp[100];
	for(int i=0;i<k;i++){
		cur[i].str=
	}
}

int main()
{
   	int t,n;
    scanf("%d",&t);
    while(t--)
    {	char str[100];
    	node arr[10000];
    	int top=-1;
    	char ch='a';
    	int num;
    	scanf("%d",&n);
    	while(ch){
    		scanf("%s %d",str,&num);
    		arr[++top].str=str;
    		arr[top].n=num;
    		ch=getchar();
    	}
    	sort(arr,top,n);
    }

    return 0;
}
