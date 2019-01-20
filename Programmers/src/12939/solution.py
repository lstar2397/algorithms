def solution(s):
    d = [*map(int, s.split())]
    return "%d %d" % (min(d), max(d))