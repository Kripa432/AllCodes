#include<bits/stdc++.h>

using namespace std;

int prints(int hr,int min){
	
	if(min==60){
		min=0;
		hr++;
	}
	if(hr<10 && min<10)
		printf("0%d:0%d\n",hr,min);
	else if(hr<10)
		printf("0%d:%d\n",hr,min);
	else if(min<10)
		printf("%d:0%d\n",hr,min);
	else
		printf("%d:%d\n",hr,min);
}

int main()
{
   	int t;
   	float ang;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%f",&ang);
    	if(ang==0){
    		printf("00:00\n");
    	}else if(ang==180){
    		printf("06:00\n");
    	}else{
    		for(int i=0;i<12;i++)
    			for(int j=0;j<=60;j++){
    				
    				
    			}
    	}
    }

    return 0;
}
