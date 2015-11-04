t=int(input())
while t:
	t-=1
	set1=input().split()
	set2=input().split()
	
	

	set3=list(set(set1) | set(set2))
	set4=list(set(set1) & set(set2))
	set5=list(set(set1) - set(set2))
	
	set3.sort()
	set4.sort()
	set5.sort()

	
	for i in set3:
		print(i,end=' ')
	if(len(set3)==0):
		print("Empty List",end='')
	print()

	for i in set4:
		print(i,end=' ')
	if(len(set4)==0):
		print("Empty List",end='')
	print()

	for i in set5:
		print(i,end=' ')
	if(len(set5)==0):
		print("Empty List",end='')
	print()