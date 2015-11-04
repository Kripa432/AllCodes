#include<bits/stdc++.h>
using namespace std;
#define SIZE 50
int arr[SIZE][SIZE];
int initial(int arr[][SIZE]){
		int min_value=4000;
		int i,j,pos1,pos2;

		for(i=1;i<=SIZE;i++){
		for(j=1;j<=SIZE;j++)
			if(arr[i][j]<min_value && arr[i][j]!=0){
				min_value=arr[i][j];
				pos1=i;
				pos2=j;

			}

		}
		printf("%d %d\n",pos1,pos2 );
		fflush(stdout);
		arr[pos1][pos2]=0;
}

int main()
{
    

 	int i,j,k,c,len,num,temp,t,n,x,y,pos1,pos2,min_value;
 	scanf("%d",&n);
	
	for(i=1;i<=SIZE;i++){
		for(j=1;j<=SIZE;j++)
			scanf("%d",&arr[i][j]);
	}
	initial(arr);
    while(1){
    	scanf("%d %d",&x,&y);
    	arr[x][y]=0;
    	min_value=4000;
    	for(j=1;j<=SIZE;j++){
    		if(arr[y][j]<min_value && arr[y][j]!=0){
    			
    			min_value=arr[y][j];
    			pos2=j;
    			pos1=y;
    		}
    	}
    	arr[y][pos2]=0;
    	if(min_value!=4000){
    		printf("%d %d\n",pos1,pos2 );
    		fflush(stdout);
    	}
    	else
    		break;
    }
    

    return 0;
}
