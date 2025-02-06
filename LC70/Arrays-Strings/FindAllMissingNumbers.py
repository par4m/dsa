




nums = [4,3,2,7,8,2,3,1]

for i in nums:
    print(i)

print("Len is " ,len(nums))

b = []

# Bruteforce approach  - sort the array and if the index+1 doesnt match the number then add that to the list O(n^2) + O() some space 
#
nums.sort()
for i in nums:
    print(i)
for i,v in enumerate(nums):
    if i+1 != v:
        b.append(i+1)
print(b)


# Correct method
#
#
s = set(nums)
ret = []
print(len(nums))

for i in range(1,len(nums)+1):
    if i not in s:
        ret.append(i)

print(ret)
