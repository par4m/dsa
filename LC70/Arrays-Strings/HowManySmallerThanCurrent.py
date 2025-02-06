#
#
# import enum
# from typing import Counter
#
#
# c = Counter(nums)
# res = [0]*len(nums)
# for i in range(0,len(nums)):
#     for num in c: # for the number in counter
#         if nums[i] != num:
#             if nums[i] > num:
#                 res[i] += c.get(num)
#
#
#

# Above is Wrong

nums = [8,1,2,2,3]

temp  = sorted(nums)


d ={}

for i , num in enumerate(temp):
    if num not in d:
        d[num] = i

res = [d[num] for num in nums]
# print(res)





# O(N)
print(nums)
print(sorted(nums))
count = [0]*10


# Count the frequency of each number
for num in nums:
    count[num+1] += 1

print(count)


# prefix sum 
for i in range(1,10):
    count[i] += count[i-1]

print(count)

# create new array indexing old
r =  [count[num] for num in nums]
print(r)
