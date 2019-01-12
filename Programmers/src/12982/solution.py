def solution(d, budget):
    count = 0
    for element in sorted(d):
        if element > budget:
            return count
        budget -= element
        count += 1
    return count