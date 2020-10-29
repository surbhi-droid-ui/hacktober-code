import itertools
def decre(x):
    return x+1
def evenodd(n):
     permutationsum=0
     for i in range(len(n)):
         permutationsum+=int(n[i])
     return permutationsum
def modprint(printable):
    print(int(printable%(1e9+7)))
def getting_ready(zzz):
    for loop in range(low, high+1):
      zzz.append(str(loop))
def test_odd_even(i):
    if(not(evenodd(i)%2)):
        return True
    else:
        return False

sols=0
low,high=map(int, input().split())
k=int(input())
array=[]                      ////////////recursive
getting_ready(array)
combination=itertools.product(array, repeat=k)
for idx in combination:
    if(test_odd_even(idx)):
      gh=map(int, input().split())
k=int(input())
array=[]
getting_ready(array)
combination=itertools.product(array, repeat=k)
for idx in combination:
    if(test_odd_even(idx)):
      gh=map(int, input().split())
k=int(input())
array=[]
getting_ready(array)
combination=itertools.product(array, repeat=k)
for idx in combination:
    if(test_odd_even(idx)):
      sols=decre(sols)
modprint(sols)
