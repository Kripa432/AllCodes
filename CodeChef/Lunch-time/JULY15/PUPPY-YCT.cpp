#include<bits/stdc++.h>


using namespace std;

int main()
{
    

 	long long int i,j,k,c,len,num,temp,t,flag,pos,x,y;
    
    scanf("%lld",&t);
    while(t--)
    {	long long int count =0;
    	scanf("%lld %lld",&num,&k);
    	if(k==0){
    		printf("%lld\n",num*num );
    		continue;
    	}
    	else if(k==1){
    		scanf("%lld %lld",&x,&y);
    		long long int count =0;
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i++,j++ )
    			count++;
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i++,j-- )
    			count++;
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i--,j++ )
    			count++;
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i--,j-- )
    			count++;

    		printf("%lld\n",num*num-count+3 );
    		continue;
    	}

    	bool arr[1234][1234]={0};
    	for(i=0;i<k;i++){
    		scanf("%lld %lld",&x,&y);
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i++,j++ )
    			arr[i][j]=1;
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i++,j-- )
    			arr[i][j]=1;
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i--,j++ )
    			arr[i][j]=1;
    		for(int i=x,j=y;i>=1 && i<=num && j>=1 && j<=num;i--,j-- )
    			arr[i][j]=1;
    	}
    	for(i=1;i<=num;i++)
    		for(j=1;j<=num;j++)
    			if(!arr[i][j])
    				count++;
    	printf("%lld\n",count );
    }

    return 0;
}
