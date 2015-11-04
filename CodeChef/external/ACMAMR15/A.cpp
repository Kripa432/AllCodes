#include<bits/stdc++.h>

using namespace std;

int main()
{	int n,even=0,odd=0,ele;
   	scanf("%d",&n);
   	for(int i=0;i<n;i++){
   		scanf("%d",&ele);
   		if(ele%2==0)
   			even++;
   		else
   			odd++;
   	}
   	if(even>odd)
   		printf("READY FOR BATTLE\n");
   	else
   		printf("NOT READY\n");

    return 0;
}
