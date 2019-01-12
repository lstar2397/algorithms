def solution(arr):
    minValue = min(arr)
    while minValue in arr:
        arr.remove(minValue)
    return arr if len(arr) > 0 else [-1]