nums = [2,7,11,15]


target = 9
di = {}

for i,val in enumerate(nums):
    if target - val  in di:
        return [i, di[val]]
    di[target-val] = i
        

