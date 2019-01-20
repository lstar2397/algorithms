def solution(triangle):
    for i in range(len(triangle) - 1, -1, -1):
        for j in range(i):
            triangle[i - 1][j] += max(triangle[i][j], triangle[i][j + 1])
    return triangle[0][0]