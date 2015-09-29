#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int t;
    int m=2,n=4;
    int p=m*n;
    char arr[m][n];
    char brr[p];
    arr[0][0]='a';
    arr[0][1]='b';
    arr[0][2]='c';
    arr[0][3]='d';
    arr[1][0]='e';
    arr[1][1]='f';
    arr[1][2]='g';
    arr[1][3]='h';

    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++)
    		brr[i*n+j]=arr[i][j];
    }
    for(int i=0;i<p;i++){
    	printf("%c ",brr[i] );
    }


    return 0;
}
