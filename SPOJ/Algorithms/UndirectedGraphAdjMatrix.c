#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

#define SIZE 1000
bool arr[SIZE][SIZE];

int initialise(){
	for(int i=0;i<SIZE;i++)
		for(int j=0;j<SIZE;j++)
			arr[i][j]=false;
	}

	int main()
	{
		int i,j,c,len,num,temp,t,res,n,m,u,v;
		initialise();
		scanf("%d %d",&n,&m);
		for(i=0;i<m;i++){
			scanf("%d %d",&u,&v);
			arr[u][v]=true;
		}
		for(i=0;i<SIZE;i++)
			for(j=0;j<SIZE;j++)
				if(arr[i][j])
					printf("there is a node b/w %d->%d\n",i,j);


		return 0;
	}