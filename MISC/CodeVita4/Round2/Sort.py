t=int(input())
while t>0:
	t-=1
	st=input().split()
	k=int(input())
	for i in range(0,len(st)):
		if i%2==0:
			st[i]=st[i].lower()
		else:
			st[i]=int(st[i])
	#print(st)
	for i in range(k):
		cur=st[i]
		for j in range(i+2,int(len(st)),2):
			if cur>st[j]:
				cur=st[j]
				pos=j
		if cur!=st[i]:
			j=pos
			temp=st[i]
			st[i]=st[pos]
			st[pos]=temp

	for i in st:
		print(i,end=' ')
	print()