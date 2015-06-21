#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

int main()
{
	int t,i,j;
	int N,M,K,L,R,max;
	
	scanf("%d %d %d",&N,&M,&K);
	int arr[N+2];

	for (i = 1; i <= N; ++i)
		scanf("%d",&arr[i]);

	while(K--){
		max=0;
		scanf("%d %d",&L,&R);
		for(i=L;i<=R;i++)
			for(j=i;j<=R;j++){
				if(arr[i]==arr[j]){
					if((j-i)>max)
						max=j-i;
				}
			}
		printf("%d\n",max );
	}
	
	return 0;
}
