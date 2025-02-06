nums = [8,1,2,2,3]
count = [0]*500



# count frequency
for num in nums:
    count[num+1] += 1

# pre compute 
#
for i in range(1,500):
    count[i] += count[i-1]


print(count)
r = [count[num] for num in nums]

print(r)
