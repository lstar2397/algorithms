def solution(priorities, location):    
    answer = 1
    priorities = [(value, index) for index, value in enumerate(priorities)]
    while True:
        current = priorities[0]
        if current[0] == max(priorities)[0] and current[1] == location:
            break
        elif current[0] == max(priorities)[0]:
            priorities.pop(0)
            answer += 1
        else:
            priorities.append(current)
            del priorities[0]
    return answer