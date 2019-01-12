def solution(brown, red):
    w_h = brown + red
    w_plus_h = (brown + 4) // 2
    for h in range(1, w_plus_h // 2 + 1):
        w = w_plus_h - h
        if w * h == w_h:
            return [w, h]