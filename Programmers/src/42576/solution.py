def solution(participant, completion):
    completion.sort(), participant.sort()
    for index in range(len(completion)):
        if completion[index] != participant[index]:
            return participant[index]
    return participant[-1]