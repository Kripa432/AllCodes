t=int(input())
while t>0:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	count=0
	e=1
	for i in range(1,n):
		if(arr[i]>=arr[i-1]):
			e+=1
			continue
		count+=(e*(e+1))/2
		e=1
	count+=(e*(e+1))/2
	print(int(count))

