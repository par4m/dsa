arr = [2,1,4,7,3,2,5]
ret = 0
# if len(arr) < 3:
#     return 0

for i in range(1, len(arr) -1 ):
    if arr[i-1] < arr[i] > arr[i+1]:
        l = r = i
        while l > 0 and arr[l] > arr[l-1]:
            l -= 1
        while r < len(arr) -1 and arr[r] > arr[r+1]:
            r += 1
        
        ret = max(ret, r - l + 1)
print(ret)
