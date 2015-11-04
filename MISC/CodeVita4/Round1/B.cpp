#include<stdio.h>
#include<iostream>

using namespace std;
long double ceil(long double v)
{
  v *= 100;
  v = ceil(v);
  v /= 100;
}

int main()
{
   	long int num,flag,t;	//num numbers of share
    long double sv,csv,r,cr,sv1,cv,r1,ce,ca;
    scanf("%lld",&t);
    if(t>=1 && t<=100)			//test cases
    while(t--)
    {	flag=0;
    	scanf("%lld %Lf %Lf %Lf %Lf",&num,&sv,&csv,&r,&cr);
    	
    	sv1=sv-csv;
    	cv=num*min(sv,sv1);
    	r1=r-cr;
    	ce=cv*0.5;
    	ca=ce*min(r1,r)/100;

    	if(sv<0 || sv1<0) 		//share value can't be negetive
    		flag=1;
    	
    	else if(!(20000 <= num && num<= 10000000))
    		flag=1;
    	
    	else if(!(20.00 <= sv && sv <= 10000.00))
    		flag=1;

    	
    	
    	else if(!(-2000.00 <= csv && csv <= 2000.00))
    		flag=1;

    	
    	
    	else if(!(0.01 <= r && r <= 99.99))
    		flag=1;
    	
    	else if(!(-10.00 <= cr && cr <= 10.00))
    		flag=1;

    	else if(csv<0 && cr>0 )
    		flag=1;




    	else if(!(20.00 <= sv1 && sv1 <= 10000.00))
    		flag=1;


    	else if(!(0.01 <= r1 && r1 <= 99.99))
    		flag=1;

    	
    	

    	if(flag){
    		printf("Invalid Input\n");	
    		flag=0;
    	}else{
			printf("%.2Lf\n%.2Lf\n%.2Lf\n%.2Lf\n%.2Lf\n",sv1,r1,ceil(cv),ceil(ce),ceil(ca));
		//	cout <<setprecision(2) << sv1<<r1<<cv<<ce<<ca << '\n'; 
    	}
    	//printf("%d %.11lf %.11lf %.11lf %.11lf\n",num,sv,csv,r,cr);
    }
    else
    	printf("Invalid Input\n");

    return 0;
}
