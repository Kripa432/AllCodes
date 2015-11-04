sc=[]
def score(x):
	if x<=p:
		return sc[x]
	else:
		return 0
t=int(input())

while(t>0):
	t-=1
	sc.clear()
	p=int(input())
	sc=list(map(int,input().split()))
	n=int(input())
	dict={}

	for i in range(n):
		arr=input().split()
		arr[0]=int(arr[0])
		l=len(arr)
		for j in range(1,l):
			if(dict.has_key(arr[j])):
				dict[arr[j]]+=arr[0]*score(j)
			else:
				dict[arr[j]]=[arr[0]*score(j)]
	m=int(input())
	
	for i in dict:
		dict[i].sort()
	print (dict)