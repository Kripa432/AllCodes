#include<bits/stdc++.h>

#define abs(x) (x>0?x:-x)
using namespace std;

int prints(int hr,int min){
	
	if(min>=60){
		min-=60;
		hr++;
	}

	int hr2,min2;
	if(min==0){
		hr2=12-hr;
		min2=0;
	}else{
		hr2=11-hr;
		min2=60-min;
	}

	if(hr>hr2){
		int temp=hr;
		hr=hr2;
		hr2=temp;
		temp=min;
		min=min2;
		min2=temp;
	}

	if(hr<10 && min<10)
		printf("0%d:0%d\n",hr,min);
	else if(hr<10)
		printf("0%d:%d\n",hr,min);
	else if(min<10)
		printf("%d:0%d\n",hr,min);
	else
		printf("%d:%d\n",hr,min);

	hr=hr2;
	min=min2;
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
   	int t,min,flag;
    scanf("%d",&t);
    float ang;
    while(t--)
    {
    	scanf("%f",&ang);
    	if(ang==0){
    		printf("00:00\n");
    		continue;
    	}
    	else if(ang==180){
    		printf("06:00\n");
    		continue;
    	}
    	
    	float angle=((int)((ang+0.25)/0.5)*0.5);
    	ang=angle;
    //	printf("the rounded angle is=%f\n",angle);
    	
    	for(int i=0;i<=12;i++){
    		
    		min=(60*i-ang*2);
    		int min2=(60*i-(360-ang)*2);
    		
    		if(min%11==0 && min>=0){
    			prints(i,min/11);
    			break;
    		}

    		else if(min2%11==0 && min2>=0){
    			prints(i,min2/11);
    			break;
    		}
    					
    	}
    }

    return 0;
}