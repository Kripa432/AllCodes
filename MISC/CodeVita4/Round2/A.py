n=int(input())
a,b=input().split()
a=int(a)
b=int(b)
arr=[]
for i in range(a,b+1):
	arr.append(str(i))
print (arr)
while n>0:
	n-=1
