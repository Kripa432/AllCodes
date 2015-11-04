#include<bits/stdc++.h>

using namespace std;
int h,w;
long long int fun(char arr[][1234],int x,int y){
	long long int count=1;
	arr[x][y]='.';
	for(int i=x-1;i>=0;i--)
		if(arr[i][y]=='#'){
			count+=fun(arr,i,y);

		}
		else
			break;
	for(int i=x+1;i<w;i++)
		if(arr[i][y]=='#'){
			count+=fun(arr,i,y);

		}
		else
			break;
	for(int i=y-1;i>=0;i--)
		if(arr[x][i]=='#'){
			count+=fun(arr,x,i);

		}
		else
			break;
	for(int i=y+1;i<h;i++)
		if(arr[x][i]=='#')
			count+=fun(arr,x,i);
		else
			break;

	for(int i=x-1, j=y-1;i>=0 && j>=0;i--,j--)
		if(arr[i][j]=='#'){
			count+=fun(arr,i,j);

		}
		else
			break;
	for(int i=x+1, j=y+1;i<w && j<h;i++,j++)
		if(arr[i][j]=='#'){
			count+=fun(arr,i,j);

		}
		else
			break;
	for(int i=y-1, j=x+1;i>=0 && j<w;i--,j++)
		if(arr[j][i]=='#'){
			count+=fun(arr,j,i);

		}
		else
			break;
	for(int i=y+1, j=x-1;i<h && j>=0 ;i++,j--)
		if(arr[j][i]=='#'){
			count+=fun(arr,j,i);

		}
		else
			break;
	return count;

}

int main()
{
   	int t;
    scanf("%d",&t);
    while(t--)
    {	long long int sum=0;
    	long long int brr[100000]={0};
    	scanf("%d %d",&h,&w);
    	char arr[1234][1234];
    	for(int i=0;i<h;i++)
    		scanf("%s",arr[i]);
    	for(int i=0;i<h;i++){
    		for(int j=0;j<w;j++){
    			if(arr[i][j]=='.')
    				continue;
    			else{
    				long long int count=fun(arr,i,j);
    				
    					brr[sum]=count;
    					sum++;

    				
    			}

    		}
    	}
    	sort(brr,brr+sum);
    	printf("%lld\n",sum );
    	for(int i=0;i<sum;i++)
    		printf("%lld ",brr[i] );
    	printf("\n");
    }

    return 0;
}
