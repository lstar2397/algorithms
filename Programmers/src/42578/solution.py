def solution(clothes):
    d = {}
    for cloth in clothes:
        value, key = cloth
        if key in d:
            d[key] += 1
        else:
            d[key] = 1
    answer = 1
    for key in d:
        answer *= d[key] + 1
    return answer - 1