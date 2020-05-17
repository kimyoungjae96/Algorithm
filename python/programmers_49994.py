def solution(dirs):
    s = [[0 for i in range(11)] for j in range(11)]
    answer = 0
    firstX, firstY = 5, 5
    for i in range(0, 11):
        for j in range(0, 11):
            s[i][j] = set()

    for idx, i in enumerate(dirs):
        s[firstY][firstX].add(str(firstY)+str(firstX))
        if(i == "U"):
            if(firstY-1 >= 0):
                # 위쪽으로 갈 수 있으면 원래 있던 곳에 갈 곳을 추가
                s[firstY][firstX].add(str(firstY-1)+str(firstX))
                firstY -= 1
                # 갈곳에 내것이 없으면 추가
                if str(firstY+1)+str(firstX) not in s[firstY][firstX]:
                    s[firstY][firstX].add(str(firstY+1)+str(firstX))
                    answer += 1
                    #print("firstX:", firstX, "firstY", firstY)

        elif(i == "L"):

            if(firstX-1 >= 0):
                s[firstY][firstX].add(str(firstY)+str(firstX-1))
                firstX -= 1

                if str(firstY)+str(firstX+1) not in s[firstY][firstX]:
                    s[firstY][firstX].add(str(firstY)+str(firstX+1))
                    answer += 1
                    #print("firstX:", firstX, "firstY", firstY)

        elif(i == "R"):
            if(firstX+1 < 11):
                s[firstY][firstX].add(str(firstY)+str(firstX+1))
                firstX += 1
                if str(firstY)+str(firstX-1) not in s[firstY][firstX]:
                    s[firstY][firstX].add(str(firstY)+str(firstX-1))
                    answer += 1
                    #print("firstX:", firstX, "firstY", firstY)
        elif(i == "D"):
            if(firstY+1 < 11):
                # [Y][X]에  이전 값을 푸시해야함.
                s[firstY][firstX].add(str(firstY+1)+str(firstX))
                firstY += 1
                if str(firstY-1)+str(firstX) not in s[firstY][firstX]:
                    s[firstY][firstX].add(str(firstY-1)+str(firstX))
                    answer += 1
                    #print("firstX:", firstX, "firstY", firstY)
    print(answer)
    return answer

