#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
	int t;
	int num,temp,i,x,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&num);
		int arr[200]={0};
		m=-1;
		temp=num;
		while(temp){
			arr[++m]=temp%10;
			temp=temp/10;
		}
		num--;
		while(num){
			temp=0;
			for (i = 0; i <= m; ++i)
			{
				x=num*(arr[i])+temp;
				arr[i]=x%10;
				temp=x/10;

			}
			while(temp){
				arr[++m]=temp%10;
				temp=temp/10;
			}
			num--;

		}
		for (int i = m; i>=0; --i)
		{
			printf("%d",arr[i] );
		}
		printf("\n");

	}

	return 0;
}
