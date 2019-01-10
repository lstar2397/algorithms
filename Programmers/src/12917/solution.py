def solution(s):
    return ''.join(sorted(s, key=ord, reverse=True))