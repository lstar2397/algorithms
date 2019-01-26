def solution(skill, skill_trees):
    for index in range(len(skill_trees)):
        skill_tree = skill_trees[index]
        skill_trees[index] = ''.join(ch for ch in skill_tree if ch in skill)
    
    answer = 0
    for skill_tree in skill_trees:
        answer += int(skill_tree == skill[:len(skill_tree)])
    return answer