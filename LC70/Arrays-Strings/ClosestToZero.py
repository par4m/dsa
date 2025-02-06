nums = [-4,-2,1,4,8]

res = nums[0]
for i in range(1,len(nums)):
    if abs(nums[i]) < abs(res):
        res = nums[i]

    if res < 0:
        if abs(res) == nums[i]:
           res = nums[i]

print(res)
# return res
        
