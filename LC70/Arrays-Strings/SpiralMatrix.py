matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]

res = []
while matrix:
# get first row fully and pop
    #
    if matrix and matrix[0]:
        res += (matrix.pop(0))

    print(matrix)

# get last column 
    if matrix:
        for row in matrix:
            res.append(row.pop())

    print(matrix)

    if matrix:
# add last row in reverse
        res += matrix.pop()[::-1]
    print(matrix)

# reverse the matrix and append all elements 
    if matrix and matrix[0]:
        for row in matrix[::-1]:
            res.append(row.pop(0))
    print(matrix)



print(res)

