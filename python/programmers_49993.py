def solution(skill, skill_trees):
    answer = len(skill_trees)

    for jIndex, j in enumerate(skill_trees):
        prev_idx = 0
        chk = 0
        for i in skill:
            if i not in list(j):  # c 스킬이 없었을때 다음꺼가 나왔으면?
                chk = 1
            else:  # 스킬이 있었으면
                if(chk == 1):
                    answer -= 1
                    break
                if(prev_idx > list(j).index(i)):
                    answer -= 1
                    break
                prev_idx = list(j).index(i)

    return answer
