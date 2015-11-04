t=int(input())
while t:
	t-=1
	n=int(input())
	arr=[]
	for i in range(n):
		str1=input()
		arr.append(str1)
	arr.sort()
	i=0
	while i<n:
		print ("%s %s %s %s %s %s %d"%(arr[i][0:2],arr[i][2:10],arr[i][10:14],arr[i][14:18],arr[i][18:22],arr[i][22:26],arr.count(arr[i])))
		i=i+arr.count(arr[i])
		
	input()
	print("")




