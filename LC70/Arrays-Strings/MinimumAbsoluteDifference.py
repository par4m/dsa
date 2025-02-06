arr = [4,2,1,3]
arr.sort()

res = []


m = float('inf')
for i in range(1,len(arr)):
    m = min(arr[i] - arr[i-1], m)
    # min difference found
    
for i in range(1,len(arr)):
    if arr[i] - arr[i-1] == m:
        res.append([arr[i-1], arr[i]])

print(res)
