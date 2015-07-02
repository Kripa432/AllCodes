#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<ctype.h>
#include<math.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) >= 0 ? (x) : -(x))
#define sgn(x) ((x) > 0 ? 1 : ((x) < 0 ? -1 : 0))

int main()
{
    using namespace std;

 	int t,n,i;
    int arr[100002];
    int res[100002];
    scanf("%d",&t);
    while(t!=0){
    	n=t;
    	for(i=1;i<=n;i++){
    		scanf("%d",&arr[i]);
            res[arr[i]]=i;

        }
    	
    	int flag=0;
    	for(i=1;i<=n;i++)
    		if(arr[i]!=res[i]){
                flag=1;
                break;
            }
        
        if(flag)
            printf("not ambiguous\n");
        else
            printf("ambiguous\n");
    
    	scanf("%d",&t);
    }

    return 0;
}
