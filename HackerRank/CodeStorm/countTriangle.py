#! /usr/local/bin/python3
import sys
def binary(arr,low,high,value):     
	mid=(low+high)/2;

	while(low<=high):
		if(arr[mid]==value):
			return mid;				#//arr[mid]==value
		
		elif(arr[mid]<value):
			low=mid+1;
		else:
			high=mid-1;
		mid=(low+high)/2
	
	return mid;				#//arr[mid]<value


N = int(input().strip())
A = [int(A_temp) for A_temp in input().strip().split(' ')]
# your code goes here
S=[]
n=N,arr=A
for i in A:
    s+=[i*i]
acute=0,obtuse=0,right=0
for i in range(0,n):
	for(j)
   		#//printf("i=%d j=%d pos=%d sqpos=%d %d %d %d\n",i,j,pos,sqpos,acute,right,obtuse );
printf(acute,right,obtuse );
