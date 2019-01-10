def solution(arr, divisor):
    answer = []
    for element in arr:
        if element % divisor == 0:
            answer.append(element)
    return sorted(answer) if len(answer) > 0 else [-1]