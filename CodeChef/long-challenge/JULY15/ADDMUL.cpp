#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int arr[100005];
long long int *st;
long long int createST(long long int *arr,long long int ss,long long int se,long long int *st,long long int si){
	long long int mid;
	if(ss==se){
		st[si]=arr[ss];
		return arr[ss];
	}
	mid=(ss+se)/2;
	st[si]=createST(arr, ss, mid, st, si*2+1)%MOD + createST(arr, mid+1, se, st, si*2+2)%MOD;
	return st[si];
}
long long int sum(long long int *st, long long int ss, long long int se, long long int qs, long long int qe, long long int index){
	if (qs <= ss && qe >= se)
        return st[index];
    if (se < qs || ss > qe)
        return 0;
    long long int mid=(ss+se)/2;
    return sum(st, ss, mid, qs, qe, 2*index+1)%MOD + sum(st, mid+1, se, qs, qe, 2*index+2)%MOD;
}
void update(long long int *st, long long int ss, long long int se, long long int i, long long int diff, long long int index)
{
    
    if (i < ss || i > se)
        return;
    st[index] = st[index] + diff;
    if (se != ss)
    {
        long long int mid = (ss+ se)/2;
        update(st, ss, mid, i, diff, 2*index + 1);
        update(st, mid+1, se, i, diff, 2*index + 2);
    }
}


int main()
{
 	long long int i,j,k,c,len,num,temp,t,n,q,x,y,u,v,type;
    scanf("%lld %lld",&n,&q);
    for(i=0;i<n;i++)
    	scanf("%lld",&arr[i]);
    //construction geekforgeek
    x = (long long int)(ceil(log2(n))); 
    long long int max_size = 2*(long long int)pow(2, x) - 1;
    st = new long long int[max_size];
    createST(arr,0,n-1,st,0);
 
    
    
    while(q--){
    	scanf("%lld %lld %lld",&type,&x,&y);
    	x--;
    	y--;
    	if(type==1){
    		scanf("%lld",&temp);
    		for(i=x;i<=y;i++){
    			arr[i]+=temp;
    			arr[i]%=MOD;
    			update(st, 0, n-1, i, temp, 0);
    		}
    	}else if(type==2){
    		scanf("%lld",&temp);
    		for(i=x;i<=y;i++){
    			int diff=arr[i]*temp-arr[i];
    			arr[i]*=temp;
    			arr[i]%=MOD;
    			update(st, 0, n-1, i, diff, 0);
    		}
    	}else if(type==3){
    		scanf("%lld",&temp);
    		//modulus
    	}else{

    		printf("%lld\n",sum(st,0,n-1,x,y,0) );
    	}
    }

    return 0;
}
