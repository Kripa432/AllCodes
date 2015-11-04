t=int(input())
while t>0:
	t-=1
	dt={}
	n,k=input().split()
	n=int(n)
	k=int(k)
	st=input().split()
	for i in st:
		dt[i]=0
	for j in range(k):
		st1=input().split()
		for i in st1:
			try:
				dt[i]+=1
			except:
				pass
	for i in st:
		if dt[i]>0:
			print("YES ",end="")
		else:
			print("NO ",end="")
	print()