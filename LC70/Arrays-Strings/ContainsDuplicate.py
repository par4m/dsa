




nums = [1,2,3,1]

s = set()

for num in nums:
    if num in s:
        return True
    s.add(num)



