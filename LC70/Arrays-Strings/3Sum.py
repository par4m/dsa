nums = [-1,0,1,2,-1,-4]
nums.sort()
print(nums)
left = nums[1]
res = []
for i in range(len(nums)):

    if i > 0 and nums[i] == nums[i-1]:
        continue

    left = i+1
    right = len(nums) - 1
    while left < right:
        val = nums[i] + nums[left] + nums[right]

        if val == 0:
            res.append([nums[i],nums[left],nums[right]])
            left+=1
            
            while left > 0 and nums[left] == nums[left-1]:
                left+=1
        # left += 1
        # right -=1
        if val > 0:
            right -= 1
        if val < 0:
            left +=1

print(res)
