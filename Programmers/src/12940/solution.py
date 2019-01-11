def gcd(a, b):
    return gcd(b, a % b) if b else a

def lcm(a, b):
    return a * b // gcd(a, b)

def solution(n, m):
    return [gcd(n, m), lcm(n, m)]