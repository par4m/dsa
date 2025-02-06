res = 0 
points = [[1,1],[3,4],[-1,0]]


x1 , y1 = points.pop()
print(x1,y1)

while points:
    print("x1 and y1 ", x1, y1)
    x2,y2 = points.pop()
    print("x2 and y2 ", x2, y2)
    res += max(abs(y2-y1), abs(x2-x1))
    print("Res is ", res)
    x1,y1 = x2,y2
