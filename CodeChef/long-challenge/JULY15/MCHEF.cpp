#include<bits/stdc++.h>
int max(int a, int b) { return (a > b)? a : b; }
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];

   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}
long long int arr[100004],jug[100005][3],v[100005],w[100005];
int main()
{

	long long int i,j,k,m,n,c,count,len,num,temp,t,res,maxi,l,r,local_min,min,pos,loc,sum,flag,topv,topw;;

	scanf("%lld",&t);
	while(t--)
	{	
		count=0;
		sum=0;
		flag=0;
		scanf("%lld %lld %lld",&n,&k,&m);
		for(i=1;i<=n;i++){
			scanf("%lld",&arr[i]);
			sum+=arr[i];
		}

		for(i=1;i<=m;i++)
			scanf("%lld %lld %lld",&jug[i][0],&jug[i][1],&jug[i][2]);
		topv=topw=0;
		for(i=1;i<=n;i++)
			if(arr[i]<0){
				min=k;
				flag=0;
				
				for(j=1;j<=m;j++){
					if(jug[j][0]<=i && i<=jug[j][1] ){
						if(min>=jug[j][2]){
							min=jug[j][2];
							loc=j;
							flag=1;
						}
					}
				}
				if(flag){
				w[topw++]=min;
				v[topv++]=-arr[i];
				}
			}
			for(i=0;i<topv;i++)
				printf("%d %d\n",v[i],w[i] );

			count=(k,w,v,topv-1);
			printf("%d\n",count );

			}

			return 0;
		}
