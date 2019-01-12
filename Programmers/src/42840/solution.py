def solution(answers):
    fP = [1, 2, 3, 4, 5] * ((len(answers) + 4) // 5)
    sP = [2, 1, 2, 3, 2, 4, 2, 5] * ((len(answers) + 7) // 8)
    tP = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5] * ((len(answers) + 9) // 10)

    results = [0] * 3
    for index in range(len(answers)):
        answer = answers[index]
        if answer == fP[index]:
            results[0] += 1
        if answer == sP[index]:
            results[1] += 1
        if answer == tP[index]:
            results[2] += 1
    return [index + 1 for index, result in enumerate(results) if result == max(results)]