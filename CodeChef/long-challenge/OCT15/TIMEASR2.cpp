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
    scanf("%d",&t);
    float ang,min;
    while(t--)
    {
    	scanf("%f",&ang);
    	for(int i=0;i<=60;i++){
    		int angle=(int)(ang*2);
    		int val=11*i-angle;
    		
    		if(val%60==0 && val>=0){
    			int hr=val/60;
    			int min=i;
    
    			prints(hr,min );
    			
    			if((hr==0 || hr==6) && i==0)
    				break;

    			//printf("first\n");
    			continue;
    		}
    		
    		val=11*i+angle;
    		if(val%60==0){
    			int hr=val/60;

    			int min=i;
    			
    			prints(hr,min );
    			
    			
    			if((hr==0 || hr==6) && i==0)
    				break;

    			//printf("second\n");
    			continue;

    		}

    	}
    }

    return 0;
}
