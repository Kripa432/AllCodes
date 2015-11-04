#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int main()
{
    

 	int i,j,k,c,len,num,temp,t,max;
    
    scanf("%d",&t);
    while(t--)
    {
		scanf("%d %d",&num,&k);
		int arr[num];
		for(i=0;i<num;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+num);
		max=arr[num-1];
		k--;
		for(i=0;i<num-k;i++)
			if(arr[i+k]-arr[i]<max)
				max=arr[i+k]-arr[i];
		printf("%d\n",max );

    }

    return 0;
}
