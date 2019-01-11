def solution(a, b):
    dayOfWeek = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"]
    dayOfMonth = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    return dayOfWeek[(sum(dayOfMonth[:a - 1]) + b + 4) % 7]