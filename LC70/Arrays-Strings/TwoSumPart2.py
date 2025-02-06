nums = [2,7,11,15]
target = 9

l = 0 
r = len(nums)-1

while l < r:
    val = nums[r] + nums[l]
    if target == val:
       print(l+1,r+1)
       exit(0)
    elif target < val:
        r-=1
    else:
        l+=1



