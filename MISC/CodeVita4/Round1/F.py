l=list(map(int,input().split()))
s=int(input())
#print(l)
l.sort()
l.reverse()
def twentyone(array, num):   #geek for geeks
    if num < 0:
        return
    if len(array) == 0:
        if num == 0:
            yield []
        return
    for solution in twentyone(array[1:], num):
        yield solution
    for solution in twentyone(array[1:], num - array[0]):
        yield [array[0]] + solution
l=(list(twentyone(l,s)))
l=list(map(list,set(map(tuple,l))))
l.sort()
for i in l:
	i.sort()
	i.reverse() 
l.reverse()
for i in l:
	print(i)