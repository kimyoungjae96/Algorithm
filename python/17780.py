# 체스판의 크기 N, 말의 개수 K

N, K = map(int, input().split())
Chess = []
# TempPiece = [[[]] * N] * N
ChessPiece = [[[] for i in range(N)] for k in range(N)]

# 체스 정보 입력 부분
for i in range(0, N):
    Chess.append(list(map(int, input().split())))
    # print(chess)

# 말 정보 입력 부분
# 행,열의번호,이동방향(1 => 오른쪽 , 2 => 왼쪽, 3 => 위쪽 , 4=> 아래쪽)
for i in range(0, K):
    row, col, move = map(int, input().split())
    ChessPiece[row-1][col-1].append([i+1, move])  # 말 정보 번호랑 이동방향 입력
    print(len(ChessPiece[row-1][col-1]))

# 번호 순서대로 이동
# print(ChessPiece)
i = 0
# while(i <= 1000):
for jIndex, j in enumerate(ChessPiece):
    for kIndex, k in enumerate(j):
        if(len(k) == K):  # 한곳에 다 모였을 경우 게임 종료
            print(i)
            exit
        else:
            if(Chess[jIndex][kIndex] == 0):  # 흰색일경우
                if k[0][1] == 1:  # 오른쪽
                    if(Chess[jIndex][kIndex] == 0 & kIndex+1 < N):
                        while(len(ChessPiece[jIndex][kIndex]) != 0):
                            # 맨 앞에 값 임시 저장
                            Temp = ChessPiece[jIndex][kIndex][0]
                            ChessPiece.pop(0)  # 맨 뒤에 값 팝
                            ChessPiece[jIndex][kIndex+1].append(Temp)
                elif k[0][1] == 2:  # 왼쪽
                    if(Chess[jIndex][kIndex] == 0 & kIndex-1 > 0):
                        while(len(ChessPiece[jIndex][kIndex]) != 0):
                            # 맨 앞에 값 임시 저장
                            Temp = ChessPiece[jIndex][kIndex][0]
                            ChessPiece.pop(0)  # 맨 앞에 값 팝
                            ChessPiece[jIndex][kIndex-1].append(Temp)
                elif k[0][1] == 3:  # 위쪽
                    if(Chess[jIndex][kIndex] == 0 & jIndex-1 > 0):
                        while(len(ChessPiece[jIndex][kIndex]) != 0):
                            # 맨 앞에 값 임시 저장
                            Temp = ChessPiece[jIndex][kIndex][0]
                            ChessPiece.pop(0)  # 맨 앞에 값 팝
                            ChessPiece[jIndex-1][kIndex].append(Temp)
                elif k[0][1] == 4:  # 아래쪽
                    if(Chess[jIndex][kIndex] == 0 & jIndex+1 < N):
                        while(len(ChessPiece[jIndex][kIndex]) != 0):
                            # 맨 앞에 값 임시 저장
                            Temp = ChessPiece[jIndex][kIndex][0]
                            ChessPiece.pop(0)  # 맨 앞에 값 팝
                            ChessPiece[jIndex+1][kIndex].append(Temp)
            elif(Chess[jIndex][kIndex] == 1):  # 빨간색인경우
            elif(Chess[jIndex][kIndex] == 1):  # 파란색인경우
i += 1


def moveMentChange(number):
    if number == 1:
        return 2
    elif number == 2:
        return 1
    elif number == 3:
        return 4
    elif number == 4:
        return 3
