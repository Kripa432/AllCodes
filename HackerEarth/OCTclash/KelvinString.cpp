#include<bits/stdc++.h>

using namespace std;

int main()
{
   	int n,k;
   	scanf("%d %d",&n,&k);
   	bool arr[n]={0};
   	char str[n+1];
   	scanf("%s",str);
	int used=0;
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n-1;i++){
		int small=i,smallm=-1;
		for(int j=i+1;j<n;j++){
			if(str[j]<=str[small]){
					small=j;
			}
			if(arr[j]){		//if marked
						if(smallm==-1)
							smallm=j;
						else if(str[j]<=str[smallm])
							smallm=j;
			}

		}
		if(str[i]==str[small])
			continue;
		if(used+1>=k)
			small=smallm;


		cout<<i<<' '<<small<<endl;
		if(arr[i]==1 && arr[small]==1){		//case 1      []   []
			swap(str[i],str[small]);
			printf("condition1\n");
		}
		else if(arr[i]==1 || arr[small]==1){		//case 2	[]
			if(used<k){
				printf("condition2\n");
				swap(str[i],str[small]);
				used++;
				arr[i]=arr[small]=true;
			}
		}else if(used+2<=k){
				printf("condition3\n");
				swap(str[i],str[small]);
				arr[i]=arr[small]=true;
				used+=2;
		}


	} 
	printf("%s\n",str );

    return 0;
}
