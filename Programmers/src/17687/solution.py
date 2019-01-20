def convert(n, base):
    T = "0123456789ABCDEF"
    q, r = divmod(n, base)
    if q == 0:
        return T[r]
    else:
        return convert(q, base) + T[r]

def solution(n, t, m, p):
    answer = ''
    i = 0
    while True:
        if len(answer) > m * t:
            break
        answer += str(convert(i, n))
        i += 1
    return answer[p-1:m*t:m]