n, q = input().split()                          #split input value seprated by space
n, q = int(n), int(q)           #after spliting n,q will be string values changed them into integer
d = {}                                          #intialize a dictionary d
for i in range(n):                              #for(i = 0; i<n; i++)
    value, key = input().split()                # split the input value seprated by space
    d[key]  = value                             # add values and their keys into dictionary                     
for i in range(q):
    key = input().split()                       
    if(d.get(key[0])):  #d.get(key[0]) will return value of key if key found else it will return None
        print(d.get(key[0]))                    #key[0] is sort name which is keys in dictionary d, 
    else:                                       # get and print their values
        print("Name not found")             