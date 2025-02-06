nums = [4,3,2,7,8,2,3,1]


s = set(nums)

ret = []

for i in range(1,len(nums)+1):
    if i not in s:
        ret.append(i)

return ret
