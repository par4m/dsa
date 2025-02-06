print("Variables and Printing")

n = 0 

print('n  = ', n )



n = "abc"


print('n  = ', n )


n,m =0, "abc"



n+=3


print("None Type")
a = None


# If else
 

print("If Else")

if n > 2:
    n -= 1
elif n == 2:
    n *=2 
else:
    n += 2
print(n)



# Bitwise and or

print("Bitwise AND OR")
n,m = 1,2

if ( (n > 2 and n != m) or n==m ):
    n+=1 


print("WHile Loop")

n = 0 
while  n < 5:
    print(n)
    n += 1


print("For Loop")

for i in range(5):
    print(i)

print("For Range")

for i in range(2,6):
    print(i)


print("Reverse Loop")
# start stop step
for i in range(5, 1 , -1):
    print(i)



# Math
print("Math")

print(5 // 2)


# Rounding Up
print(-3 // 2) 


# Modding
print(10 % 3)

print(-10 % 3)


import enum
import math
from os import process_cpu_count
from queue import Queue

print(math.fmod(-10,3))

print(math.floor(3/2))
print(math.ceil(3/2))

print(math.sqrt(2))

print(math.pow(3,2))


# Max and Min Int
float("inf")
float("-inf")

# Numbers are infinite so they never overflow
import math
print(math.pow(2,200))

print(math.pow(2,200) < float("inf"))

# Arrays
arr = [1,2,3]
print(arr)

# can be used as a stack
arr.append(12)
print(arr)
arr.pop()
print(arr)

arr.insert(1,7)
print(arr)


arr[0]= 0
arr[3]= 0
print(arr)

n  = 5

arr = [1]*n
arr = [1,2,3,4]

# sublists slicing
print(arr[1:3])
print(arr[0:4])


# unpacking
#
a,b,c = [1,2,3]

# without index looping
for i in arr:
    print(i)


# with index and value
for i,n in enumerate(arr):
    print("Index and Val is ", i,n)


# zip 
nums1 = [1,2,3,4]
nums2 = [4,5,6,7]
for n1, n2 in zip(nums1,nums2):
    print(n1,n2)

# reverse array
arr= [5,4,7,3,8]
arr.sort()
print(arr)

arr.sort(reverse=True)


print(arr)


arr = ["bob", "alice", "jane", "doe"]

arr.sort()
print(arr)

# custom based on length
arr.sort(key=lambda x: len(x))
print(arr)


# list comprehension
arr = [i*i for i in range(1,5)]
print(arr)


# 2 D lists
arr = [ [0]*4 for i in range(4)]
print(arr)


s = "abc"
print(s[0:2])


# strings are immutable
# s[0] = "a"
s += "def"
print(s)


# ascii value
print(ord("a"))
print(ord("b"))


# combine strings with an empty delimiter
strings = ["ab","cd", "ef"]

print("".join(strings))



# Queue
from collections import deque

queue = deque()
queue.append(1)
queue.append(2)
print(queue)


queue.appendleft(1)
queue.pop()
queue.pop()
print(queue)



# HashSet
mySet = set()
mySet.add(1)
mySet.add(2)
print(mySet)

print(1 in mySet)
print(2 in mySet)
mySet.remove(2)
print( 2 in mySet)


# list to set
print(set([1,2,3]))


# HashMap
myMap = {}
myMap["alice"] = 88
myMap["bob"] = 77
print(myMap)
print(len(myMap))
myMap["alice"] = 80
print(myMap["alice"])
myMap.pop("alice")


print("alice" in myMap)


myMap = {"alice":90, "bob":70}

print(myMap)


# dict comprehension


# looping through maps
for val in myMap.values():
    print(val)

for k,v in myMap.items():
    print(k,v)



# Tuples - can be used as key for Hash map / set
myMap = { (1,2) : 3}
print(myMap)

mySet = set()
mySet.add((1,2))
print((1,2) in mySet)


# Lists cant be keys
# myMap[[3,4]] = 5
#



# Heaps
import heapq

# under the hood its array
minHeap = []
heapq.heappush(minHeap,3)
heapq.heappush(minHeap,2)
heapq.heappush(minHeap,4)

print(minHeap[0])

while len(minHeap):
    print(heapq.heappop(minHeap))


# no max heap by default, multiply each value by negative 1 while pushing and popping
maxHeap = []
heapq.heappush(maxHeap, -3)
heapq.heappush(maxHeap, -2)
heapq.heappush(maxHeap, -4)
print(maxHeap)

print(-1 * maxHeap[0])



while len(maxHeap):
    print(-1 * heapq.heappop(maxHeap))

# build heap from initial vlaues
arr = [2,1,8,4,5]

heapq.heapify(arr)
print("Heapified ARrays is " , arr)


# Functions

def myFunc(n,m):
    return n*m

myFunc(2,3)



# Nested Functions
def outer(a,b):
    c = "c"

    def inner():
        return a+b+c
    return inner()

print(outer("a", "b"))


# can modify objects but not reassign unless using nonlocal keyword
#
def double(arr, val):
    def helper():
        for i,n in enumerate(arr):
            arr[i]*=2
        nonlocal val 
        val *=2
    helper()
    print(arr,val)



nums = [1,2]
val = 3
double(nums,val)




# Class 
#


class MyClass:
    def __init__(self,nums):
        self.nums = nums
        self.size = len(nums)

    def getLength(self):
        return self.size

    def getDoubleLength(self):
        return 2*self.getLength()


a = MyClass([1,2,3])
print(a.getLength())
print(a.getDoubleLength())
