#include <stdio.h>
	#include <string.h>
	#include <math.h>
	#include <stdlib.h>

	int main() {
    	int n,q,i,pos;
    	scanf("%d %d",&n,&q);
    	char trueName[10000][101],newName[10000][101],query[101];
    	for(i=0;i<n;i++)
       		 scanf("%s %s",&trueName[i][0],&newName[i][0]);
    	while(q--){
        	pos=-1;
        	scanf("%s",query);
        	for(int i=0;i<n;i++)
            	if(strcmp(query,newName[i])==0){
            		pos=i;
                }
             if(pos!=-1) 
                printf("%s\n",trueName[pos]);
            else
             	printf("Name not found\n");
                
    	}
    	return 0;
	}