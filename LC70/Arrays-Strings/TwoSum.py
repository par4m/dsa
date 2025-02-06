nums = [2,7,11,15]
target = 9
ret = []

d = {}


for i, v in enumerate(nums):
    complement = target - v

    if complement in d:
        return [i,d[complement]]
       
    else:
        d[v] = i

print(ret)

