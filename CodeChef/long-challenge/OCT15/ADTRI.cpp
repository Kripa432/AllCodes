#include<bits/stdc++.h>

using namespace std;
bool arr[5000001];
int main()
{	memset(arr,0,sizeof(arr));
	//
	for(int i=1,j=3;;i++,j+=2){
		long long int c=j*i+i;
		long long int n2=c*c+j*j;
		
		long long int ele=(int)sqrt(n2);
		if(ele>5000001)
			break;
			arr[ele]=true;
	}

	for(int i=1;i<1000;i++){
		for(int j=i+1;j<1000;j++ ){
			long long int c=i*i+j*j;
			
			if(c>5000000)
				break;
			arr[c]=true;
		}


	}

   	int t,n;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);
    	if(arr[n])
    		printf("YES\n");
    	else
    		printf("NO\n");
    }

    return 0;
}
