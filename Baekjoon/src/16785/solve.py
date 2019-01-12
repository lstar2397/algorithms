A, B, C = map(int, input().split())
r, c = 0, 0
while r < C:
    r += A
    c += 1
    if c % 7 == 0:
        r += B
print(c)