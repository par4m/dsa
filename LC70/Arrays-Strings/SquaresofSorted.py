nums = [-4,-1,0,3,10]
res =[0]*len(nums)

l = 0 
r = len(nums)-1
for i in range(len(nums) -1, -1, -1):
    if abs(nums[r]) >= abs(nums[l]):
        res[i] = nums[r]**2
        r -=1
    else:
        res[i] = nums[l]**2
        l += 1

print(res)
