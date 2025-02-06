from math import sqrt


points = [[3,2],[-2,2]]
start = points[0]
s = start[0] + start[1]

for i in range(1,len(points)):
    print(points[i])


# Above is wrong
#



# Correct
res = 0 
x1, y1 = points.pop()

while points:
    x2, y2 = points.pop()
    res += max(abs(y2-y1), abs(x2-x1))
    x1, y1 = x2, y2
print(res)


