

nums = [1,2,3,1]
k = 3

s = set()
for i, val in enumerate(nums):
    if val in s:
        print(True)
        exit(0)
    else:
        s.add(val)
    if len(s) > k:
        s.remove(nums[i-k])
        
print(False)


