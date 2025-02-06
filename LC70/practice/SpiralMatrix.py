

res = []

# matrix = [[1,2,3],[4,5,6],[7,8,9]]
matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]

while matrix:

    print(matrix)

    if matrix and matrix[0]:
        res += matrix.pop(0)

    print(matrix)


    if matrix and matrix[0]:
        for row in matrix:
            res.append(row.pop())

    print(matrix)
    if matrix and matrix[0]:
            res += matrix.pop()[::-1]

    print(matrix)
    if matrix and matrix[0]:
        for row in matrix[::-1]:
            res.append(row.pop(0))

    print(matrix)

