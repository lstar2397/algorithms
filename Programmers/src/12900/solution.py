def solution(n):
    d = [1, 2, 3]
    if n <= len(d):
        return d[n - 1]
    for i in range(n - 3):
        d[0], d[1] = d[1], d[2]
        d[2] = sum(d[:2]) % 1000000007
    return d[2]