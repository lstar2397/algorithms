def solution(num):
    for count in range(500):
        if num == 1:
            return count
        num = num * 3 + 1 if num % 2 else num // 2
    else:
        return -1