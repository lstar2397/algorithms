def solution(s, n):
    answer = ""
    for c in s:
        if c.isalpha():
            if c.isupper():
                answer += chr((ord(c) - ord("A") + n) % 26 + ord("A"))
            else:
                answer += chr((ord(c) - ord("a") + n) % 26 + ord("a"))
        else:
            answer += c
    return answer