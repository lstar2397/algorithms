def solution(a, b):
    n, k = min(a, b), abs(a - b)
    return (n * (k + 1) + k * (k + 1) // 2)