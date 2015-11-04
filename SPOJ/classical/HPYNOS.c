#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))
int digitSum(int num){
	int sum=0;
	int rem;
	while(num){
		rem=num%10;
		sum+=rem*rem;
		num/=10;
	}
	return sum;

}
bool arr[1000000]={false};
int main()
{
    int i,j,c,len,num,temp,t,res,count;
    
    scanf("%d",&num);
    if(num==1)
    	printf("0\n");
    else{
    	count=0;
    	while(1){
    		count++;
    		temp=digitSum(num);
    		if(temp==1){
    			res=1;
    			break;
    		}

    		if(arr[temp]){
    			res=0;
    			break;
    		}
    		else{
    			arr[temp]=true;
    			num=temp;
    		}
    	}
    }
    
    if(res)
    	printf("%d\n",count );
    else
    	printf("-1\n");
    return 0;
}
