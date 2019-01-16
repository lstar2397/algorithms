def solution(phone_book):
    for i in range(len(phone_book) - 1):
        for j in range(i + 1, len(phone_book)):
            a, b = phone_book[i], phone_book[j]
            if len(a) > len(b):
                if b == a[:len(b)]:
                    return False
            else:
                if a == b[:len(a)]:
                    return False
    return True