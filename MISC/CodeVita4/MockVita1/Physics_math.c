Have you registered for CodeVita
Have you formed your Team
Have you participated in mock test
If NO, Then
register Now,
if team member needed,Look at IERT Programming Group
if MockTestMissed, Here are those question.
Have fun...Let us Learn...
#
include<bits/stdc++.h>
int main()
{
    

 	int i,j,k,c,len,num,temp,t,flag,pos;
    
    scanf("%d",&t);
    while(t--)
    {
    	bool arr[1000001]={0};
    	bool brr[1000001]={0};
    	do{
    		scanf("%d",&temp);
    		arr[temp]=1;
    	}while(getchar()!='\n');
    	
    	do{
    		scanf("%d",&temp);
    		brr[temp]=1;
    	}while(getchar()!='\n');
    	int flag=1;
    	for(i=0;i<1001;i++)
    		if(arr[i]==1 || brr[i]==1){
    			printf("%d ",i );
    			flag=0;
    		}
    	if(flag){
    		printf("Empty List");
    	}
    	flag=1;
    	printf("\n");
    	for(i=0;i<1001;i++)
    		if(arr[i]==1 && brr[i]==1){
    			printf("%d ",i );
    			flag=0;
    		}
    	if(flag){
    		printf("Empty List");
    	}
    	printf("\n");
    	flag=1;
    	for(i=0;i<1001;i++)
    		if(arr[i]==1 && brr[i]!=1){
    			printf("%d ",i );
    			flag=0;
    		}
    	if(flag){
    		printf("Empty List");
    		
    	}
    	flag=1;
    	printf("\n");
    }


    return 0;
}
