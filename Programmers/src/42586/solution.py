def solution(progresses, speeds):
    days = []
    for index in range(len(progresses)):
        progress, speed = progresses[index], speeds[index]
        days.append(((100 - progress) + (speed - 1)) // speed)
    
    answer = []
    maxValue, count = days[0], 1
    for index in range(1, len(days)):
        day = days[index]
        if day <= maxValue:
            count += 1
        else:
            answer.append(count)
            maxValue, count = day, 1
    return answer + [count]